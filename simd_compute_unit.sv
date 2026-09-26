/* verilator lint_off IMPORTSTAR */
import simd_pkg::*;

module simd_compute_unit (
    input  logic                  clk,
    input  logic                  rst_n,
    
    // Instruction Input Interface
    input  simd_inst_t            inst_in,
    input  logic                  inst_valid,
    output logic                  inst_ready,
    input  logic [MASK_WIDTH-1:0] active_mask,
    
    // Debug Outputs
    output logic [NUM_LANES-1:0][DATA_WIDTH-1:0] vector_out
);

    // Internal Wires
    alu_op_e                   alu_op;
    logic [REG_ADDR_WIDTH-1:0] raddr_a, raddr_b, waddr;
    logic                      rf_wen;
    logic [MASK_WIDTH-1:0]     exec_mask;
    logic                      is_mem_op;

    logic [NUM_LANES-1:0][DATA_WIDTH-1:0] operand_a;
    logic [NUM_LANES-1:0][DATA_WIDTH-1:0] operand_b;
    logic [NUM_LANES-1:0][DATA_WIDTH-1:0] alu_results;
    logic [NUM_LANES-1:0]                 cmp_results;
    logic [NUM_LANES-1:0][DATA_WIDTH-1:0] mem_rdata;
    logic [NUM_LANES-1:0][DATA_WIDTH-1:0] writeback_data;

    // 1. Warp Scheduler / Execution Controller
    warp_scheduler scheduler_inst (
        .clk(clk),
        .rst_n(rst_n),
        .inst_in(inst_in),
        .inst_valid(inst_valid),
        .inst_ready(inst_ready),
        .active_mask_in(active_mask),
        .alu_op(alu_op),
        .raddr_a(raddr_a),
        .raddr_b(raddr_b),
        .waddr(waddr),
        .rf_wen(rf_wen),
        .active_mask_out(exec_mask),
        .is_mem_op(is_mem_op)
    );

    // 2. Vector Register File
    vector_regfile regfile_inst (
        .clk(clk),
        .rst_n(rst_n),
        .raddr_a(raddr_a),
        .rdata_a(operand_a),
        .raddr_b(raddr_b),
        .rdata_b(operand_b),
        .wen(rf_wen),
        .exec_mask(exec_mask),
        .waddr(waddr),
        .wdata(writeback_data)
    );

    // 3. Execution Lanes (Instantiated across NUM_LANES)
    genvar i;
    generate
        for (i = 0; i < NUM_LANES; i++) begin : gen_lanes
            lane_alu lane_inst (
                .clk(clk),
                .enable(exec_mask[i]),
                .alu_op(alu_op[3:0]),
                .operand_a(operand_a[i]),
                .operand_b(operand_b[i]),
                .result(alu_results[i]),
                .cmp_result(cmp_results[i])
            );
        end
    endgenerate

    // Memory Coalescing & Memory Subsystem Interface Wires
    logic [DATA_WIDTH-1:0] mem_base_addr;
    logic                  coalesced_req_valid;
    logic [MASK_WIDTH-1:0] coalesced_mask;
    logic                  unused_is_coalesced;
    logic [7:0]            unused_burst_len;

    // 4. Memory Coalescer Engine
    /* verilator lint_off PINMISSING */
    memory_coalescer coalescer_inst (
        .mask(exec_mask),
        .lane_addrs(alu_results),
        .base_addr(mem_base_addr),
        .is_coalesced(unused_is_coalesced),
        .burst_len(unused_burst_len)
    );
    /* verilator lint_on PINMISSING */

    // 5. Memory Model
    /* verilator lint_off PINCONNECTEMPTY */
    memory mem_inst (
        .clk(clk),
        .rst_n(rst_n),
        .mem_req_valid(coalesced_req_valid),
        .mem_write(alu_op == ALU_STORE),
        .base_addr(mem_base_addr),
        .wdata(operand_b),
        .mem_mask(coalesced_mask),
        .rdata(mem_rdata),
        .mem_ready()
    );
    /* verilator lint_on PINCONNECTEMPTY */

    // Mux ALU or Memory Read Data to Writeback
    assign writeback_data = is_mem_op ? mem_rdata : alu_results;
    assign vector_out     = writeback_data;

endmodule
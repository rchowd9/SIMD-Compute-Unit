import simd_pkg::*;

module warp_scheduler (
    input  logic                    clk,
    input  logic                    rst_n,
    
    // Instruction Interface
    input  simd_inst_t              inst_in,
    input  logic                    inst_valid,
    output logic                    inst_ready,
    
    // Execution Mask Configuration
    input  logic [MASK_WIDTH-1:0]   active_mask_in,
    
    // Dispatched Control Signals
    output alu_op_e                 alu_op,
    output logic [REG_ADDR_WIDTH-1:0] raddr_a,
    output logic [REG_ADDR_WIDTH-1:0] raddr_b,
    output logic [REG_ADDR_WIDTH-1:0] waddr,
    output logic                    rf_wen,
    output logic [MASK_WIDTH-1:0]   active_mask_out,
    output logic                    is_mem_op
);

    assign inst_ready      = 1'b1; // Simplified single-issue scheduling pipeline
    assign alu_op          = inst_valid ? inst_in.op  : ALU_NOP;
    assign raddr_a         = inst_in.rs1;
    assign raddr_b         = inst_in.rs2;
    assign waddr           = inst_in.rd;
    assign active_mask_out = active_mask_in;
    assign is_mem_op       = inst_in.is_memory_op;

    // Regfile write-enable logic
    assign rf_wen = inst_valid && (inst_in.op != ALU_NOP) && (inst_in.op != ALU_STORE);

endmodule
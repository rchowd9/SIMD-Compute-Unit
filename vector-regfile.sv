import simd_pkg::*;

module vector_regfile (
    input  logic                                clk,
    input  logic                                rst_n,
    
    // Read Ports (Multi-lane parallel vectors)
    input  logic [REG_ADDR_WIDTH-1:0]           raddr_a,
    output logic [NUM_LANES-1:0][DATA_WIDTH-1:0] rdata_a,
    
    input  logic [REG_ADDR_WIDTH-1:0]           raddr_b,
    output logic [NUM_LANES-1:0][DATA_WIDTH-1:0] rdata_b,
    
    // Write Port (Gated per lane by execution mask)
    input  logic                                wen,
    input  logic [MASK_WIDTH-1:0]               exec_mask,
    input  logic [REG_ADDR_WIDTH-1:0]           waddr,
    input  logic [NUM_LANES-1:0][DATA_WIDTH-1:0] wdata
);

    // 32 Vector Registers x NUM_LANES x 32-bit Data
    logic [NUM_LANES-1:0][DATA_WIDTH-1:0] registers [32];

    // Asynchronous Read
    always_comb begin
        rdata_a = registers[raddr_a];
        rdata_b = registers[raddr_b];
    end

    // Synchronous Write with Mask Gating
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < 32; i++) begin
                registers[i] <= '0;
            end
        end else if (wen) begin
            for (int lane = 0; lane < NUM_LANES; lane++) begin
                if (exec_mask[lane]) begin
                    registers[waddr][lane] <= wdata[lane];
                end
            end
        end
    end

endmodule
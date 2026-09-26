import simd_pkg::*;

module memory (
    input  logic                                clk,
    input  logic                                rst_n,
    
    // Coalesced Memory Access Interface
    input  logic                                mem_req_valid,
    input  logic                                mem_write,
    input  logic [DATA_WIDTH-1:0]               base_addr,
    input  logic [NUM_LANES-1:0][DATA_WIDTH-1:0] wdata,
    input  logic [MASK_WIDTH-1:0]               mem_mask,
    
    output logic [NUM_LANES-1:0][DATA_WIDTH-1:0] rdata,
    output logic                                mem_ready
);

    // Simple SRAM Memory Array Model (1024 Words)
    logic [DATA_WIDTH-1:0] ram [1024];

    assign mem_ready = 1'b1; // Single-cycle memory access completion simulation

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < 1024; i++) ram[i] <= i; // Initialize memory
        end else if (mem_req_valid) begin
            for (int lane = 0; lane < NUM_LANES; lane++) begin
                if (mem_mask[lane]) begin
                    logic [REG_ADDR_WIDTH+4:0] word_addr;
                    word_addr = (base_addr + (lane * 4)) >> 2;
                    
                    if (mem_write) begin
                        ram[word_addr] <= wdata[lane];
                    end else begin
                        rdata[lane] <= ram[word_addr];
                    end
                end
            end
        end
    end

endmodule
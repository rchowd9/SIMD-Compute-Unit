// memory_coalescer.sv
// Detects contiguous 32-bit addresses across active lanes
module memory_coalescer #(
    parameter LANES = 8
)(
    input  logic [LANES-1:0]       mask,
    input  logic [LANES-1:0][31:0] lane_addrs,
    output logic                   is_coalesced,
    output logic [31:0]            base_addr,
    output logic [7:0]             burst_len
);

    logic contiguous;
    integer i;

    always_comb begin
        base_addr    = lane_addrs[0];
        contiguous   = 1'b1;
        burst_len    = 8'd0;

        // Count active lanes and check for sequential 4-byte aligned addresses
        for (i = 0; i < LANES; i++) begin
            if (mask[i]) begin
                burst_len = burst_len + 1'b1;
                if (i > 0 && mask[i-1]) begin
                    if (lane_addrs[i] != lane_addrs[i-1] + 32'd4) begin
                        contiguous = 1'b0;
                    end
                end
            end
        end

        // Fully coalesced if addresses are sequential across active lanes
        is_coalesced = contiguous && (burst_len > 0);
    end

endmodule
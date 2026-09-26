// lane_alu.sv
module lane_alu (
    input  logic        clk,
    input  logic        enable,      // Mask bit for this lane
    input  logic [3:0]  alu_op,      // ALU Operation Code
    input  logic [31:0] operand_a,
    input  logic [31:0] operand_b,
    output logic [31:0] result,
    output logic        cmp_result
);

    always_comb begin
        result     = 32'b0;
        cmp_result = 1'b0;
        
        if (enable) begin
            case (alu_op)
                4'b0000: result = operand_a + operand_b;              // ADD
                4'b0001: result = operand_a - operand_b;              // SUB
                4'b0010: result = operand_a * operand_b;              // MUL
                4'b0011: result = operand_a & operand_b;              // AND
                4'b0100: result = operand_a | operand_b;              // OR
                4'b0101: result = operand_a ^ operand_b;              // XOR
                4'b0110: cmp_result = ($signed(operand_a) < $signed(operand_b)); // CMP LT
                4'b0111: cmp_result = (operand_a == operand_b);       // CMP EQ
                default: result = 32'b0;
            endcase
        end
    end

endmodule
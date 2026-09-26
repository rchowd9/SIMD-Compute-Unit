package simd_pkg;

    // Architectural Parameters
    localparam int NUM_LANES        = 8;             // 8 parallel execution lanes
    localparam int DATA_WIDTH       = 32;            // 32-bit registers & data path
    localparam int REG_ADDR_WIDTH   = 5;             // 32 vector registers (v0 - v31)
    localparam int MASK_WIDTH       = NUM_LANES;     // 1 bit per lane active mask

    // ALU Opcodes
    typedef enum logic [3:0] {
        ALU_NOP  = 4'b0000,
        ALU_ADD  = 4'b0001,
        ALU_SUB  = 4'b0010,
        ALU_MUL  = 4'b0011,
        ALU_AND  = 4'b0100,
        ALU_OR   = 4'b0101,
        ALU_XOR  = 4'b0110,
        ALU_SLL  = 4'b0111,
        ALU_SRL  = 4'b1000,
        ALU_LOAD = 4'b1001,
        ALU_STORE= 4'b1010
    } alu_op_e;

    // SIMD Instruction Structure
    typedef struct packed {
        alu_op_e                  op;
        logic [REG_ADDR_WIDTH-1:0] rd;
        logic [REG_ADDR_WIDTH-1:0] rs1;
        logic [REG_ADDR_WIDTH-1:0] rs2;
        logic                      is_memory_op;
    } simd_inst_t;

endpackage: simd_pkg
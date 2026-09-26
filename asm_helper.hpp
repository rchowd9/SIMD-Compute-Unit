#ifndef ASM_HELPER_HPP
#define ASM_HELPER_HPP

#include "golden_model.hpp"

class SIMDAssembler {
public:
    static SIMDInstruction make_add(uint8_t rd, uint8_t rs1, uint8_t rs2) {
        return {Opcode::ADD, rd, rs1, rs2, false};
    }

    static SIMDInstruction make_sub(uint8_t rd, uint8_t rs1, uint8_t rs2) {
        return {Opcode::SUB, rd, rs1, rs2, false};
    }

    static SIMDInstruction make_mul(uint8_t rd, uint8_t rs1, uint8_t rs2) {
        return {Opcode::MUL, rd, rs1, rs2, false};
    }

    static SIMDInstruction make_load(uint8_t rd, uint8_t base_reg) {
        return {Opcode::LOAD, rd, base_reg, 0, true};
    }

    static SIMDInstruction make_store(uint8_t src_reg, uint8_t base_reg) {
        return {Opcode::STORE, 0, base_reg, src_reg, true};
    }
};

#endif // ASM_HELPER_HPP
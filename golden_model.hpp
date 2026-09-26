#ifndef GOLDEN_MODEL_HPP
#define GOLDEN_MODEL_HPP

#include <iostream>
#include <vector>
#include <array>
#include <cstdint>
#include <cassert>

constexpr int NUM_LANES = 8;
constexpr int NUM_REGS  = 32;

enum class Opcode : uint8_t {
    NOP   = 0,
    ADD   = 1,
    SUB   = 2,
    MUL   = 3,
    AND   = 4,
    OR    = 5,
    XOR   = 6,
    SLL   = 7,
    SRL   = 8,
    LOAD  = 9,
    STORE = 10
};

struct SIMDInstruction {
    Opcode   op;
    uint8_t  rd;
    uint8_t  rs1;
    uint8_t  rs2;
    bool     is_mem_op;
};

class GoldenSIMDModel {
private:
    std::array<std::array<uint32_t, NUM_LANES>, NUM_REGS> vregs{};
    std::array<uint32_t, 1024> memory{};
    uint8_t active_mask = 0xFF;

public:
    GoldenSIMDModel() {
        // Initialize memory with default sequential values
        for (size_t i = 0; i < memory.size(); ++i) {
            memory[i] = static_cast<uint32_t>(i);
        }
    }

    void set_active_mask(uint8_t mask) {
        active_mask = mask;
    }

    void execute(const SIMDInstruction& inst) {
        if (inst.op == Opcode::NOP) return;

        for (int lane = 0; lane < NUM_LANES; ++lane) {
            if (!(active_mask & (1 << lane))) continue; // Skip inactive lanes

            uint32_t op_a = vregs[inst.rs1][lane];
            uint32_t op_b = vregs[inst.rs2][lane];

            switch (inst.op) {
                case Opcode::ADD:
                    vregs[inst.rd][lane] = op_a + op_b;
                    break;
                case Opcode::SUB:
                    vregs[inst.rd][lane] = op_a - op_b;
                    break;
                case Opcode::MUL:
                    vregs[inst.rd][lane] = op_a * op_b;
                    break;
                case Opcode::AND:
                    vregs[inst.rd][lane] = op_a & op_b;
                    break;
                case Opcode::OR:
                    vregs[inst.rd][lane] = op_a | op_b;
                    break;
                case Opcode::XOR:
                    vregs[inst.rd][lane] = op_a ^ op_b;
                    break;
                case Opcode::LOAD: {
                    uint32_t addr = (op_a + (lane * 4)) >> 2;
                    vregs[inst.rd][lane] = memory[addr % 1024];
                    break;
                }
                case Opcode::STORE: {
                    uint32_t addr = (op_a + (lane * 4)) >> 2;
                    memory[addr % 1024] = op_b;
                    break;
                }
                default:
                    break;
            }
        }
    }

    const std::array<uint32_t, NUM_LANES>& get_register(uint8_t reg_idx) const {
        return vregs[reg_idx];
    }

    void set_register(uint8_t reg_idx, const std::array<uint32_t, NUM_LANES>& values) {
        vregs[reg_idx] = values;
    }
};

#endif // GOLDEN_MODEL_HPP
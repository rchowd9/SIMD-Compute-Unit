# 8-Lane SIMD Compute Unit Simulator

A GPU-style 8-lane SIMD (Single Instruction, Multiple Data) Compute Unit designed in SystemVerilog and verified using Verilator and C++. The project supports containerized simulation via Docker and cloud-native deployment on Fly.io.

---

## Architecture Overview

The compute unit models core GPU execution concepts, including:
* **8 Parallel Vector Lanes:** Executes SIMD vector arithmetic and logical operations.
* **Predicated Execution:** Masked execution across active/inactive lanes.
* **Vector Register File:** Multi-lane register storage for vector operands.
* **Memory Coalescer:** Combines memory access requests across active vector lanes.
* **Warp Scheduler:** Handles cycle-by-cycle warp instruction issues and pipeline control.

---

## Repository Structure

```text
.
├── simd_pkg.sv           # Package definitions, parameters, and types
├── lane_alu.sv           # Individual vector lane ALU
├── vector_regfile.sv     # Multi-lane vector register file
├── memory_coalescer.sv   # Memory access coalescing unit
├── memory.sv             # Memory module
├── warp_scheduler.sv     # Instruction scheduling logic
├── simd_compute_unit.sv  # Top-level SIMD module
├── main.cpp              # Verilator C++ testbench driver
├── Makefile              # Compilation and build targets
├── Dockerfile            # Container build and execution environment
└── fly.toml              # Fly.io deployment configuration
# Simulator Configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --trace --exe --build

# Target Module
TOP_MODULE = simd_compute_unit
SV_FILES = simd_pkg.sv lane-alu.sv vector_regfile.sv memory-coalescer.sv memory.sv warp_scheduler.sv simd_compute_unit.sv
CPP_FILE = main.cpp

all: build

build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SV_FILES) $(CPP_FILE) --top-module $(TOP_MODULE)

run: build
	./obj_dir/V$(TOP_MODULE)

clean:
	rm -rf obj_dir *.vcd

.PHONY: all build run clean
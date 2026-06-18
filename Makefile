SHELL := /bin/bash

OBJ_DIR ?= Vspi_tb

VERILATOR_FLAGS = \
    -ISPI_interface\
	-ITest


# Lint only mode to check for errors and warnings 
lint:
	verilator --lint-only $(VERILATOR_FLAGS) -f verilator.f

# Running the Simulation 
run: 
	verilator --binary $(VERILATOR_FLAGS) -f verilator.f 
	./obj_dir/Vspi_tb

# Pulling up Waveforms with saved scopes 
wave: 
	gtkwave spi_tb.vcd 

# Clean workspace 
clean:
	rm -rf obj_dir run.log
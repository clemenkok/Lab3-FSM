#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f lfsr.vcd

# run Verilator to translate Verilog into C++, including C++ Testbench
verilator -Wall -Wno-fatal --cc --trace lfsr.sv --exe lfsr_tb.cpp

# build CPP project via make automatically generaated
make -j -C obj_dir/ -f Vlfsr.mk Vlfsr

# run exe sim
obj_dir/Vlfsr
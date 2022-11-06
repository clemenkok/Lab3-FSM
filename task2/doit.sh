#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f f1_fsm.vcd

# run Verilator to translate Verilog into C++, including C++ Testbench
verilator -Wall -Wno-fatal --cc --trace f1_fsm.sv --exe f1_fsm_tb.cpp

# build CPP project via make automatically generaated
make -j -C obj_dir/ -f Vf1_fsm.mk Vf1_fsm

# run exe sim
obj_dir/Vf1_fsm
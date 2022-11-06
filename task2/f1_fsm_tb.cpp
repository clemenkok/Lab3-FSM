#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_fsm.h"

#include "vbuddy.cpp"     // include vbuddy code

int main(int argc, char **argv, char **env) {
  int i;     
  int clk;       

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vf1_fsm* top = new Vf1_fsm;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("f1_fsm.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T2: F1LS");
  vbdSetMode(1);

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;
  top->en = 1;

  // run simulation for 500 clock cycles
  for (i=0; i<500; i++) {
    // dump variables into VCD file and toggle clock
    for (clk=0; clk<2; clk++) {
      tfp->dump(2*i+clk);
      top->clk = !top->clk;
      top->eval ();
    }
    
    // plot output 
    vbdBar(top->data_out & 0xFF);
    vbdCycle(i+1);

    top->rst = (i < 2);
    top->en = vbdFlag();//vbdFlag();
    // std::cout << top->en << std::endl;

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);                // ... exit if finish OR 'q' pressed
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}

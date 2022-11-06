module top #(
	parameter WIDTH = 16,
  parameter D_WIDTH = 8
)(
  // interface signals
  input  logic                clk,      // clock 
  input  logic                rst,      // reset
  input  logic                en,       // enable signal
  input  logic [WIDTH-1:0]    N,     	 // clock divided by N+1
  output logic [D_WIDTH-1:0]  data_out  // tick output
);

logic count;

clktick clkTick (
  .clk (clk),
  .rst (rst),
  .en (en),
  .N (N),
  .tick (count)
);

f1_fsm stateMachine (
  .en (count),
  .clk (clk),
  .rst (rst),
  .data_out (data_out)
);

endmodule

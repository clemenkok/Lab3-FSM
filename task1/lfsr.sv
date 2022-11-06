module lfsr (
    input logic                clk,
    input logic                rst,
    input logic                en,
    output logic [3:0]   data_out
);

    reg [3:0] sreg = 4'b1; // need to set an initial state for LFSR to work

    always_ff @ (posedge clk) begin
        //if (rst)
        //    sreg <= 4'b0;
        //else begin
        //if (en) begin
            sreg[3] <= sreg[2];
            sreg[2] <= sreg[1];
            sreg[1] <= sreg[0];
            sreg[0] <= sreg[2]^sreg[3];
        //end
        //end
    end
    assign data_out = sreg;

endmodule

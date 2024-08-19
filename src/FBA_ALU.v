`include "Full_Binary_Adder/Full_Binary_Adder.v"

module FBA_ALU 

  (
    input clk,
    input rst, // Active low
    input wire A,
    input wire B,
    input wire [2:0] func,
    output reg out,
    output reg c_out
  );


  wire c_in;
  wire b_buffer;
  wire s_out;
  reg c_reg;

  wire func_en = func[2];
  wire carry_en = func[1];
  wire logic_sel = func[0];


  always @ (posedge clk)
    if (!rst)
      c_reg <= 1'b0;
    else
      c_reg <= (c_in & carry_en) | logic_sel;


  assign c_out = c_reg;
  assign b_buffer = B & (carry_en ~& logic_sel);
  assign out = func_en ? c_in : s_out;


  Full_Binary_Adder FBA (
    .A(A),
    .B(b_buffer),
    .C_in(c_reg),
    .Sum(s_out),
    .C_out(c_in)
  );

endmodule

module Full_Binary_Adder (
    input reg A, B, C_in,
    output reg Sum, C_out
);

  wire partial_sum1;
  wire partial_carry1;
  wire partial_carry2;

  assign partial_sum1 = B ^ C_in;
  assign partial_carry1 = B & C_in;
  assign partial_carry2 = A & partial_sum1;

  assign Sum = A ^ partial_sum1;
  assign C_out = partial_carry1 | partial_carry2;

endmodule

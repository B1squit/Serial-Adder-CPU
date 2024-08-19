module Parallel_To_Serial
  #(
    parameter P_WIDTH = 8
  )
  
  (
    input wire clk, rst, 
    input wire l_s, // LOW = load, HIGH = shift
    input wire s_in,
    input wire [(P_WIDTH-1):0] p_in,
    output wire s_out
  );

  reg [(P_WIDTH-1):0] p_tmp;


  always @ (posedge clk)
    if (!rst) begin
      p_tmp <= {P_WIDTH{1'b0}};
    end else begin

      // shift high, load low
      if (~l_s) 
        p_tmp <= p_in;
      else
        p_tmp <= {s_in, p_tmp[P_WIDTH-1:1]};
    end      

  assign s_out = p_tmp[0]; 

endmodule

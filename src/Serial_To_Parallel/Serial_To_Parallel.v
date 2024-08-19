module Serial_To_Parallel
  #(
    parameter P_WIDTH = 8
  )
  
  (
    input wire clk, 
    input wire rst, oe, // Active low
    input wire s_in,
    output reg [(P_WIDTH-1):0] p_out,
    output reg s_out
  );

  reg [(P_WIDTH-1):0] p_tmp;

  
  always @ (posedge clk) begin
    if (!rst) begin
      p_tmp <= {P_WIDTH{1'b0}};
      s_out <= 1'b0;
    end 
    else begin
      p_tmp <= {s_in, p_tmp[P_WIDTH-1:1]};
      s_out <= p_tmp[0];
   end
  end

  
  always @ (*)
    if (!rst)
      p_out = {P_WIDTH{1'b0}};
    else if (!oe)
      p_out = p_tmp;
    else
      p_out = {P_WIDTH{1'bZ}};


endmodule

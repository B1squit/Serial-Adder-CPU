module Serial_To_Parallel_tb ();

  parameter clk_half_prd = 1;
  parameter clk_prd = clk_half_prd*2;
  parameter p_width = 8;
  parameter s_width = 8;

  reg clk;
  reg rst;

  reg output_enable;
  reg serial_in;
  wire serial_wire;
  reg [(p_width+s_width-1):0] vals_in; // p_width bits from MSB test parallel output, remaining test serial
  reg [s_width-1:0] serial_out;
  wire [p_width-1:0] parallel_out;

  integer i;

  
  task init();
    $dumpfile("test.vcd");
    $dumpvars;
    clk = 1'b0;
    rst = 1'b0;

    vals_in = {p_width+s_width{1'b0}};
    output_enable = 1'b0;

    #(clk_prd) rst = 1'b1;
  endtask


  always #(clk_half_prd) clk <= ~clk;


  task parallel_zeros_test();
    $display("Zero Test");
    
    vals_in = {p_width+s_width{1'b0}};
    test();
  endtask


  task parallel_ones_test();
    $display("One Test");
    
    vals_in = {{p_width{1'b1}},{s_width{1'b0}}};
    test();
  endtask


  task parallel_rand_test();
    $display("Random Input Test");

    vals_in = {{$urandom}[p_width-1:0],{s_width{1'b0}}};
    test();
  endtask


  task serial_zeros_test();
    $display("Zero Test");
    
    vals_in = {p_width+s_width{1'b0}};
    test();
  endtask


  task serial_ones_test();
    $display("One Test");
    
    vals_in = {{p_width{1'b1}},{s_width{1'b0}}};
    test();
  endtask


  task serial_rand_test();
    $display("Random Input Test");

    vals_in = {{$urandom}[p_width-1:0],{s_width{1'b0}}};
    test();
  endtask


  task test();
    bit_shift(p_width+s_width);

    if (vals_in != {parallel_out, serial_out})
      $Error("Error, serial input: %b, parallel output: %b, serial output: %b", vals_in, parallel_out, serial_out);
    else
      $display("~~ TEST SUCCESS ~~");
    
    $display("");
  endtask


  // Shift n bits from register into test register for later comparison
  task bit_shift(input integer n);

    for (i = 0; i < n; i++) begin
      serial_in = vals_in[i];
      #(clk_prd);
      serial_out = {serial_wire, serial_out[s_width-1:1]};
    end
  endtask


  initial begin
    init();
    $display("====================");

    parallel_zeros_test();
    parallel_ones_test();
    parallel_rand_test();
    serial_zeros_test();
    serial_ones_test();
    serial_rand_test();

    $display("~~ SUCCESS ~~");
    $display("====================");

    $finish;
  end


  Serial_To_Parallel #(.P_WIDTH(p_width)) STP (
    .clk(clk),
    .rst(rst),
    .oe(output_enable),
    .s_in(serial_in),
    .p_out(parallel_out),
    .s_out(serial_wire)
  );

endmodule

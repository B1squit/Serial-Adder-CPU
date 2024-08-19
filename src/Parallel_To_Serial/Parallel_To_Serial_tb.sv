module Parallel_To_Serial_tb ();

  parameter clk_half_prd = 1;
  parameter clk_prd = clk_half_prd*2;
  parameter p_width = 8;
  parameter s_width = 8;

  reg clk;
  reg rst;

  reg load_shift;
  reg serial_in;
  wire serial_out;
  reg [p_width-1:0] parallel_in;
  reg [p_width-1:0] serial_val;
  reg [(p_width+s_width-1):0] serial_output;

  integer i;


  task init();
    $dumpfile("test.vcd");
    $dumpvars;

    clk = 1'b0;
    rst = 1'b0;

    load_shift = 1'b0;
    serial_val = {p_width{1'b0}};
    parallel_in = {p_width{1'b0}};

    serial_output = {(p_width+s_width){1'b0}};

    #(clk_prd) rst = 1'b1;
  endtask


  // Begin clock
  always #(clk_half_prd) clk <= ~clk;


  // Zero shifting test
  task parallel_zero_test();
    $display("Zeros Test");
    
    parallel_in = {p_width{1'b0}};
    test();
  endtask


  // All 1s shifting test
  task parallel_ones_test();
    $display("Ones Test");
    
    parallel_in = {p_width{1'b1}};
    test();
  endtask

  
  // Random value shifting test
  task parallel_rand_test();
    $display("Random Test");
    
    parallel_in = {$urandom}[p_width-1:0];
    test();
  endtask
  
  
  // Serial zeros in test 
  task serial_zeros_test();
    $display("Zeros serial input test");
    
    parallel_in = {p_width{1'b0}};
    serial_val = {s_width{1'b0}};
    test();
  endtask
  
  
  // Serial ones in test 
  task serial_ones_test();
    $display("Ones serial input test");
    
    parallel_in = {p_width{1'b0}};
    serial_val = {s_width{1'b1}};
    test();
  endtask


  // Serial ones in test 
  task serial_rand_test();
    $display("Rand serial input test");

    parallel_in = {$urandom}[p_width-1:0];
    serial_val = {$urandom}[s_width-1:0];
    test();
  endtask
 
  
  // Parallel load and output test
  task automatic test();
    // Set to shift
    #(clk_prd) load_shift = 1'b1;

    shift_bits(p_width+s_width);

    if ({serial_val, parallel_in} != serial_output)
      $error("Error, In Serial: %b, In Parallel: %b, Test: %b", serial_val, parallel_in, serial_output);
    
    // Set to load
    load_shift = 1'b0;
    $display("~~ TEST SUCCESS ~~");
    $display("");
  endtask

 
  // Shift n bits from register into test register for later comparison
  task automatic shift_bits(input integer n);

    for (i = 0; i < n; i++) begin
      serial_output = {serial_out, serial_output[(p_width*2-1):1]};
      
      // Start passing serial values from LSB to MSB once parallel shifted through
      if (i < p_width)
        serial_in = serial_val[i];
      else
        serial_in = 1'b0;

      #(clk_prd);
    end
  endtask


  // Main testing body
  initial begin
    init();
    $display("====================");

    parallel_zero_test();
    parallel_ones_test();
    parallel_rand_test();
    serial_zeros_test();
    serial_ones_test();
    serial_rand_test();
    
    $display("##### SUCCESS #####");
    $display("TEST BENCH FINISHED");
    $display("=====================");
    $finish;
  end


  // Initialise modules under test
  Parallel_To_Serial #(.P_WIDTH(p_width)) PTS 
  (
    .clk(clk),
    .rst(rst),
    .l_s(load_shift),
    .p_in(parallel_in),
    .s_in(serial_in),
    .s_out(serial_out)
  );

endmodule

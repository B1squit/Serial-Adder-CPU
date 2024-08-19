module Full_Binary_Adder_tb();

  parameter clk_half_prd = 1;
  parameter clk_prd = clk_half_prd*2;

  //reg clk;
  //reg rst;

  reg [2:0] inputs;
  wire Sum;
  wire C_out;
  reg [1:0] result;


  task init();
    $dumpfile("test.vcd");
    $dumpvars;
    
    //clk = 0;
    //rst = 1;
    
    inputs = 0;

    //#4 rst = 0;
  endtask


  // Begin clock
  //always #2 clk <= ~clk;


  // Main test body
  initial begin
    init();

    $display("=====================");
    repeat (8) begin
      $display("Test %d", inputs);
      $display("Values: A %b, B %b, Carry in %b", inputs[0], inputs[1], inputs[2]);  
      result = inputs[0] + inputs[1] + inputs[2];

      #clk_prd if (result == {C_out, Sum}) begin 
        $display("Outputs Sum: %b, Carry out: %b", Sum, C_out);
        $display("~~ TEST SUCCESS ~~\n");
      end
      else begin
        $display("Outputs Sum: %b, Carry out: %b\n", Sum, C_out);
        $error("Error with test %d", inputs);
      end

      #clk_prd inputs = inputs + 3'b1;
    end

    $display("##### SUCCESS #####");
    $display("TEST BENCH FINISHED");
    $display("=====================");
    $finish;
  end


  // Initialise module under test
  Full_Binary_Adder FBA (
    .A(inputs[0]), 
    .B(inputs[1]),
    .C_in(inputs[2]),
    .Sum(Sum),
    .C_out(C_out)
  );
  
endmodule

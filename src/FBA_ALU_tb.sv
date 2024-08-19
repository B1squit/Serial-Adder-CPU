`include "Serial_To_Parallel/Serial_To_Parallel.v"
`include "Parallel_To_Serial/Parallel_To_Serial.v"

module FBA_ALU_tb ();

  parameter clk_half_prd = 1;
  parameter clk_prd = clk_half_prd*2;
  parameter p_width = 8;

  typedef enum bit[2:0] {
    Xor,
    Xnor,
    Sum,
    Not,
    And,
    Or,
    Carry,
    Buffer
  } func;

  reg clk;
  reg rst;
  
  reg load_shift;
  reg output_enable;

  reg ser_A;
  reg serial_in_A;
  reg ser_B;
  reg serial_in_B;
  wire out;
  wire carry_out;
  reg [(p_width-1):0] reg_A;
  reg [(p_width-1):0] reg_B;
  reg [(p_width-1):0] reg_Out;

  func func_sel;

  integer n_shift;


  task init;
    $dumpfile("test.vcd");
    $dumpvars;
    clk = 1'b0;
    rst = 1'b0;
    load_shift = 1'b0;
    output_enable = 1'b0;

    serial_in_A = 1'b0;
    serial_in_B = 1'b0;
    reg_A = {p_width{1'b0}};
    reg_B = {p_width{1'b0}};
    reg_Out = {p_width{1'b0}};
    func_sel = Xor;
    
    #(clk_prd) rst = 1'b1;
  endtask


  always #(clk_half_prd) clk <= ~clk;


  task reset();
    reg_A = {p_width{1'b0}};
    reg_B = {p_width{1'b0}};
    reg_Out = {p_width{1'b0}};
    
    rst = 1'b0;
    #(clk_prd) rst = 1'b1;
  endtask


  task set_zeros();
    load_shift = 1'b0;
    reg_A = {p_width{1'b0}};
    reg_B = {p_width{1'b0}};
    #(clk_prd);
  endtask

  
  task set_ones();
    load_shift = 1'b0;
    reg_A = {p_width{1'b1}};
    reg_B = {p_width{1'b1}};
    #(clk_prd);
  endtask

  
  task set_rand();
    load_shift = 1'b0;
    reg_A = {$urandom}[p_width-1:0];
    reg_B = {$urandom}[p_width-1:0];
    #(clk_prd);
  endtask


  task set_common_test();
    set_zeros();
    check(p_width);
    
    set_ones();
    check(p_width);

    set_rand();
    check(p_width);
  endtask


  task xor_test();
    func_sel = Xor;

    set_common_test();
  endtask


  task xnor_test();
    func_sel = Xnor;

    set_common_test();
  endtask


  task sum_test();
    func_sel = Sum;

    set_common_test();
  endtask


  task not_test();
    func_sel = Not;

    set_common_test();
  endtask


  task and_test();
    func_sel = And;

    set_common_test();
  endtask


  task or_test();
    func_sel = Or;

    set_common_test();
  endtask


  task carry_test();
    func_sel = Carry;

    set_common_test();
  endtask


  task buffer_test();
    func_sel = Buffer;
    
    for (n_shift = 0; n_shift < p_width*2; n_shift++) begin
      reset();
      set_zeros();
      check(n_shift);

      reset();
      set_ones();
      check(n_shift);

      reset();
      set_rand();
      check(n_shift);
    end
  endtask


  task bit_shift(input integer n);
    load_shift = 1'b1;
    repeat (n) #(clk_prd);
  endtask


  function automatic [(p_width-1):0] compt_carries();
    // Create temporary result variable, used to store previous carries during computation
    // Also set to be parallel width in +1 to accomodate initial carry
    reg [p_width:0] tmp = {(p_width+1){1'b0}};

    // Logic shift left by 1 to align with above
    reg [p_width:0] tmp_and = {reg_A&reg_B, 1'b0};
    reg [p_width:0] tmp_xor = {reg_A^reg_B, 1'b0};

    integer i;
    for (i = 1; i <= p_width; i++) begin
      tmp[i] = tmp_and[i] | (tmp_xor[i] & tmp[i-1]);
    end
    
    compt_carries = tmp[p_width:1];
  endfunction


  task check(input integer n);
    bit_shift(n);

    case (func_sel)
      Xor : if ({reg_A ^ reg_B} != reg_Out)
              $error("Error, Xor failed A: %b, B: %b, Out: %b", reg_A, reg_B, reg_Out);
      
      Xnor : if ({reg_A ~^ reg_B} != reg_Out)
              $error("Error, Xnor failed A: %b, B: %b, Out: %b", reg_A, reg_B, reg_Out);
      
      Sum : if ({1'b0, reg_A} + {1'b0, reg_B} != {carry_out, reg_Out})
              $error("Error, Addition failed A: %b, B: %b, Out: c%b %b", reg_A, reg_B, carry_out, reg_Out);
      
      Not : if (~reg_A != reg_Out)
              $error("Error, Not failed A: %b, Out: %b", reg_A, reg_Out);
      
      And : if ({reg_A & reg_B} != reg_Out)
              $error("Error, And failed A: %b, B: %b, Out: %b", reg_A, reg_B, reg_Out);
      
      Or : if ({reg_A | reg_B} != reg_Out)
              $error("Error, Or failed A: %b, B: %b, Out: %b", reg_A, reg_B, reg_Out);

      Carry : if (compt_carries() != reg_Out) begin
                $display("Computed carries: %b", compt_carries());
                $error("Error, Carry failed A: %b, B: %b, Out: %b", reg_A, reg_B, reg_Out);
              end

      Buffer : if ((n > p_width ? (reg_A >> n - p_width) : (reg_A << p_width - n)) != reg_Out) begin
                $display("A shifted %b", (n > p_width ? (reg_A >> n - p_width) : (reg_A << p_width - n)));
                $error("Error, Buffer failed A: %b, Out: %b, N shift: %d", reg_A, reg_Out, n);
              end
      
      default:
        $display("Undefined function: %b", func_sel);
    endcase

  endtask


  initial begin
    init();
    $display("====================\n");
    
    reset();
    xor_test();
    $display("Success: Xor test");
    
    reset();
    xnor_test();
    $display("Success: Xnor test");

    reset();
    sum_test();
    $display("Success: Sum test");

    reset();
    not_test();
    $display("Success: Not test");
    
    reset();
    and_test();
    $display("Success: And test");
    
    reset();
    or_test();
    $display("Success: Or test");
    
    reset();
    carry_test();
    $display("Success: Carry test");
    
    reset();
    buffer_test();
    $display("Success: Buffer test\n");

    $display("~~ SUCCESS ~~");
    $display("====================");
    $finish;
  end


  FBA_ALU ALU (
    .clk(clk),
    .rst(rst),
    .A(ser_A),
    .B(ser_B),
    .func(func_sel),
    .out(out),
    .c_out(carry_out)
  );

  Parallel_To_Serial #(.P_WIDTH(p_width)) A (
    .clk(clk),
    .rst(rst),
    .l_s(load_shift),
    .s_in(serial_in_A),
    .p_in(reg_A),
    .s_out(ser_A)
  );

  Parallel_To_Serial #(.P_WIDTH(p_width)) B (
    .clk(clk),
    .rst(rst),
    .l_s(load_shift),
    .s_in(serial_in_B),
    .p_in(reg_B),
    .s_out(ser_B)
  );

  Serial_To_Parallel #(.P_WIDTH(p_width)) ALU_output (
    .clk(clk),
    .rst(rst),
    .oe(output_enable),
    .s_in(out),
    .p_out(reg_Out),

    /* verilator lint_off PINCONNECTEMPTY */
    .s_out()
    /* verilator lint_on PINCONNECTEMPTY*/
  );


endmodule

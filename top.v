module top();
reg clk;
reg rst;
initial
	clk = 0;
always
	#(100) clk = ~ clk;

integer i;
cpu rv_cpu(
    .clk(clk),
    .rst(rst)
);
initial begin
  rst=1;
#600 rst=0;
end
initial begin
$fsdbDumpvars;
#100000;
for(i=0; i<32; i=i+1) begin
    $display("%d: %h", i, top.rv_cpu.rv64_regfile.regfile[i]);
end
$finish;
end
endmodule

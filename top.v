module top(
input clk,
input rst,
output ebreak,
output [63:0] pc
);

cpu rv_cpu(
    .clk(clk),
    .rst(rst),
    .cpuebreak(ebreak),
    .cpupc(pc)
);

endmodule

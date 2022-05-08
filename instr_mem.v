`define REG_WIDTH 32
`define INSTR_MEM_LENTH 2048

module instr_mem (
    input clk,
    input rst,
    input [63:0] rd_addr,
    input rd_en,
    output reg [31:0] rd_instr
);
    import "DPI-C" function void pmem_read(
      input longint raddr, output longint rdata);
    import "DPI-C" function void pmem_write(
      input longint waddr, input longint wdata, input byte wmask);

    wire [63:0] rdata;

    always @(*) begin
	pmem_read(rd_addr, rdata);
    end

    always @(posedge clk) begin
	if(rd_en & ~rst)
	    rd_instr <= rdata[31:0];
    end
    //integer i;
    //reg [31:0] mem[1023:0];
  
    //initial begin
    //    $readmemh("./dummy.txt",mem);
    //    for(i=0; i<100; i=i+1)
    //      $display("%d: %h", i, mem[i]);
    //end
    //always @(posedge clk) begin
    //    if(rd_en)begin
    //              rd_instr <= mem[rd_addr/4];
    //    end
    //end

	
endmodule

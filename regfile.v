`define REGFILE_NUM 32
`define REGFILE_WIDTH 64

module regfile (
    input clk,
    input rst,
    input rs1_en,
    input [4:0] rs1_addr,
    input rs2_en,
    input [4:0] rs2_addr,
    input wr_en,
    input [63:0] wr_data,
    input [4:0] wr_addr,
    output [63:0] rs1_data,
    output [63:0] rs2_data
);

    import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
    integer i;
    reg [`REGFILE_WIDTH-1:0] regfile[0:`REGFILE_NUM-1];

    initial begin
        $readmemh("./regfile.txt",regfile);
    end

    assign rs1_data = (rs1_addr == 0) ? 0 : regfile[rs1_addr];
    assign rs2_data = (rs2_addr == 0) ? 0 : regfile[rs2_addr];

    initial set_gpr_ptr(regfile);

    always @(posedge clk) begin
	    if (wr_en & wr_addr !=0) begin
	    	regfile[wr_addr] <= wr_data;
	    end
	    else
	    	regfile[wr_addr] <= 0;
    end

endmodule

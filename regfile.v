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
    output reg [63:0] rs1_data,
    output reg [63:0] rs2_data
);

    reg [`REGFILE_WIDTH-1:0] regfile[0:`REGFILE_NUM-1];

    always @(posedge clk or negedge clk) begin
    	if (rst) begin
	    rs1_data <= 0;
    	end
	else begin
	    if (rs1_en) begin
	    	rs1_data <= regfile[rs1_addr];
	    end 
	end
    end

    always @(posedge clk or negedge clk) begin
    	if (rst) begin
	    rs2_data <= 0;
    	end
	else begin
	    if (rs2_en) begin
	    	rs2_data <= regfile[rs2_addr];
	    end 
	end
    end

    always @(posedge clk or negedge rst) begin
	if (wr_en) begin
		regfile[wr_addr] <= wr_data;
	end
    end

    always @(*) begin
    	regfile[0] = 0;
    end

endmodule

module regfile (
    input clk;
    input rst;
    input rs1_en;
    input rs1_addr;
    input rs2_en;
    input rs2_addr;
    input wr_en;
    input wr_data;
    input wr_addr;
    output rs1_data;
    output rs2_data;
);

    reg [`REG_WIDTH:0] regfile[0:`REGFILE_NUM];

    always @(posedge clk or negedge clk) begin
    	if (rst) begin
    	    //TODO
    	end
	else begin
	    if (rd1_en) begin
	    	rd1_data <= regfile[rd1_addr];
		rd1_vld  <= 1;
	    end 
	    else begin
	    	rd1_data <= 0;
		rd1_vld <= 1;
	    end  
	end
    end

    always @(posedge clk or negedge clk) begin
    	if (rst) begin
    	    //TODO
    	end
	else begin
	    if (rd2_en) begin
	    	rd2_data <= regfile[rd2_addr];
		rd2_vld  <= 1;
	    end 
	    else begin
	    	rd2_data <= 0;
		rd2_vld <= 1;
	    end  
	end
    end

    always @(posedge clk or negedge rst) begin
        if(rst)begin
            regfile<=0;
        end
	else begin
	    if (wr_en) begin
	    	regfile[wr_addr] <= wr_data;
	    end
	    else begin
		regfile[wr_addr] <= regfile[wr_addr];
	    end
	    regfile[0] <= 0;
	end
    end

endmodule

module data_mem (
    input clk;
    input rst;
    input wr_en;
    input wr_addr;
    input wr_data;
    input rd_addr;
    input rd_en;
    output rd_data;
);
    reg [`REG_WIDTH] mem[`DATA_MEM_LENTH];
    always @(posedge clk or negedge rst) begin
    	if (rst) begin
    	    
    	end
	else begin
	    if (rd_en) begin
	    	rd_data <= mem[rd_addr]
	    end
	    else begin
	    	
	    end

	    if (wr_en) begin
	    	mem[wr_addr] <= wr_data;
	    end
	    else begin
	    	
	    end
	end
    end
	
endmodule

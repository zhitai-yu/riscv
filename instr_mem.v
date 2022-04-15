module instr_mem (
    input clk;
    input rst;
    input wr_en;
    input wr_addr;
    input wr_instr;
    input rd_addr;
    input rd_en;
    output rd_instr;
);
    reg [`REG_WIDTH] mem[`INSTR_MEM_LENTH];
    always @(posedge clk or negedge rst) begin
    	if (rst) begin
    	    
    	end
	else begin
	    if (rd_en) begin
	    	rd_instr <= mem[rd_addr]
	    end
	    else begin
	    	
	    end

	    if (wr_en) begin
	    	mem[wr_addr] <= wr_instr;
	    end
	    else begin
	    	
	    end
	end
    end
	
endmodule

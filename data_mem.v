`define DATA_MEM_LENTH 2048
module data_mem (
    input clk,
    input rst,
    input wr_en,
    input [63:0] wr_addr,
    input [63:0] wr_data,
    input [7:0] wr_len,
    input [63:0] rd_addr,
    input rd_en,
    output reg [63:0] rd_data
);
    import "DPI-C" function void pmem_read(
      input longint raddr, output longint rdata);
    import "DPI-C" function void pmem_write(
      input longint waddr, input longint wdata, input byte wmask);

    wire [63:0] rdata;
    reg  [63:0] rdata_t;
    reg [63:0] wdata;
    reg [63:0] waddr;
    reg [7:0] wlen;

    always @(*) begin
	pmem_read(rd_addr, rdata);
    end
    
    always @(negedge clk) begin
        if(rd_en & ~rst)
            rd_data <= rdata;
    end    
    
    always @(posedge clk) begin
        if(wr_en & ~rst) begin
	    //pmem_write(waddr, wdata, wlen);
	    pmem_write(wr_addr, wr_data, wr_len);
	end
    end
    //reg [7:0] mem[0:`DATA_MEM_LENTH-1];
    //always @(negedge clk) begin
    //          if (rd_en) begin
    //              rd_data <= {mem[rd_addr+7],mem[rd_addr+6],mem[rd_addr+5],mem[rd_addr+4],mem[rd_addr+3],mem[rd_addr+2],mem[rd_addr+1],mem[rd_addr]};
    //          end
    //end

    //always @(posedge clk) begin
    //          if (wr_en) begin
    //              case (wr_len)
    //                  1: begin
    //          	    mem[wr_addr] <= wr_data[7:0];
    //                  end
    //                  2: begin
    //          	    mem[wr_addr]   <= wr_data[7:0];
    //          	    mem[wr_addr+1] <= wr_data[15:8];
    //                  end
    //                  4: begin
    //          	    mem[wr_addr]   <= wr_data[7:0];
    //          	    mem[wr_addr+1] <= wr_data[15:8];
    //          	    mem[wr_addr+2] <= wr_data[23:16];
    //          	    mem[wr_addr+3] <= wr_data[31:24];
    //                  end
    //                  8: begin
    //          	    mem[wr_addr]   <= wr_data[7:0];
    //          	    mem[wr_addr+1] <= wr_data[15:8];
    //          	    mem[wr_addr+2] <= wr_data[23:16];
    //          	    mem[wr_addr+3] <= wr_data[31:24];
    //          	    mem[wr_addr+4] <= wr_data[39:32];
    //          	    mem[wr_addr+5] <= wr_data[47:40];
    //          	    mem[wr_addr+6] <= wr_data[55:48];
    //          	    mem[wr_addr+7] <= wr_data[63:56];
    //                  end
    //                  default: begin
    //          	    mem[wr_addr] <= mem[wr_addr];
    //                  end
    //              endcase
    //          end
    //end
	
endmodule

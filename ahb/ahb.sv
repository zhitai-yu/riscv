class ahb_master_transaction extends uvm_sequence_item;
	
	typedef enum burst {SINGLE,INCR,INCR4,INCR8,INCR16,WRAP4,WRAP8,WRAP16};
	typedef enum size  {Byte,Halfword,Word,Doubleword,Fourword,EightWord};
	typedef enum trans {NONESEQ, SEQ, BUSY, IDLE};
	rand [DATA_WIDTH-1:0] hdata[];
	rand hwrite;
    rand burst hburst;
	rand trans htrans;
	rand hbusy[];
	rand bit[ADDR_WIDTH-1:0] haddr[];
	rand hsize;
	rand int idle_nums;
	
	constraint busy_cons{
		hbusy.size() == pkt_len;
		data.size() == pkt_len
		foreach(hbusy[i])
			hbusy inside {[0:16]};
		if(hburst == SINGLE)
			hbusy[] = {0};
		if(hburst != INCR)
			hbusy[len] = 0;
	}	
	//complemented in driver
/* 	constraint htrans_cons{
		if(hburst == SIGNLE)
			htrans == NONESEQ
	} */
	
	constraint pkt_len_cons{
		//if(hburst == SINGLE)
		//	pkt_len == 1;
		if(hburst == INCR4 || WRAP4)
			pkt_len == 4;
		if(hburst == INCR8 || WRAP8)
			pkt_len == 8;
		if(hburst == INCR16 || WRAP16)
			pkt_len == 16;
	}
	
	constraint addr_cons{
		// addr aligned
/* 		if(size == Halfword)
			addr[0][0] == 0;
		if(size == Word)
			addr[0][1:0] == 0;
		if(size == Doubleword)
			addr[0][2:0] == 0;
		if(size == Fourword)
			addr[0][3:0] == 0;
		if(size == EightWord)
			addr[0][4:0] == 0;	 */	
		// addr no more cross than 1K
			//for SINGLE and INCR
		if(hburst != WRAP4 && hburst != WRAP8 && hburst != WRAP16)
			(addr[0] + pkt_len*size)[11:0] < 'h{addr[0][DATA_WIDTH-1:12],400}; //'h3FC
		
			//for wrap operation
		if(hburst == WRAP4 || hburst == WRAP8 || hburst == WRAP16)
			for(i=1;i<=pkt_len;i++)
				(addr[0] + pkt_len*size)[11:0] < 'h{addr[0][DATA_WIDTH-1:12],400};
				
	}
	
	task addr_cal(bit[ADDR_WIDTH-1:0] addr, burst hburst, size hsize);
		if(hburst != WRAP4 && hburst != WRAP8 && hburst != WRAP16) begin
			foreach(addr[i]) begin
				if(i != 0)
					addr[i] = addr[i-1]+ hsize;
			end
		end
		if(hburst == WRAP4 || hburst == WRAP8 || hburst == WRAP16) begin
			foreach(addr[i]) begin
				if(i != 0) begin
					addr[i] = addr[i-1]+ hsize;
					if(addr[i][hsize*k-1:0] == hsize)
						i++;
						addr[i] = addr[i-1] - pkt_len*hszie;
					end
				end
			end
		end
	endtask
	
endclass

class ahb_master_driver extends uvm_component;

	task run_phase(uvm_phase phase);
		while(1) begin
			seq_item_port.get_next_item(req);
			req.cal_addr();
			send_trans(req);
		end
	endtask
	task send_trans();
		while(1) begin
			//send data
			if(!busy)
				i++;
			if(hready == 1 && hresp ==0) begin
				@(posedge vif.clk)
				if(!busy) begin
					vif.haddr   = req.haddr[i];
					vif.hsize   = req.hsize;
					vif.hwrite  = req.hwrite;
					vif.hburst  = req.hburst;
				end
				if(i == 0) begin
					vif.htrans  = ahb_master_trans::NONESEQ;
				end
				else if(hbusy[i] ==0) begin
					vif.htrans  = ahb_master_trans::SEQ;
					if(req.hwrite = 1)
						vif.hdata = req.hdata[i];
					else 
						req.hdata[i-1] = vif.hdata;
				end
				else if(req.hbusy[i] !=0) begin
					if(busy_num <= req.hbusy[i]) begin
						busy = 1;
						vif.htrans  = ahb_master_trans::BUSY;
						busy_num++;
					end
				end
					
			end
			//wait
			else if(hready == 0 && hresp ==0) begin
				@(posedge vif.clk)
				if(burst_end) begin
					htrans = ahb_master_trans::IDLE;
				end
				else if(req.hbusy[i] !=0) begin
					if(busy_num <= req.hbusy[i]) begin
						busy = 1;
						vif.htrans  = ahb_master_trans::BUSY;
						busy_num++;
					end
				end
				
				
			end
			//error 1st cycle
			else if(hready == 1 && hresp ==0) begin
			
			end
			//error 2nd cycle
			else if(hready == 1 && hresp ==0) begin
			
			end			
		end
	end
endclass
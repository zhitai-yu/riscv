#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>
#include <dlfcn.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#define CONFIG_MSIZE 0x80000000
#define CONFIG_MLIMIT 0x90000000
#define CONFIG_MBASE 0x80000000
uint64_t *cpu_gpr = NULL;
static uint64_t *gpr = NULL;
uint8_t *pmem = NULL;
uint64_t cpu_pc;
long img_size;
//static char *img_file = "/home/ubuntu/ysyx-workbench/am-kernels/tests/cpu-tests/build/div-riscv64-nemu.bin";
static char *img_file = "/home/ubuntu/ysyx-workbench/am-kernels/tests/cpu-tests/build/unalign-riscv64-nemu.bin";
extern void init_difftest(char *ref_so_file, long img_size);
extern void difftest_step(uint64_t pc);
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern void (*ref_difftest_exec)(uint32_t n);
vluint64_t main_time = 0;
int s_time = 100;
double sc_time_stamp() {        // Called by $time in Verilog
    return main_time;           // converts to double, to match
                                // what SystemC does
}

void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

extern uint8_t* guest_to_host(uint64_t paddr);
//uint8_t* guest_to_host(uint64_t paddr) { return pmem + paddr - CONFIG_MBASE; }

static long load_img() {

  if (img_file == NULL) {
    assert(0);
  }

  FILE *fp = fopen(img_file, "rb");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

void mem_init() {
  pmem = (uint8_t *)malloc(CONFIG_MSIZE);
  gpr = (uint64_t *)malloc(32);
  img_size = load_img();
}

extern "C" void pmem_read(long long raddr, long long *rdata) {
  //printf("read memory addr : %x\n",raddr);
  if(raddr >= CONFIG_MSIZE & raddr <= CONFIG_MLIMIT)
    *rdata = *((uint64_t *)guest_to_host(raddr));
  else
    *rdata = 0;
}

extern "C" void pmem_write(long long waddr, long long wdata, long wmask) {
  switch (wmask) {
    case 1: *(uint8_t  *)guest_to_host(waddr) = wdata; return;
    case 2: *(uint16_t *)guest_to_host(waddr) = wdata; return;
    case 4: *(uint32_t *)guest_to_host(waddr) = wdata; return;
    case 8: *(uint64_t *)guest_to_host(waddr) = wdata; return;
  }
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
}
extern "C" void gpr_read(long long raddr, long long *rdata) {
  *rdata = *(gpr+raddr);
}

extern "C" void gpr_write(long long waddr, long long wdata) {
  *(gpr+waddr) = wdata;
}
int main(int argc, char** argv, char** env) {

  VerilatedContext* contextp = new VerilatedContext;
  Vtop* top = new Vtop{contextp};
  int cur_time;
  int a=0;
  Verilated::traceEverOn(true);
  contextp->commandArgs(argc, argv);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace(tfp, 10);
  tfp->open("simx.vcd");
  mem_init();
  init_difftest("/home/ubuntu/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so",img_size);
  while (!contextp->gotFinish()) {
      if (main_time = main_time+1000) {
	  if(main_time > 7000){
	    top->rst = 0;
	  }
	  else{
	    top->rst = 1;
	    cpu_pc = top->pc;
	  }

	  top->clk ^= 1;
          top->eval();
	  if((top->ebreak)){
	    if(a==0){
	      cur_time = main_time;
	    }
	    a++;
	    if(main_time == cur_time + 2000){
		tfp->dump(main_time);
		dump_gpr();
		break;
	    }
	  }
	  if(top->rst==0 && top->clk==1){
	    difftest_step(cpu_pc);
	    cpu_pc = top->pc;
	    ref_difftest_exec(1);
	  
	  }
	  tfp->dump(main_time);
      }
    
  }
  tfp->close();
  top->final();
  delete top;
  delete contextp;
  return 0;
}

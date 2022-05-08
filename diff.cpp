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
#define CONFIG_MBASE 0x80000000
extern uint8_t *pmem;
extern uint64_t *cpu_gpr;
extern uint64_t cpu_pc;
typedef struct {
  uint64_t gpr[32];
  uint64_t pc;
  uint64_t mtvec;
  uint64_t mepc;
  uint64_t mstatus;
  uint64_t mcause;
} CPU_state;
extern vluint64_t main_time;
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
CPU_state cpu = {};
void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction);
void (*ref_difftest_regcpy)(void *dut, bool direction);
void (*ref_difftest_exec)(uint32_t n);
//typedef void (*ref_difftest_raise_intr_t)(uint64_t NO) = NULL;
uint8_t* guest_to_host(uint64_t paddr) { return pmem + paddr - CONFIG_MBASE; }
void init_difftest(char *ref_so_file, long img_size) {

  printf("%s\r\n",ref_so_file);
  assert(ref_so_file != NULL);
  printf("%s\r\n",ref_so_file);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY | RTLD_DEEPBIND);
  assert(handle);

  ref_difftest_memcpy = ( void (*)(uint64_t addr, void *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint32_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  //ref_difftest_raise_intr = ()dlsym(handle, "difftest_raise_intr");
  //assert(ref_difftest_raise_intr);

  ref_difftest_memcpy(CONFIG_MBASE, guest_to_host(CONFIG_MBASE), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);

}

bool isa_difftest_checkregs(CPU_state *ref_r, uint64_t pc) {
  for(int i=0; i<32; i++){
    if(ref_r->gpr[i] != cpu_gpr[i]){
	printf("nemu reg[%0d]: %0lx not match with dut reg[%0d]: %0lx at pc:%0lx at dut time %d\n",i,ref_r->gpr[i],i,cpu_gpr[i],ref_r->pc,(int)main_time);
	return false;
    }

  }
  if(ref_r->pc != cpu_pc){
    printf("nemu pc: %0lx not match with dut pc : %0lx at dut time %d\n",ref_r->pc,cpu_pc,(int)main_time);
    return false;
  }
  return true;
}

static void checkregs(CPU_state *ref, uint64_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
     printf("fail\n");
  }
}

void difftest_step(uint64_t pc) {

  //ref_difftest_exec(1);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_DUT);

  checkregs(&cpu, pc);
}


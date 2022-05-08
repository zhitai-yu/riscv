#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>
#include <dlfcn.h>
#include <stdbool.h>

void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
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

  ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  //ref_difftest_raise_intr = ()dlsym(handle, "difftest_raise_intr");
  //assert(ref_difftest_raise_intr);


}

int main(int argc, char *argv[])
{
	init_difftest("/home/ubuntu/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so",57);
	return 0;
}

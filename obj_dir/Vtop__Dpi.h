// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at instr_mem.v:11:34
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at instr_mem.v:13:34
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at regfile.v:18:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

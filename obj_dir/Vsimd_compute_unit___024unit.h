// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimd_compute_unit.h for the primary calling header

#ifndef _VSIMD_COMPUTE_UNIT___024UNIT_H_
#define _VSIMD_COMPUTE_UNIT___024UNIT_H_  // guard

#include "verilated.h"

//==========

class Vsimd_compute_unit__Syms;
class Vsimd_compute_unit_VerilatedVcd;


//----------

VL_MODULE(Vsimd_compute_unit___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vsimd_compute_unit__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsimd_compute_unit___024unit);  ///< Copying not allowed
  public:
    Vsimd_compute_unit___024unit(const char* name = "TOP");
    ~Vsimd_compute_unit___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vsimd_compute_unit__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

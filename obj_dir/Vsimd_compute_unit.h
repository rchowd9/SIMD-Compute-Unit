// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSIMD_COMPUTE_UNIT_H_
#define _VSIMD_COMPUTE_UNIT_H_  // guard

#include "verilated.h"

//==========

class Vsimd_compute_unit__Syms;
class Vsimd_compute_unit_VerilatedVcd;


//----------

VL_MODULE(Vsimd_compute_unit) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(inst_valid,0,0);
    VL_OUT8(inst_ready,0,0);
    VL_IN8(active_mask,7,0);
    VL_IN(inst_in,19,0);
    VL_OUTW(vector_out,255,0,8);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ simd_compute_unit__DOT__alu_op;
    CData/*0:0*/ simd_compute_unit__DOT__rf_wen;
    CData/*7:0*/ simd_compute_unit__DOT__cmp_results;
    CData/*0:0*/ simd_compute_unit__DOT__unused_is_coalesced;
    CData/*7:0*/ simd_compute_unit__DOT__unused_burst_len;
    CData/*0:0*/ simd_compute_unit__DOT__coalescer_inst__DOT__contiguous;
    SData/*9:0*/ simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr;
    WData/*255:0*/ simd_compute_unit__DOT__alu_results[8];
    WData/*255:0*/ simd_compute_unit__DOT__writeback_data[8];
    IData/*31:0*/ simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk2__DOT__lane;
    IData/*31:0*/ simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__lane;
    WData/*255:0*/ simd_compute_unit__DOT__regfile_inst__DOT__registers[32][8];
    IData/*31:0*/ simd_compute_unit__DOT__mem_inst__DOT__ram[1024];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__cmp_result;
    CData/*0:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__cmp_result;
    CData/*0:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__cmp_result;
    CData/*0:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__cmp_result;
    CData/*0:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__cmp_result;
    CData/*0:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__cmp_result;
    CData/*0:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__cmp_result;
    CData/*0:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__cmp_result;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    WData/*255:0*/ simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[8];
    WData/*255:0*/ simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[8];
    WData/*255:0*/ simd_compute_unit__DOT____Vcellout__mem_inst__rdata[8];
    IData/*31:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__result;
    IData/*31:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__result;
    IData/*31:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__result;
    IData/*31:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__result;
    IData/*31:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__result;
    IData/*31:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__result;
    IData/*31:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__result;
    IData/*31:0*/ simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__result;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vsimd_compute_unit__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsimd_compute_unit);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vsimd_compute_unit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vsimd_compute_unit();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vsimd_compute_unit__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vsimd_compute_unit__Syms* symsp, bool first);
  private:
    static QData _change_request(Vsimd_compute_unit__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vsimd_compute_unit__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vsimd_compute_unit__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vsimd_compute_unit__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vsimd_compute_unit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vsimd_compute_unit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vsimd_compute_unit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vsimd_compute_unit__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vsimd_compute_unit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

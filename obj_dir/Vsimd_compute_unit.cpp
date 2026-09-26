// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimd_compute_unit.h for the primary calling header

#include "Vsimd_compute_unit.h"
#include "Vsimd_compute_unit__Syms.h"

//==========

void Vsimd_compute_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimd_compute_unit::eval\n"); );
    Vsimd_compute_unit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("simd_compute_unit.sv", 4, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsimd_compute_unit::_eval_initial_loop(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("simd_compute_unit.sv", 4, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vsimd_compute_unit::_sequent__TOP__2(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_sequent__TOP__2\n"); );
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0;
    CData/*7:0*/ __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0;
    CData/*4:0*/ __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1;
    CData/*7:0*/ __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1;
    CData/*4:0*/ __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2;
    CData/*7:0*/ __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2;
    CData/*4:0*/ __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3;
    CData/*7:0*/ __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3;
    CData/*4:0*/ __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4;
    CData/*7:0*/ __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4;
    CData/*4:0*/ __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5;
    CData/*7:0*/ __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5;
    CData/*4:0*/ __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6;
    CData/*7:0*/ __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6;
    CData/*4:0*/ __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7;
    CData/*7:0*/ __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v8;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v4;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v5;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v6;
    CData/*0:0*/ __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v7;
    SData/*9:0*/ __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v0;
    SData/*9:0*/ __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v1;
    SData/*9:0*/ __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v2;
    SData/*9:0*/ __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v3;
    SData/*9:0*/ __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v4;
    SData/*9:0*/ __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v5;
    SData/*9:0*/ __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v6;
    SData/*9:0*/ __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v7;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v1;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v2;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v3;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v4;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v5;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v6;
    IData/*31:0*/ __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v7;
    // Body
    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v0 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v1 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v2 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v3 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v4 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v5 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v6 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v7 = 0U;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlTOPp->rst_n) {
        if ((1U & vlTOPp->inst_in)) {
            vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__lane = 8U;
        }
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->simd_compute_unit__DOT__rf_wen) {
            vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk2__DOT__lane = 8U;
        }
    }
    __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7 = 0U;
    __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v8 = 0U;
    if (vlTOPp->rst_n) {
        if ((1U & vlTOPp->inst_in)) {
            if ((1U & (IData)(vlTOPp->active_mask))) {
                vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr 
                    = (0x3ffU & ((vlTOPp->simd_compute_unit__DOT__alu_results[1U] 
                                  << 0x1eU) | (vlTOPp->simd_compute_unit__DOT__alu_results[0U] 
                                               >> 2U)));
                if ((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v0 
                        = vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U];
                    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v0 = 1U;
                    __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v0 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr;
                } else {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[0U] 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram
                        [vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr];
                }
            }
            if ((2U & (IData)(vlTOPp->active_mask))) {
                vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr 
                    = (0x3ffU & (((IData)(4U) + vlTOPp->simd_compute_unit__DOT__alu_results[0U]) 
                                 >> 2U));
                if ((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v1 
                        = vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U];
                    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v1 = 1U;
                    __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v1 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr;
                } else {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[1U] 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram
                        [vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr];
                }
            }
            if ((4U & (IData)(vlTOPp->active_mask))) {
                vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr 
                    = (0x3ffU & (((IData)(8U) + vlTOPp->simd_compute_unit__DOT__alu_results[0U]) 
                                 >> 2U));
                if ((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v2 
                        = vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U];
                    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v2 = 1U;
                    __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v2 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr;
                } else {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[2U] 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram
                        [vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr];
                }
            }
            if ((8U & (IData)(vlTOPp->active_mask))) {
                vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr 
                    = (0x3ffU & (((IData)(0xcU) + vlTOPp->simd_compute_unit__DOT__alu_results[0U]) 
                                 >> 2U));
                if ((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v3 
                        = vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U];
                    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v3 = 1U;
                    __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v3 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr;
                } else {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[3U] 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram
                        [vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr];
                }
            }
            if ((0x10U & (IData)(vlTOPp->active_mask))) {
                vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr 
                    = (0x3ffU & (((IData)(0x10U) + 
                                  vlTOPp->simd_compute_unit__DOT__alu_results[0U]) 
                                 >> 2U));
                if ((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v4 
                        = vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U];
                    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v4 = 1U;
                    __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v4 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr;
                } else {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[4U] 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram
                        [vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr];
                }
            }
            if ((0x20U & (IData)(vlTOPp->active_mask))) {
                vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr 
                    = (0x3ffU & (((IData)(0x14U) + 
                                  vlTOPp->simd_compute_unit__DOT__alu_results[0U]) 
                                 >> 2U));
                if ((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v5 
                        = vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U];
                    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v5 = 1U;
                    __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v5 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr;
                } else {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[5U] 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram
                        [vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr];
                }
            }
            if ((0x40U & (IData)(vlTOPp->active_mask))) {
                vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr 
                    = (0x3ffU & (((IData)(0x18U) + 
                                  vlTOPp->simd_compute_unit__DOT__alu_results[0U]) 
                                 >> 2U));
                if ((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v6 
                        = vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U];
                    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v6 = 1U;
                    __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v6 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr;
                } else {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[6U] 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram
                        [vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr];
                }
            }
            if ((0x80U & (IData)(vlTOPp->active_mask))) {
                vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr 
                    = (0x3ffU & (((IData)(0x1cU) + 
                                  vlTOPp->simd_compute_unit__DOT__alu_results[0U]) 
                                 >> 2U));
                if ((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v7 
                        = vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U];
                    __Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v7 = 1U;
                    __Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v7 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr;
                } else {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[7U] 
                        = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram
                        [vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr];
                }
            }
        }
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->simd_compute_unit__DOT__rf_wen) {
            if ((1U & (IData)(vlTOPp->active_mask))) {
                __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0 
                    = vlTOPp->simd_compute_unit__DOT__writeback_data[0U];
                __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0 = 1U;
                __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0 = 0U;
                __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0 
                    = (0x1fU & (vlTOPp->inst_in >> 0xbU));
            }
            if ((2U & (IData)(vlTOPp->active_mask))) {
                __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1 
                    = vlTOPp->simd_compute_unit__DOT__writeback_data[1U];
                __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1 = 1U;
                __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1 = 0x20U;
                __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1 
                    = (0x1fU & (vlTOPp->inst_in >> 0xbU));
            }
            if ((4U & (IData)(vlTOPp->active_mask))) {
                __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2 
                    = vlTOPp->simd_compute_unit__DOT__writeback_data[2U];
                __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2 = 1U;
                __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2 = 0x40U;
                __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2 
                    = (0x1fU & (vlTOPp->inst_in >> 0xbU));
            }
            if ((8U & (IData)(vlTOPp->active_mask))) {
                __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3 
                    = vlTOPp->simd_compute_unit__DOT__writeback_data[3U];
                __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3 = 1U;
                __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3 = 0x60U;
                __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3 
                    = (0x1fU & (vlTOPp->inst_in >> 0xbU));
            }
            if ((0x10U & (IData)(vlTOPp->active_mask))) {
                __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4 
                    = vlTOPp->simd_compute_unit__DOT__writeback_data[4U];
                __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4 = 1U;
                __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4 = 0x80U;
                __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4 
                    = (0x1fU & (vlTOPp->inst_in >> 0xbU));
            }
            if ((0x20U & (IData)(vlTOPp->active_mask))) {
                __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5 
                    = vlTOPp->simd_compute_unit__DOT__writeback_data[5U];
                __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5 = 1U;
                __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5 = 0xa0U;
                __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5 
                    = (0x1fU & (vlTOPp->inst_in >> 0xbU));
            }
            if ((0x40U & (IData)(vlTOPp->active_mask))) {
                __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6 
                    = vlTOPp->simd_compute_unit__DOT__writeback_data[6U];
                __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6 = 1U;
                __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6 = 0xc0U;
                __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6 
                    = (0x1fU & (vlTOPp->inst_in >> 0xbU));
            }
            if ((0x80U & (IData)(vlTOPp->active_mask))) {
                __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7 
                    = vlTOPp->simd_compute_unit__DOT__writeback_data[7U];
                __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7 = 1U;
                __Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7 = 0xe0U;
                __Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7 
                    = (0x1fU & (vlTOPp->inst_in >> 0xbU));
            }
        }
    } else {
        __Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v8 = 1U;
    }
    if (__Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v0) {
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram[__Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v0] 
            = __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v0;
    }
    if (__Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v1) {
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram[__Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v1] 
            = __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v1;
    }
    if (__Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v2) {
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram[__Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v2] 
            = __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v2;
    }
    if (__Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v3) {
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram[__Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v3] 
            = __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v3;
    }
    if (__Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v4) {
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram[__Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v4] 
            = __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v4;
    }
    if (__Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v5) {
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram[__Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v5] 
            = __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v5;
    }
    if (__Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v6) {
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram[__Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v6] 
            = __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v6;
    }
    if (__Vdlyvset__simd_compute_unit__DOT__mem_inst__DOT__ram__v7) {
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram[__Vdlyvdim0__simd_compute_unit__DOT__mem_inst__DOT__ram__v7] 
            = __Vdlyvval__simd_compute_unit__DOT__mem_inst__DOT__ram__v7;
    }
    if (__Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0) {
        VL_ASSIGNSEL_WIII(32,(IData)(__Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0), 
                          vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                          [__Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0], __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v0);
    }
    if (__Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1) {
        VL_ASSIGNSEL_WIII(32,(IData)(__Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1), 
                          vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                          [__Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1], __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v1);
    }
    if (__Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2) {
        VL_ASSIGNSEL_WIII(32,(IData)(__Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2), 
                          vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                          [__Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2], __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v2);
    }
    if (__Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3) {
        VL_ASSIGNSEL_WIII(32,(IData)(__Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3), 
                          vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                          [__Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3], __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v3);
    }
    if (__Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4) {
        VL_ASSIGNSEL_WIII(32,(IData)(__Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4), 
                          vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                          [__Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4], __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v4);
    }
    if (__Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5) {
        VL_ASSIGNSEL_WIII(32,(IData)(__Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5), 
                          vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                          [__Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5], __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v5);
    }
    if (__Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6) {
        VL_ASSIGNSEL_WIII(32,(IData)(__Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6), 
                          vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                          [__Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6], __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v6);
    }
    if (__Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7) {
        VL_ASSIGNSEL_WIII(32,(IData)(__Vdlyvlsb__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7), 
                          vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                          [__Vdlyvdim0__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7], __Vdlyvval__simd_compute_unit__DOT__regfile_inst__DOT__registers__v7);
    }
    if (__Vdlyvset__simd_compute_unit__DOT__regfile_inst__DOT__registers__v8) {
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[1U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[1U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[1U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[1U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[1U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[1U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[1U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[1U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[2U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[2U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[2U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[2U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[2U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[2U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[2U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[2U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[3U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[3U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[3U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[3U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[3U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[3U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[3U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[3U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[4U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[4U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[4U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[4U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[4U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[4U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[4U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[4U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[5U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[5U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[5U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[5U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[5U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[5U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[5U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[5U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[6U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[6U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[6U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[6U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[6U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[6U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[6U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[6U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[7U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[7U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[7U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[7U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[7U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[7U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[7U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[7U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[8U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[8U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[8U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[8U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[8U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[8U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[8U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[8U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[9U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[9U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[9U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[9U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[9U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[9U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[9U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[9U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xaU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xaU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xaU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xaU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xaU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xaU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xaU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xaU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xbU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xbU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xbU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xbU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xbU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xbU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xbU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xbU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xcU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xcU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xcU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xcU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xcU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xcU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xcU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xcU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xdU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xdU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xdU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xdU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xdU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xdU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xdU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xdU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xeU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xeU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xeU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xeU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xeU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xeU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xeU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xeU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xfU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xfU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xfU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xfU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xfU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xfU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xfU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0xfU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x10U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x10U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x10U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x10U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x10U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x10U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x10U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x10U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x11U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x11U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x11U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x11U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x11U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x11U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x11U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x11U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x12U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x12U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x12U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x12U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x12U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x12U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x12U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x12U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x13U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x13U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x13U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x13U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x13U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x13U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x13U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x13U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x14U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x14U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x14U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x14U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x14U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x14U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x14U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x14U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x15U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x15U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x15U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x15U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x15U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x15U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x15U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x15U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x16U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x16U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x16U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x16U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x16U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x16U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x16U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x16U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x17U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x17U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x17U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x17U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x17U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x17U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x17U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x17U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x18U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x18U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x18U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x18U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x18U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x18U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x18U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x18U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x19U][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x19U][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x19U][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x19U][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x19U][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x19U][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x19U][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x19U][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1aU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1aU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1aU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1aU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1aU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1aU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1aU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1aU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1bU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1bU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1bU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1bU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1bU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1bU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1bU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1bU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1cU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1cU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1cU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1cU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1cU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1cU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1cU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1cU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1dU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1dU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1dU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1dU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1dU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1dU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1dU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1dU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1eU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1eU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1eU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1eU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1eU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1eU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1eU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1eU][7U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1fU][0U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1fU][1U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1fU][2U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1fU][3U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1fU][4U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1fU][5U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1fU][6U] = 0U;
        vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers[0x1fU][7U] = 0U;
    }
}

VL_INLINE_OPT void Vsimd_compute_unit::_combo__TOP__4(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_combo__TOP__4\n"); );
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simd_compute_unit__DOT__alu_op = ((IData)(vlTOPp->inst_valid)
                                               ? (0xfU 
                                                  & (vlTOPp->inst_in 
                                                     >> 0x10U))
                                               : 0U);
    vlTOPp->simd_compute_unit__DOT__rf_wen = (((IData)(vlTOPp->inst_valid) 
                                               & (0U 
                                                  != 
                                                  (0xfU 
                                                   & (vlTOPp->inst_in 
                                                      >> 0x10U)))) 
                                              & (0xaU 
                                                 != 
                                                 (0xfU 
                                                  & (vlTOPp->inst_in 
                                                     >> 0x10U))));
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 6U))][0U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 6U))][1U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 6U))][2U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 6U))][3U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 6U))][4U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 6U))][5U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 6U))][6U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 6U))][7U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 1U))][0U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 1U))][1U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 1U))][2U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 1U))][3U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 1U))][4U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 1U))][5U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 1U))][6U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U] 
        = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
        [(0x1fU & (vlTOPp->inst_in >> 1U))][7U];
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__cmp_result = 0U;
    if ((1U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__cmp_result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__cmp_result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U] 
                               == vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U])
                            : VL_LTS_III(1,32,32, vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U], 
                                         vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U]));
                }
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__cmp_result = 0U;
    if ((2U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__cmp_result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__cmp_result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U] 
                               == vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U])
                            : VL_LTS_III(1,32,32, vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U], 
                                         vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U]));
                }
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__cmp_result = 0U;
    if ((4U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__cmp_result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__cmp_result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U] 
                               == vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U])
                            : VL_LTS_III(1,32,32, vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U], 
                                         vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U]));
                }
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__cmp_result = 0U;
    if ((8U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__cmp_result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__cmp_result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U] 
                               == vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U])
                            : VL_LTS_III(1,32,32, vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U], 
                                         vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U]));
                }
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__cmp_result = 0U;
    if ((0x10U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__cmp_result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__cmp_result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U] 
                               == vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U])
                            : VL_LTS_III(1,32,32, vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U], 
                                         vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U]));
                }
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__cmp_result = 0U;
    if ((0x20U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__cmp_result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__cmp_result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U] 
                               == vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U])
                            : VL_LTS_III(1,32,32, vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U], 
                                         vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U]));
                }
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__cmp_result = 0U;
    if ((0x40U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__cmp_result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__cmp_result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U] 
                               == vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U])
                            : VL_LTS_III(1,32,32, vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U], 
                                         vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U]));
                }
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__cmp_result = 0U;
    if ((0x80U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__cmp_result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__cmp_result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U] 
                               == vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U])
                            : VL_LTS_III(1,32,32, vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U], 
                                         vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U]));
                }
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__result = 0U;
    if ((1U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->simd_compute_unit__DOT__alu_op) 
                              >> 1U)))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U] 
                               ^ vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U] 
                               | vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U]));
                }
            } else {
                vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__result 
                    = ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U] 
                               & vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U] 
                               * vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U]))
                        : ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U] 
                               - vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U] 
                               + vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U])));
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__result = 0U;
    if ((2U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->simd_compute_unit__DOT__alu_op) 
                              >> 1U)))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U] 
                               ^ vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U] 
                               | vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U]));
                }
            } else {
                vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__result 
                    = ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U] 
                               & vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U] 
                               * vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U]))
                        : ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U] 
                               - vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U] 
                               + vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U])));
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__result = 0U;
    if ((4U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->simd_compute_unit__DOT__alu_op) 
                              >> 1U)))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U] 
                               ^ vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U] 
                               | vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U]));
                }
            } else {
                vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__result 
                    = ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U] 
                               & vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U] 
                               * vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U]))
                        : ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U] 
                               - vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U] 
                               + vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U])));
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__result = 0U;
    if ((8U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->simd_compute_unit__DOT__alu_op) 
                              >> 1U)))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U] 
                               ^ vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U] 
                               | vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U]));
                }
            } else {
                vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__result 
                    = ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U] 
                               & vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U] 
                               * vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U]))
                        : ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U] 
                               - vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U] 
                               + vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U])));
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__result = 0U;
    if ((0x10U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->simd_compute_unit__DOT__alu_op) 
                              >> 1U)))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U] 
                               ^ vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U] 
                               | vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U]));
                }
            } else {
                vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__result 
                    = ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U] 
                               & vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U] 
                               * vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U]))
                        : ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U] 
                               - vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U] 
                               + vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U])));
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__result = 0U;
    if ((0x20U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->simd_compute_unit__DOT__alu_op) 
                              >> 1U)))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U] 
                               ^ vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U] 
                               | vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U]));
                }
            } else {
                vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__result 
                    = ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U] 
                               & vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U] 
                               * vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U]))
                        : ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U] 
                               - vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U] 
                               + vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U])));
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__result = 0U;
    if ((0x40U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->simd_compute_unit__DOT__alu_op) 
                              >> 1U)))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U] 
                               ^ vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U] 
                               | vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U]));
                }
            } else {
                vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__result 
                    = ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U] 
                               & vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U] 
                               * vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U]))
                        : ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U] 
                               - vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U] 
                               + vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U])));
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__result = 0U;
    if ((0x80U & (IData)(vlTOPp->active_mask))) {
        if ((8U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
            vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__result = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->simd_compute_unit__DOT__alu_op) 
                              >> 1U)))) {
                    vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__result 
                        = ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U] 
                               ^ vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U] 
                               | vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U]));
                }
            } else {
                vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__result 
                    = ((2U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U] 
                               & vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U] 
                               * vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U]))
                        : ((1U & (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))
                            ? (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U] 
                               - vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U])
                            : (vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U] 
                               + vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U])));
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT__cmp_results = (
                                                   (0xfeU 
                                                    & (IData)(vlTOPp->simd_compute_unit__DOT__cmp_results)) 
                                                   | (IData)(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__cmp_result));
    vlTOPp->simd_compute_unit__DOT__cmp_results = (
                                                   (0xfdU 
                                                    & (IData)(vlTOPp->simd_compute_unit__DOT__cmp_results)) 
                                                   | ((IData)(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__cmp_result) 
                                                      << 1U));
    vlTOPp->simd_compute_unit__DOT__cmp_results = (
                                                   (0xfbU 
                                                    & (IData)(vlTOPp->simd_compute_unit__DOT__cmp_results)) 
                                                   | ((IData)(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__cmp_result) 
                                                      << 2U));
    vlTOPp->simd_compute_unit__DOT__cmp_results = (
                                                   (0xf7U 
                                                    & (IData)(vlTOPp->simd_compute_unit__DOT__cmp_results)) 
                                                   | ((IData)(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__cmp_result) 
                                                      << 3U));
    vlTOPp->simd_compute_unit__DOT__cmp_results = (
                                                   (0xefU 
                                                    & (IData)(vlTOPp->simd_compute_unit__DOT__cmp_results)) 
                                                   | ((IData)(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__cmp_result) 
                                                      << 4U));
    vlTOPp->simd_compute_unit__DOT__cmp_results = (
                                                   (0xdfU 
                                                    & (IData)(vlTOPp->simd_compute_unit__DOT__cmp_results)) 
                                                   | ((IData)(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__cmp_result) 
                                                      << 5U));
    vlTOPp->simd_compute_unit__DOT__cmp_results = (
                                                   (0xbfU 
                                                    & (IData)(vlTOPp->simd_compute_unit__DOT__cmp_results)) 
                                                   | ((IData)(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__cmp_result) 
                                                      << 6U));
    vlTOPp->simd_compute_unit__DOT__cmp_results = (
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->simd_compute_unit__DOT__cmp_results)) 
                                                   | ((IData)(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__cmp_result) 
                                                      << 7U));
    vlTOPp->simd_compute_unit__DOT__alu_results[0U] 
        = vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__result;
    vlTOPp->simd_compute_unit__DOT__alu_results[1U] 
        = vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__result;
    vlTOPp->simd_compute_unit__DOT__alu_results[2U] 
        = vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__result;
    vlTOPp->simd_compute_unit__DOT__alu_results[3U] 
        = vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__result;
    vlTOPp->simd_compute_unit__DOT__alu_results[4U] 
        = vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__result;
    vlTOPp->simd_compute_unit__DOT__alu_results[5U] 
        = vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__result;
    vlTOPp->simd_compute_unit__DOT__alu_results[6U] 
        = vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__result;
    vlTOPp->simd_compute_unit__DOT__alu_results[7U] 
        = vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__result;
    vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous = 1U;
    vlTOPp->simd_compute_unit__DOT__unused_burst_len = 0U;
    if ((1U & (IData)(vlTOPp->active_mask))) {
        vlTOPp->simd_compute_unit__DOT__unused_burst_len 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simd_compute_unit__DOT__unused_burst_len)));
    }
    if ((2U & (IData)(vlTOPp->active_mask))) {
        vlTOPp->simd_compute_unit__DOT__unused_burst_len 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simd_compute_unit__DOT__unused_burst_len)));
        if ((1U & (IData)(vlTOPp->active_mask))) {
            if ((vlTOPp->simd_compute_unit__DOT__alu_results[1U] 
                 != ((IData)(4U) + vlTOPp->simd_compute_unit__DOT__alu_results[0U]))) {
                vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous = 0U;
            }
        }
    }
    if ((4U & (IData)(vlTOPp->active_mask))) {
        vlTOPp->simd_compute_unit__DOT__unused_burst_len 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simd_compute_unit__DOT__unused_burst_len)));
        if ((2U & (IData)(vlTOPp->active_mask))) {
            if ((vlTOPp->simd_compute_unit__DOT__alu_results[2U] 
                 != ((IData)(4U) + vlTOPp->simd_compute_unit__DOT__alu_results[1U]))) {
                vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous = 0U;
            }
        }
    }
    if ((8U & (IData)(vlTOPp->active_mask))) {
        vlTOPp->simd_compute_unit__DOT__unused_burst_len 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simd_compute_unit__DOT__unused_burst_len)));
        if ((4U & (IData)(vlTOPp->active_mask))) {
            if ((vlTOPp->simd_compute_unit__DOT__alu_results[3U] 
                 != ((IData)(4U) + vlTOPp->simd_compute_unit__DOT__alu_results[2U]))) {
                vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous = 0U;
            }
        }
    }
    if ((0x10U & (IData)(vlTOPp->active_mask))) {
        vlTOPp->simd_compute_unit__DOT__unused_burst_len 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simd_compute_unit__DOT__unused_burst_len)));
        if ((8U & (IData)(vlTOPp->active_mask))) {
            if ((vlTOPp->simd_compute_unit__DOT__alu_results[4U] 
                 != ((IData)(4U) + vlTOPp->simd_compute_unit__DOT__alu_results[3U]))) {
                vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous = 0U;
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->active_mask))) {
        vlTOPp->simd_compute_unit__DOT__unused_burst_len 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simd_compute_unit__DOT__unused_burst_len)));
        if ((0x10U & (IData)(vlTOPp->active_mask))) {
            if ((vlTOPp->simd_compute_unit__DOT__alu_results[5U] 
                 != ((IData)(4U) + vlTOPp->simd_compute_unit__DOT__alu_results[4U]))) {
                vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous = 0U;
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->active_mask))) {
        vlTOPp->simd_compute_unit__DOT__unused_burst_len 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simd_compute_unit__DOT__unused_burst_len)));
        if ((0x20U & (IData)(vlTOPp->active_mask))) {
            if ((vlTOPp->simd_compute_unit__DOT__alu_results[6U] 
                 != ((IData)(4U) + vlTOPp->simd_compute_unit__DOT__alu_results[5U]))) {
                vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous = 0U;
            }
        }
    }
    if ((0x80U & (IData)(vlTOPp->active_mask))) {
        vlTOPp->simd_compute_unit__DOT__unused_burst_len 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simd_compute_unit__DOT__unused_burst_len)));
        if ((0x40U & (IData)(vlTOPp->active_mask))) {
            if ((vlTOPp->simd_compute_unit__DOT__alu_results[7U] 
                 != ((IData)(4U) + vlTOPp->simd_compute_unit__DOT__alu_results[6U]))) {
                vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous = 0U;
            }
        }
    }
    vlTOPp->simd_compute_unit__DOT__unused_is_coalesced 
        = ((IData)(vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous) 
           & (0U < (IData)(vlTOPp->simd_compute_unit__DOT__unused_burst_len)));
    if ((1U & vlTOPp->inst_in)) {
        vlTOPp->simd_compute_unit__DOT__writeback_data[0U] 
            = vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[0U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[1U] 
            = vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[1U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[2U] 
            = vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[2U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[3U] 
            = vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[3U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[4U] 
            = vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[4U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[5U] 
            = vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[5U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[6U] 
            = vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[6U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[7U] 
            = vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata[7U];
    } else {
        vlTOPp->simd_compute_unit__DOT__writeback_data[0U] 
            = vlTOPp->simd_compute_unit__DOT__alu_results[0U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[1U] 
            = vlTOPp->simd_compute_unit__DOT__alu_results[1U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[2U] 
            = vlTOPp->simd_compute_unit__DOT__alu_results[2U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[3U] 
            = vlTOPp->simd_compute_unit__DOT__alu_results[3U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[4U] 
            = vlTOPp->simd_compute_unit__DOT__alu_results[4U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[5U] 
            = vlTOPp->simd_compute_unit__DOT__alu_results[5U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[6U] 
            = vlTOPp->simd_compute_unit__DOT__alu_results[6U];
        vlTOPp->simd_compute_unit__DOT__writeback_data[7U] 
            = vlTOPp->simd_compute_unit__DOT__alu_results[7U];
    }
    vlTOPp->vector_out[0U] = vlTOPp->simd_compute_unit__DOT__writeback_data[0U];
    vlTOPp->vector_out[1U] = vlTOPp->simd_compute_unit__DOT__writeback_data[1U];
    vlTOPp->vector_out[2U] = vlTOPp->simd_compute_unit__DOT__writeback_data[2U];
    vlTOPp->vector_out[3U] = vlTOPp->simd_compute_unit__DOT__writeback_data[3U];
    vlTOPp->vector_out[4U] = vlTOPp->simd_compute_unit__DOT__writeback_data[4U];
    vlTOPp->vector_out[5U] = vlTOPp->simd_compute_unit__DOT__writeback_data[5U];
    vlTOPp->vector_out[6U] = vlTOPp->simd_compute_unit__DOT__writeback_data[6U];
    vlTOPp->vector_out[7U] = vlTOPp->simd_compute_unit__DOT__writeback_data[7U];
}

void Vsimd_compute_unit::_eval(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_eval\n"); );
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->rst_n)) & (IData)(vlTOPp->__Vclklast__TOP__rst_n)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_n = vlTOPp->rst_n;
}

VL_INLINE_OPT QData Vsimd_compute_unit::_change_request(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_change_request\n"); );
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vsimd_compute_unit::_change_request_1(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_change_request_1\n"); );
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsimd_compute_unit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((inst_valid & 0xfeU))) {
        Verilated::overWidthError("inst_valid");}
}
#endif  // VL_DEBUG

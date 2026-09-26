// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimd_compute_unit__Syms.h"


void Vsimd_compute_unit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vsimd_compute_unit__Syms* __restrict vlSymsp = static_cast<Vsimd_compute_unit__Syms*>(userp);
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vsimd_compute_unit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vsimd_compute_unit__Syms* __restrict vlSymsp = static_cast<Vsimd_compute_unit__Syms*>(userp);
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*255:0*/ __Vtemp90[8];
    WData/*255:0*/ __Vtemp91[8];
    WData/*255:0*/ __Vtemp92[8];
    WData/*255:0*/ __Vtemp93[8];
    WData/*255:0*/ __Vtemp94[8];
    WData/*255:0*/ __Vtemp95[8];
    WData/*255:0*/ __Vtemp96[8];
    WData/*255:0*/ __Vtemp97[8];
    WData/*255:0*/ __Vtemp98[8];
    WData/*255:0*/ __Vtemp99[8];
    WData/*255:0*/ __Vtemp100[8];
    WData/*255:0*/ __Vtemp101[8];
    WData/*255:0*/ __Vtemp102[8];
    WData/*255:0*/ __Vtemp103[8];
    WData/*255:0*/ __Vtemp104[8];
    WData/*255:0*/ __Vtemp105[8];
    WData/*255:0*/ __Vtemp106[8];
    WData/*255:0*/ __Vtemp107[8];
    WData/*255:0*/ __Vtemp108[8];
    WData/*255:0*/ __Vtemp109[8];
    WData/*255:0*/ __Vtemp110[8];
    WData/*255:0*/ __Vtemp111[8];
    WData/*255:0*/ __Vtemp112[8];
    WData/*255:0*/ __Vtemp113[8];
    WData/*255:0*/ __Vtemp114[8];
    WData/*255:0*/ __Vtemp115[8];
    WData/*255:0*/ __Vtemp116[8];
    WData/*255:0*/ __Vtemp117[8];
    WData/*255:0*/ __Vtemp118[8];
    WData/*255:0*/ __Vtemp119[8];
    WData/*255:0*/ __Vtemp120[8];
    WData/*255:0*/ __Vtemp121[8];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+1,(vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata),256);
            __Vtemp90[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0U][0U];
            __Vtemp90[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0U][1U];
            __Vtemp90[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0U][2U];
            __Vtemp90[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0U][3U];
            __Vtemp90[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0U][4U];
            __Vtemp90[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0U][5U];
            __Vtemp90[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0U][6U];
            __Vtemp90[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0U][7U];
            tracep->chgWData(oldp+9,(__Vtemp90),256);
            __Vtemp91[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [1U][0U];
            __Vtemp91[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [1U][1U];
            __Vtemp91[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [1U][2U];
            __Vtemp91[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [1U][3U];
            __Vtemp91[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [1U][4U];
            __Vtemp91[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [1U][5U];
            __Vtemp91[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [1U][6U];
            __Vtemp91[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [1U][7U];
            tracep->chgWData(oldp+17,(__Vtemp91),256);
            __Vtemp92[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [2U][0U];
            __Vtemp92[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [2U][1U];
            __Vtemp92[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [2U][2U];
            __Vtemp92[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [2U][3U];
            __Vtemp92[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [2U][4U];
            __Vtemp92[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [2U][5U];
            __Vtemp92[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [2U][6U];
            __Vtemp92[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [2U][7U];
            tracep->chgWData(oldp+25,(__Vtemp92),256);
            __Vtemp93[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [3U][0U];
            __Vtemp93[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [3U][1U];
            __Vtemp93[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [3U][2U];
            __Vtemp93[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [3U][3U];
            __Vtemp93[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [3U][4U];
            __Vtemp93[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [3U][5U];
            __Vtemp93[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [3U][6U];
            __Vtemp93[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [3U][7U];
            tracep->chgWData(oldp+33,(__Vtemp93),256);
            __Vtemp94[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [4U][0U];
            __Vtemp94[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [4U][1U];
            __Vtemp94[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [4U][2U];
            __Vtemp94[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [4U][3U];
            __Vtemp94[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [4U][4U];
            __Vtemp94[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [4U][5U];
            __Vtemp94[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [4U][6U];
            __Vtemp94[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [4U][7U];
            tracep->chgWData(oldp+41,(__Vtemp94),256);
            __Vtemp95[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [5U][0U];
            __Vtemp95[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [5U][1U];
            __Vtemp95[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [5U][2U];
            __Vtemp95[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [5U][3U];
            __Vtemp95[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [5U][4U];
            __Vtemp95[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [5U][5U];
            __Vtemp95[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [5U][6U];
            __Vtemp95[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [5U][7U];
            tracep->chgWData(oldp+49,(__Vtemp95),256);
            __Vtemp96[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [6U][0U];
            __Vtemp96[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [6U][1U];
            __Vtemp96[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [6U][2U];
            __Vtemp96[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [6U][3U];
            __Vtemp96[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [6U][4U];
            __Vtemp96[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [6U][5U];
            __Vtemp96[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [6U][6U];
            __Vtemp96[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [6U][7U];
            tracep->chgWData(oldp+57,(__Vtemp96),256);
            __Vtemp97[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [7U][0U];
            __Vtemp97[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [7U][1U];
            __Vtemp97[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [7U][2U];
            __Vtemp97[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [7U][3U];
            __Vtemp97[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [7U][4U];
            __Vtemp97[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [7U][5U];
            __Vtemp97[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [7U][6U];
            __Vtemp97[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [7U][7U];
            tracep->chgWData(oldp+65,(__Vtemp97),256);
            __Vtemp98[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [8U][0U];
            __Vtemp98[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [8U][1U];
            __Vtemp98[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [8U][2U];
            __Vtemp98[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [8U][3U];
            __Vtemp98[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [8U][4U];
            __Vtemp98[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [8U][5U];
            __Vtemp98[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [8U][6U];
            __Vtemp98[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [8U][7U];
            tracep->chgWData(oldp+73,(__Vtemp98),256);
            __Vtemp99[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [9U][0U];
            __Vtemp99[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [9U][1U];
            __Vtemp99[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [9U][2U];
            __Vtemp99[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [9U][3U];
            __Vtemp99[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [9U][4U];
            __Vtemp99[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [9U][5U];
            __Vtemp99[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [9U][6U];
            __Vtemp99[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [9U][7U];
            tracep->chgWData(oldp+81,(__Vtemp99),256);
            __Vtemp100[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xaU][0U];
            __Vtemp100[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xaU][1U];
            __Vtemp100[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xaU][2U];
            __Vtemp100[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xaU][3U];
            __Vtemp100[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xaU][4U];
            __Vtemp100[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xaU][5U];
            __Vtemp100[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xaU][6U];
            __Vtemp100[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xaU][7U];
            tracep->chgWData(oldp+89,(__Vtemp100),256);
            __Vtemp101[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xbU][0U];
            __Vtemp101[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xbU][1U];
            __Vtemp101[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xbU][2U];
            __Vtemp101[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xbU][3U];
            __Vtemp101[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xbU][4U];
            __Vtemp101[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xbU][5U];
            __Vtemp101[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xbU][6U];
            __Vtemp101[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xbU][7U];
            tracep->chgWData(oldp+97,(__Vtemp101),256);
            __Vtemp102[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xcU][0U];
            __Vtemp102[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xcU][1U];
            __Vtemp102[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xcU][2U];
            __Vtemp102[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xcU][3U];
            __Vtemp102[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xcU][4U];
            __Vtemp102[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xcU][5U];
            __Vtemp102[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xcU][6U];
            __Vtemp102[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xcU][7U];
            tracep->chgWData(oldp+105,(__Vtemp102),256);
            __Vtemp103[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xdU][0U];
            __Vtemp103[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xdU][1U];
            __Vtemp103[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xdU][2U];
            __Vtemp103[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xdU][3U];
            __Vtemp103[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xdU][4U];
            __Vtemp103[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xdU][5U];
            __Vtemp103[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xdU][6U];
            __Vtemp103[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xdU][7U];
            tracep->chgWData(oldp+113,(__Vtemp103),256);
            __Vtemp104[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xeU][0U];
            __Vtemp104[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xeU][1U];
            __Vtemp104[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xeU][2U];
            __Vtemp104[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xeU][3U];
            __Vtemp104[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xeU][4U];
            __Vtemp104[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xeU][5U];
            __Vtemp104[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xeU][6U];
            __Vtemp104[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xeU][7U];
            tracep->chgWData(oldp+121,(__Vtemp104),256);
            __Vtemp105[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xfU][0U];
            __Vtemp105[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xfU][1U];
            __Vtemp105[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xfU][2U];
            __Vtemp105[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xfU][3U];
            __Vtemp105[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xfU][4U];
            __Vtemp105[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xfU][5U];
            __Vtemp105[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xfU][6U];
            __Vtemp105[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0xfU][7U];
            tracep->chgWData(oldp+129,(__Vtemp105),256);
            __Vtemp106[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x10U][0U];
            __Vtemp106[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x10U][1U];
            __Vtemp106[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x10U][2U];
            __Vtemp106[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x10U][3U];
            __Vtemp106[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x10U][4U];
            __Vtemp106[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x10U][5U];
            __Vtemp106[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x10U][6U];
            __Vtemp106[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x10U][7U];
            tracep->chgWData(oldp+137,(__Vtemp106),256);
            __Vtemp107[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x11U][0U];
            __Vtemp107[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x11U][1U];
            __Vtemp107[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x11U][2U];
            __Vtemp107[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x11U][3U];
            __Vtemp107[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x11U][4U];
            __Vtemp107[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x11U][5U];
            __Vtemp107[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x11U][6U];
            __Vtemp107[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x11U][7U];
            tracep->chgWData(oldp+145,(__Vtemp107),256);
            __Vtemp108[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x12U][0U];
            __Vtemp108[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x12U][1U];
            __Vtemp108[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x12U][2U];
            __Vtemp108[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x12U][3U];
            __Vtemp108[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x12U][4U];
            __Vtemp108[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x12U][5U];
            __Vtemp108[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x12U][6U];
            __Vtemp108[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x12U][7U];
            tracep->chgWData(oldp+153,(__Vtemp108),256);
            __Vtemp109[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x13U][0U];
            __Vtemp109[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x13U][1U];
            __Vtemp109[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x13U][2U];
            __Vtemp109[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x13U][3U];
            __Vtemp109[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x13U][4U];
            __Vtemp109[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x13U][5U];
            __Vtemp109[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x13U][6U];
            __Vtemp109[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x13U][7U];
            tracep->chgWData(oldp+161,(__Vtemp109),256);
            __Vtemp110[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x14U][0U];
            __Vtemp110[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x14U][1U];
            __Vtemp110[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x14U][2U];
            __Vtemp110[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x14U][3U];
            __Vtemp110[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x14U][4U];
            __Vtemp110[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x14U][5U];
            __Vtemp110[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x14U][6U];
            __Vtemp110[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x14U][7U];
            tracep->chgWData(oldp+169,(__Vtemp110),256);
            __Vtemp111[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x15U][0U];
            __Vtemp111[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x15U][1U];
            __Vtemp111[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x15U][2U];
            __Vtemp111[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x15U][3U];
            __Vtemp111[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x15U][4U];
            __Vtemp111[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x15U][5U];
            __Vtemp111[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x15U][6U];
            __Vtemp111[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x15U][7U];
            tracep->chgWData(oldp+177,(__Vtemp111),256);
            __Vtemp112[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x16U][0U];
            __Vtemp112[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x16U][1U];
            __Vtemp112[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x16U][2U];
            __Vtemp112[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x16U][3U];
            __Vtemp112[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x16U][4U];
            __Vtemp112[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x16U][5U];
            __Vtemp112[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x16U][6U];
            __Vtemp112[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x16U][7U];
            tracep->chgWData(oldp+185,(__Vtemp112),256);
            __Vtemp113[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x17U][0U];
            __Vtemp113[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x17U][1U];
            __Vtemp113[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x17U][2U];
            __Vtemp113[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x17U][3U];
            __Vtemp113[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x17U][4U];
            __Vtemp113[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x17U][5U];
            __Vtemp113[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x17U][6U];
            __Vtemp113[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x17U][7U];
            tracep->chgWData(oldp+193,(__Vtemp113),256);
            __Vtemp114[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x18U][0U];
            __Vtemp114[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x18U][1U];
            __Vtemp114[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x18U][2U];
            __Vtemp114[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x18U][3U];
            __Vtemp114[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x18U][4U];
            __Vtemp114[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x18U][5U];
            __Vtemp114[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x18U][6U];
            __Vtemp114[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x18U][7U];
            tracep->chgWData(oldp+201,(__Vtemp114),256);
            __Vtemp115[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x19U][0U];
            __Vtemp115[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x19U][1U];
            __Vtemp115[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x19U][2U];
            __Vtemp115[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x19U][3U];
            __Vtemp115[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x19U][4U];
            __Vtemp115[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x19U][5U];
            __Vtemp115[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x19U][6U];
            __Vtemp115[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x19U][7U];
            tracep->chgWData(oldp+209,(__Vtemp115),256);
            __Vtemp116[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1aU][0U];
            __Vtemp116[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1aU][1U];
            __Vtemp116[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1aU][2U];
            __Vtemp116[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1aU][3U];
            __Vtemp116[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1aU][4U];
            __Vtemp116[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1aU][5U];
            __Vtemp116[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1aU][6U];
            __Vtemp116[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1aU][7U];
            tracep->chgWData(oldp+217,(__Vtemp116),256);
            __Vtemp117[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1bU][0U];
            __Vtemp117[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1bU][1U];
            __Vtemp117[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1bU][2U];
            __Vtemp117[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1bU][3U];
            __Vtemp117[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1bU][4U];
            __Vtemp117[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1bU][5U];
            __Vtemp117[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1bU][6U];
            __Vtemp117[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1bU][7U];
            tracep->chgWData(oldp+225,(__Vtemp117),256);
            __Vtemp118[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1cU][0U];
            __Vtemp118[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1cU][1U];
            __Vtemp118[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1cU][2U];
            __Vtemp118[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1cU][3U];
            __Vtemp118[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1cU][4U];
            __Vtemp118[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1cU][5U];
            __Vtemp118[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1cU][6U];
            __Vtemp118[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1cU][7U];
            tracep->chgWData(oldp+233,(__Vtemp118),256);
            __Vtemp119[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1dU][0U];
            __Vtemp119[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1dU][1U];
            __Vtemp119[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1dU][2U];
            __Vtemp119[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1dU][3U];
            __Vtemp119[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1dU][4U];
            __Vtemp119[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1dU][5U];
            __Vtemp119[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1dU][6U];
            __Vtemp119[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1dU][7U];
            tracep->chgWData(oldp+241,(__Vtemp119),256);
            __Vtemp120[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1eU][0U];
            __Vtemp120[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1eU][1U];
            __Vtemp120[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1eU][2U];
            __Vtemp120[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1eU][3U];
            __Vtemp120[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1eU][4U];
            __Vtemp120[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1eU][5U];
            __Vtemp120[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1eU][6U];
            __Vtemp120[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1eU][7U];
            tracep->chgWData(oldp+249,(__Vtemp120),256);
            __Vtemp121[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1fU][0U];
            __Vtemp121[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1fU][1U];
            __Vtemp121[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1fU][2U];
            __Vtemp121[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1fU][3U];
            __Vtemp121[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1fU][4U];
            __Vtemp121[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1fU][5U];
            __Vtemp121[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1fU][6U];
            __Vtemp121[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
                [0x1fU][7U];
            tracep->chgWData(oldp+257,(__Vtemp121),256);
            tracep->chgIData(oldp+265,(vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk2__DOT__lane),32);
            tracep->chgIData(oldp+266,(vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+267,(vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__lane),32);
            tracep->chgSData(oldp+268,(vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr),10);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+269,(vlTOPp->simd_compute_unit__DOT__alu_op),4);
            tracep->chgBit(oldp+270,(vlTOPp->simd_compute_unit__DOT__rf_wen));
            tracep->chgWData(oldp+271,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a),256);
            tracep->chgWData(oldp+279,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b),256);
            tracep->chgWData(oldp+287,(vlTOPp->simd_compute_unit__DOT__alu_results),256);
            tracep->chgCData(oldp+295,(vlTOPp->simd_compute_unit__DOT__cmp_results),8);
            tracep->chgWData(oldp+296,(vlTOPp->simd_compute_unit__DOT__writeback_data),256);
            tracep->chgIData(oldp+304,(vlTOPp->simd_compute_unit__DOT__alu_results[0U]),32);
            tracep->chgBit(oldp+305,(vlTOPp->simd_compute_unit__DOT__unused_is_coalesced));
            tracep->chgCData(oldp+306,(vlTOPp->simd_compute_unit__DOT__unused_burst_len),8);
            tracep->chgBit(oldp+307,(vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous));
            tracep->chgBit(oldp+308,((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))));
            tracep->chgCData(oldp+309,(vlTOPp->simd_compute_unit__DOT__alu_op),4);
            tracep->chgIData(oldp+310,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U]),32);
            tracep->chgIData(oldp+311,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U]),32);
            tracep->chgIData(oldp+312,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__result),32);
            tracep->chgBit(oldp+313,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__cmp_result));
            tracep->chgIData(oldp+314,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U]),32);
            tracep->chgIData(oldp+315,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U]),32);
            tracep->chgIData(oldp+316,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__result),32);
            tracep->chgBit(oldp+317,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__cmp_result));
            tracep->chgIData(oldp+318,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U]),32);
            tracep->chgIData(oldp+319,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U]),32);
            tracep->chgIData(oldp+320,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__result),32);
            tracep->chgBit(oldp+321,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__cmp_result));
            tracep->chgIData(oldp+322,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U]),32);
            tracep->chgIData(oldp+323,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U]),32);
            tracep->chgIData(oldp+324,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__result),32);
            tracep->chgBit(oldp+325,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__cmp_result));
            tracep->chgIData(oldp+326,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U]),32);
            tracep->chgIData(oldp+327,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U]),32);
            tracep->chgIData(oldp+328,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__result),32);
            tracep->chgBit(oldp+329,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__cmp_result));
            tracep->chgIData(oldp+330,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U]),32);
            tracep->chgIData(oldp+331,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U]),32);
            tracep->chgIData(oldp+332,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__result),32);
            tracep->chgBit(oldp+333,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__cmp_result));
            tracep->chgIData(oldp+334,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U]),32);
            tracep->chgIData(oldp+335,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U]),32);
            tracep->chgIData(oldp+336,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__result),32);
            tracep->chgBit(oldp+337,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__cmp_result));
            tracep->chgIData(oldp+338,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U]),32);
            tracep->chgIData(oldp+339,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U]),32);
            tracep->chgIData(oldp+340,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__result),32);
            tracep->chgBit(oldp+341,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__cmp_result));
        }
        tracep->chgBit(oldp+342,(vlTOPp->clk));
        tracep->chgBit(oldp+343,(vlTOPp->rst_n));
        tracep->chgIData(oldp+344,(vlTOPp->inst_in),20);
        tracep->chgBit(oldp+345,(vlTOPp->inst_valid));
        tracep->chgBit(oldp+346,(vlTOPp->inst_ready));
        tracep->chgCData(oldp+347,(vlTOPp->active_mask),8);
        tracep->chgWData(oldp+348,(vlTOPp->vector_out),256);
        tracep->chgCData(oldp+356,((0x1fU & (vlTOPp->inst_in 
                                             >> 6U))),5);
        tracep->chgCData(oldp+357,((0x1fU & (vlTOPp->inst_in 
                                             >> 1U))),5);
        tracep->chgCData(oldp+358,((0x1fU & (vlTOPp->inst_in 
                                             >> 0xbU))),5);
        tracep->chgBit(oldp+359,((1U & vlTOPp->inst_in)));
        tracep->chgBit(oldp+360,((1U & (IData)(vlTOPp->active_mask))));
        tracep->chgBit(oldp+361,((1U & ((IData)(vlTOPp->active_mask) 
                                        >> 1U))));
        tracep->chgBit(oldp+362,((1U & ((IData)(vlTOPp->active_mask) 
                                        >> 2U))));
        tracep->chgBit(oldp+363,((1U & ((IData)(vlTOPp->active_mask) 
                                        >> 3U))));
        tracep->chgBit(oldp+364,((1U & ((IData)(vlTOPp->active_mask) 
                                        >> 4U))));
        tracep->chgBit(oldp+365,((1U & ((IData)(vlTOPp->active_mask) 
                                        >> 5U))));
        tracep->chgBit(oldp+366,((1U & ((IData)(vlTOPp->active_mask) 
                                        >> 6U))));
        tracep->chgBit(oldp+367,((1U & ((IData)(vlTOPp->active_mask) 
                                        >> 7U))));
    }
}

void Vsimd_compute_unit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vsimd_compute_unit__Syms* __restrict vlSymsp = static_cast<Vsimd_compute_unit__Syms*>(userp);
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}

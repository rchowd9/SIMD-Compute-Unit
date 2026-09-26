// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimd_compute_unit.h for the primary calling header

#include "Vsimd_compute_unit.h"
#include "Vsimd_compute_unit__Syms.h"

//==========

VL_CTOR_IMP(Vsimd_compute_unit) {
    Vsimd_compute_unit__Syms* __restrict vlSymsp = __VlSymsp = new Vsimd_compute_unit__Syms(this, name());
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsimd_compute_unit::__Vconfigure(Vsimd_compute_unit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vsimd_compute_unit::~Vsimd_compute_unit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vsimd_compute_unit::_initial__TOP__1(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_initial__TOP__1\n"); );
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->inst_ready = 1U;
    vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i)) {
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__ram[(0x3ffU 
                                                            & vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i)] 
            = vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i;
        vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i);
    }
}

void Vsimd_compute_unit::_settle__TOP__3(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_settle__TOP__3\n"); );
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->simd_compute_unit__DOT__alu_op = ((IData)(vlTOPp->inst_valid)
                                               ? (0xfU 
                                                  & (vlTOPp->inst_in 
                                                     >> 0x10U))
                                               : 0U);
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

void Vsimd_compute_unit::_eval_initial(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_eval_initial\n"); );
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_n = vlTOPp->rst_n;
}

void Vsimd_compute_unit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::final\n"); );
    // Variables
    Vsimd_compute_unit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsimd_compute_unit::_eval_settle(Vsimd_compute_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_eval_settle\n"); );
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vsimd_compute_unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimd_compute_unit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    inst_in = VL_RAND_RESET_I(20);
    inst_valid = VL_RAND_RESET_I(1);
    inst_ready = VL_RAND_RESET_I(1);
    active_mask = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vector_out);
    simd_compute_unit__DOT__alu_op = VL_RAND_RESET_I(4);
    simd_compute_unit__DOT__rf_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, simd_compute_unit__DOT__alu_results);
    simd_compute_unit__DOT__cmp_results = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, simd_compute_unit__DOT__writeback_data);
    VL_RAND_RESET_W(256, simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b);
    VL_RAND_RESET_W(256, simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a);
    simd_compute_unit__DOT__unused_is_coalesced = VL_RAND_RESET_I(1);
    simd_compute_unit__DOT__unused_burst_len = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, simd_compute_unit__DOT____Vcellout__mem_inst__rdata);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__cmp_result = VL_RAND_RESET_I(1);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__result = VL_RAND_RESET_I(32);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__cmp_result = VL_RAND_RESET_I(1);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__result = VL_RAND_RESET_I(32);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__cmp_result = VL_RAND_RESET_I(1);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__result = VL_RAND_RESET_I(32);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__cmp_result = VL_RAND_RESET_I(1);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__result = VL_RAND_RESET_I(32);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__cmp_result = VL_RAND_RESET_I(1);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__result = VL_RAND_RESET_I(32);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__cmp_result = VL_RAND_RESET_I(1);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__result = VL_RAND_RESET_I(32);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__cmp_result = VL_RAND_RESET_I(1);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__result = VL_RAND_RESET_I(32);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__cmp_result = VL_RAND_RESET_I(1);
    simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__result = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            VL_RAND_RESET_W(256, simd_compute_unit__DOT__regfile_inst__DOT__registers[__Vi0]);
    }}
    simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk2__DOT__lane = 0;
    simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk1__DOT__i = 0;
    simd_compute_unit__DOT__coalescer_inst__DOT__contiguous = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            simd_compute_unit__DOT__mem_inst__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i = 0;
    simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__lane = 0;
    simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

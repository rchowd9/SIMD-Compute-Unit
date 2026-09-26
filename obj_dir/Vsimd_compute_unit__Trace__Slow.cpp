// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimd_compute_unit__Syms.h"


//======================

void Vsimd_compute_unit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsimd_compute_unit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimd_compute_unit__Syms* __restrict vlSymsp = static_cast<Vsimd_compute_unit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsimd_compute_unit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsimd_compute_unit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vsimd_compute_unit__Syms* __restrict vlSymsp = static_cast<Vsimd_compute_unit__Syms*>(userp);
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vsimd_compute_unit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vsimd_compute_unit__Syms* __restrict vlSymsp = static_cast<Vsimd_compute_unit__Syms*>(userp);
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+343,"clk", false,-1);
        tracep->declBit(c+344,"rst_n", false,-1);
        tracep->declBus(c+345,"inst_in", false,-1, 19,0);
        tracep->declBit(c+346,"inst_valid", false,-1);
        tracep->declBit(c+347,"inst_ready", false,-1);
        tracep->declBus(c+348,"active_mask", false,-1, 7,0);
        tracep->declArray(c+349,"vector_out", false,-1, 255,0);
        tracep->declBit(c+343,"simd_compute_unit clk", false,-1);
        tracep->declBit(c+344,"simd_compute_unit rst_n", false,-1);
        tracep->declBus(c+345,"simd_compute_unit inst_in", false,-1, 19,0);
        tracep->declBit(c+346,"simd_compute_unit inst_valid", false,-1);
        tracep->declBit(c+347,"simd_compute_unit inst_ready", false,-1);
        tracep->declBus(c+348,"simd_compute_unit active_mask", false,-1, 7,0);
        tracep->declArray(c+349,"simd_compute_unit vector_out", false,-1, 255,0);
        tracep->declBus(c+270,"simd_compute_unit alu_op", false,-1, 3,0);
        tracep->declBus(c+357,"simd_compute_unit raddr_a", false,-1, 4,0);
        tracep->declBus(c+358,"simd_compute_unit raddr_b", false,-1, 4,0);
        tracep->declBus(c+359,"simd_compute_unit waddr", false,-1, 4,0);
        tracep->declBit(c+271,"simd_compute_unit rf_wen", false,-1);
        tracep->declBus(c+348,"simd_compute_unit exec_mask", false,-1, 7,0);
        tracep->declBit(c+360,"simd_compute_unit is_mem_op", false,-1);
        tracep->declArray(c+272,"simd_compute_unit operand_a", false,-1, 255,0);
        tracep->declArray(c+280,"simd_compute_unit operand_b", false,-1, 255,0);
        tracep->declArray(c+288,"simd_compute_unit alu_results", false,-1, 255,0);
        tracep->declBus(c+296,"simd_compute_unit cmp_results", false,-1, 7,0);
        tracep->declArray(c+2,"simd_compute_unit mem_rdata", false,-1, 255,0);
        tracep->declArray(c+297,"simd_compute_unit writeback_data", false,-1, 255,0);
        tracep->declBus(c+305,"simd_compute_unit mem_base_addr", false,-1, 31,0);
        tracep->declBit(c+360,"simd_compute_unit coalesced_req_valid", false,-1);
        tracep->declBus(c+348,"simd_compute_unit coalesced_mask", false,-1, 7,0);
        tracep->declBit(c+306,"simd_compute_unit unused_is_coalesced", false,-1);
        tracep->declBus(c+307,"simd_compute_unit unused_burst_len", false,-1, 7,0);
        tracep->declBit(c+343,"simd_compute_unit scheduler_inst clk", false,-1);
        tracep->declBit(c+344,"simd_compute_unit scheduler_inst rst_n", false,-1);
        tracep->declBus(c+345,"simd_compute_unit scheduler_inst inst_in", false,-1, 19,0);
        tracep->declBit(c+346,"simd_compute_unit scheduler_inst inst_valid", false,-1);
        tracep->declBit(c+347,"simd_compute_unit scheduler_inst inst_ready", false,-1);
        tracep->declBus(c+348,"simd_compute_unit scheduler_inst active_mask_in", false,-1, 7,0);
        tracep->declBus(c+270,"simd_compute_unit scheduler_inst alu_op", false,-1, 3,0);
        tracep->declBus(c+357,"simd_compute_unit scheduler_inst raddr_a", false,-1, 4,0);
        tracep->declBus(c+358,"simd_compute_unit scheduler_inst raddr_b", false,-1, 4,0);
        tracep->declBus(c+359,"simd_compute_unit scheduler_inst waddr", false,-1, 4,0);
        tracep->declBit(c+271,"simd_compute_unit scheduler_inst rf_wen", false,-1);
        tracep->declBus(c+348,"simd_compute_unit scheduler_inst active_mask_out", false,-1, 7,0);
        tracep->declBit(c+360,"simd_compute_unit scheduler_inst is_mem_op", false,-1);
        tracep->declBit(c+343,"simd_compute_unit regfile_inst clk", false,-1);
        tracep->declBit(c+344,"simd_compute_unit regfile_inst rst_n", false,-1);
        tracep->declBus(c+357,"simd_compute_unit regfile_inst raddr_a", false,-1, 4,0);
        tracep->declArray(c+272,"simd_compute_unit regfile_inst rdata_a", false,-1, 255,0);
        tracep->declBus(c+358,"simd_compute_unit regfile_inst raddr_b", false,-1, 4,0);
        tracep->declArray(c+280,"simd_compute_unit regfile_inst rdata_b", false,-1, 255,0);
        tracep->declBit(c+271,"simd_compute_unit regfile_inst wen", false,-1);
        tracep->declBus(c+348,"simd_compute_unit regfile_inst exec_mask", false,-1, 7,0);
        tracep->declBus(c+359,"simd_compute_unit regfile_inst waddr", false,-1, 4,0);
        tracep->declArray(c+297,"simd_compute_unit regfile_inst wdata", false,-1, 255,0);
        tracep->declArray(c+10,"simd_compute_unit regfile_inst registers(0)", false,-1, 255,0);
        tracep->declArray(c+18,"simd_compute_unit regfile_inst registers(1)", false,-1, 255,0);
        tracep->declArray(c+26,"simd_compute_unit regfile_inst registers(2)", false,-1, 255,0);
        tracep->declArray(c+34,"simd_compute_unit regfile_inst registers(3)", false,-1, 255,0);
        tracep->declArray(c+42,"simd_compute_unit regfile_inst registers(4)", false,-1, 255,0);
        tracep->declArray(c+50,"simd_compute_unit regfile_inst registers(5)", false,-1, 255,0);
        tracep->declArray(c+58,"simd_compute_unit regfile_inst registers(6)", false,-1, 255,0);
        tracep->declArray(c+66,"simd_compute_unit regfile_inst registers(7)", false,-1, 255,0);
        tracep->declArray(c+74,"simd_compute_unit regfile_inst registers(8)", false,-1, 255,0);
        tracep->declArray(c+82,"simd_compute_unit regfile_inst registers(9)", false,-1, 255,0);
        tracep->declArray(c+90,"simd_compute_unit regfile_inst registers(10)", false,-1, 255,0);
        tracep->declArray(c+98,"simd_compute_unit regfile_inst registers(11)", false,-1, 255,0);
        tracep->declArray(c+106,"simd_compute_unit regfile_inst registers(12)", false,-1, 255,0);
        tracep->declArray(c+114,"simd_compute_unit regfile_inst registers(13)", false,-1, 255,0);
        tracep->declArray(c+122,"simd_compute_unit regfile_inst registers(14)", false,-1, 255,0);
        tracep->declArray(c+130,"simd_compute_unit regfile_inst registers(15)", false,-1, 255,0);
        tracep->declArray(c+138,"simd_compute_unit regfile_inst registers(16)", false,-1, 255,0);
        tracep->declArray(c+146,"simd_compute_unit regfile_inst registers(17)", false,-1, 255,0);
        tracep->declArray(c+154,"simd_compute_unit regfile_inst registers(18)", false,-1, 255,0);
        tracep->declArray(c+162,"simd_compute_unit regfile_inst registers(19)", false,-1, 255,0);
        tracep->declArray(c+170,"simd_compute_unit regfile_inst registers(20)", false,-1, 255,0);
        tracep->declArray(c+178,"simd_compute_unit regfile_inst registers(21)", false,-1, 255,0);
        tracep->declArray(c+186,"simd_compute_unit regfile_inst registers(22)", false,-1, 255,0);
        tracep->declArray(c+194,"simd_compute_unit regfile_inst registers(23)", false,-1, 255,0);
        tracep->declArray(c+202,"simd_compute_unit regfile_inst registers(24)", false,-1, 255,0);
        tracep->declArray(c+210,"simd_compute_unit regfile_inst registers(25)", false,-1, 255,0);
        tracep->declArray(c+218,"simd_compute_unit regfile_inst registers(26)", false,-1, 255,0);
        tracep->declArray(c+226,"simd_compute_unit regfile_inst registers(27)", false,-1, 255,0);
        tracep->declArray(c+234,"simd_compute_unit regfile_inst registers(28)", false,-1, 255,0);
        tracep->declArray(c+242,"simd_compute_unit regfile_inst registers(29)", false,-1, 255,0);
        tracep->declArray(c+250,"simd_compute_unit regfile_inst registers(30)", false,-1, 255,0);
        tracep->declArray(c+258,"simd_compute_unit regfile_inst registers(31)", false,-1, 255,0);
        tracep->declBus(c+266,"simd_compute_unit regfile_inst unnamedblk2 lane", false,-1, 31,0);
        tracep->declBus(c+267,"simd_compute_unit regfile_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+369,"simd_compute_unit coalescer_inst LANES", false,-1, 31,0);
        tracep->declBus(c+348,"simd_compute_unit coalescer_inst mask", false,-1, 7,0);
        tracep->declArray(c+288,"simd_compute_unit coalescer_inst lane_addrs", false,-1, 255,0);
        tracep->declBit(c+306,"simd_compute_unit coalescer_inst is_coalesced", false,-1);
        tracep->declBus(c+305,"simd_compute_unit coalescer_inst base_addr", false,-1, 31,0);
        tracep->declBus(c+307,"simd_compute_unit coalescer_inst burst_len", false,-1, 7,0);
        tracep->declBit(c+308,"simd_compute_unit coalescer_inst contiguous", false,-1);
        tracep->declBus(c+370,"simd_compute_unit coalescer_inst i", false,-1, 31,0);
        tracep->declBit(c+343,"simd_compute_unit mem_inst clk", false,-1);
        tracep->declBit(c+344,"simd_compute_unit mem_inst rst_n", false,-1);
        tracep->declBit(c+360,"simd_compute_unit mem_inst mem_req_valid", false,-1);
        tracep->declBit(c+309,"simd_compute_unit mem_inst mem_write", false,-1);
        tracep->declBus(c+305,"simd_compute_unit mem_inst base_addr", false,-1, 31,0);
        tracep->declArray(c+280,"simd_compute_unit mem_inst wdata", false,-1, 255,0);
        tracep->declBus(c+348,"simd_compute_unit mem_inst mem_mask", false,-1, 7,0);
        tracep->declArray(c+2,"simd_compute_unit mem_inst rdata", false,-1, 255,0);
        tracep->declBit(c+371,"simd_compute_unit mem_inst mem_ready", false,-1);
        tracep->declBus(c+1,"simd_compute_unit mem_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+268,"simd_compute_unit mem_inst unnamedblk2 lane", false,-1, 31,0);
        tracep->declBus(c+269,"simd_compute_unit mem_inst unnamedblk2 unnamedblk3 word_addr", false,-1, 9,0);
        tracep->declBit(c+343,"simd_compute_unit gen_lanes[0] lane_inst clk", false,-1);
        tracep->declBit(c+361,"simd_compute_unit gen_lanes[0] lane_inst enable", false,-1);
        tracep->declBus(c+310,"simd_compute_unit gen_lanes[0] lane_inst alu_op", false,-1, 3,0);
        tracep->declBus(c+311,"simd_compute_unit gen_lanes[0] lane_inst operand_a", false,-1, 31,0);
        tracep->declBus(c+312,"simd_compute_unit gen_lanes[0] lane_inst operand_b", false,-1, 31,0);
        tracep->declBus(c+313,"simd_compute_unit gen_lanes[0] lane_inst result", false,-1, 31,0);
        tracep->declBit(c+314,"simd_compute_unit gen_lanes[0] lane_inst cmp_result", false,-1);
        tracep->declBit(c+343,"simd_compute_unit gen_lanes[1] lane_inst clk", false,-1);
        tracep->declBit(c+362,"simd_compute_unit gen_lanes[1] lane_inst enable", false,-1);
        tracep->declBus(c+310,"simd_compute_unit gen_lanes[1] lane_inst alu_op", false,-1, 3,0);
        tracep->declBus(c+315,"simd_compute_unit gen_lanes[1] lane_inst operand_a", false,-1, 31,0);
        tracep->declBus(c+316,"simd_compute_unit gen_lanes[1] lane_inst operand_b", false,-1, 31,0);
        tracep->declBus(c+317,"simd_compute_unit gen_lanes[1] lane_inst result", false,-1, 31,0);
        tracep->declBit(c+318,"simd_compute_unit gen_lanes[1] lane_inst cmp_result", false,-1);
        tracep->declBit(c+343,"simd_compute_unit gen_lanes[2] lane_inst clk", false,-1);
        tracep->declBit(c+363,"simd_compute_unit gen_lanes[2] lane_inst enable", false,-1);
        tracep->declBus(c+310,"simd_compute_unit gen_lanes[2] lane_inst alu_op", false,-1, 3,0);
        tracep->declBus(c+319,"simd_compute_unit gen_lanes[2] lane_inst operand_a", false,-1, 31,0);
        tracep->declBus(c+320,"simd_compute_unit gen_lanes[2] lane_inst operand_b", false,-1, 31,0);
        tracep->declBus(c+321,"simd_compute_unit gen_lanes[2] lane_inst result", false,-1, 31,0);
        tracep->declBit(c+322,"simd_compute_unit gen_lanes[2] lane_inst cmp_result", false,-1);
        tracep->declBit(c+343,"simd_compute_unit gen_lanes[3] lane_inst clk", false,-1);
        tracep->declBit(c+364,"simd_compute_unit gen_lanes[3] lane_inst enable", false,-1);
        tracep->declBus(c+310,"simd_compute_unit gen_lanes[3] lane_inst alu_op", false,-1, 3,0);
        tracep->declBus(c+323,"simd_compute_unit gen_lanes[3] lane_inst operand_a", false,-1, 31,0);
        tracep->declBus(c+324,"simd_compute_unit gen_lanes[3] lane_inst operand_b", false,-1, 31,0);
        tracep->declBus(c+325,"simd_compute_unit gen_lanes[3] lane_inst result", false,-1, 31,0);
        tracep->declBit(c+326,"simd_compute_unit gen_lanes[3] lane_inst cmp_result", false,-1);
        tracep->declBit(c+343,"simd_compute_unit gen_lanes[4] lane_inst clk", false,-1);
        tracep->declBit(c+365,"simd_compute_unit gen_lanes[4] lane_inst enable", false,-1);
        tracep->declBus(c+310,"simd_compute_unit gen_lanes[4] lane_inst alu_op", false,-1, 3,0);
        tracep->declBus(c+327,"simd_compute_unit gen_lanes[4] lane_inst operand_a", false,-1, 31,0);
        tracep->declBus(c+328,"simd_compute_unit gen_lanes[4] lane_inst operand_b", false,-1, 31,0);
        tracep->declBus(c+329,"simd_compute_unit gen_lanes[4] lane_inst result", false,-1, 31,0);
        tracep->declBit(c+330,"simd_compute_unit gen_lanes[4] lane_inst cmp_result", false,-1);
        tracep->declBit(c+343,"simd_compute_unit gen_lanes[5] lane_inst clk", false,-1);
        tracep->declBit(c+366,"simd_compute_unit gen_lanes[5] lane_inst enable", false,-1);
        tracep->declBus(c+310,"simd_compute_unit gen_lanes[5] lane_inst alu_op", false,-1, 3,0);
        tracep->declBus(c+331,"simd_compute_unit gen_lanes[5] lane_inst operand_a", false,-1, 31,0);
        tracep->declBus(c+332,"simd_compute_unit gen_lanes[5] lane_inst operand_b", false,-1, 31,0);
        tracep->declBus(c+333,"simd_compute_unit gen_lanes[5] lane_inst result", false,-1, 31,0);
        tracep->declBit(c+334,"simd_compute_unit gen_lanes[5] lane_inst cmp_result", false,-1);
        tracep->declBit(c+343,"simd_compute_unit gen_lanes[6] lane_inst clk", false,-1);
        tracep->declBit(c+367,"simd_compute_unit gen_lanes[6] lane_inst enable", false,-1);
        tracep->declBus(c+310,"simd_compute_unit gen_lanes[6] lane_inst alu_op", false,-1, 3,0);
        tracep->declBus(c+335,"simd_compute_unit gen_lanes[6] lane_inst operand_a", false,-1, 31,0);
        tracep->declBus(c+336,"simd_compute_unit gen_lanes[6] lane_inst operand_b", false,-1, 31,0);
        tracep->declBus(c+337,"simd_compute_unit gen_lanes[6] lane_inst result", false,-1, 31,0);
        tracep->declBit(c+338,"simd_compute_unit gen_lanes[6] lane_inst cmp_result", false,-1);
        tracep->declBit(c+343,"simd_compute_unit gen_lanes[7] lane_inst clk", false,-1);
        tracep->declBit(c+368,"simd_compute_unit gen_lanes[7] lane_inst enable", false,-1);
        tracep->declBus(c+310,"simd_compute_unit gen_lanes[7] lane_inst alu_op", false,-1, 3,0);
        tracep->declBus(c+339,"simd_compute_unit gen_lanes[7] lane_inst operand_a", false,-1, 31,0);
        tracep->declBus(c+340,"simd_compute_unit gen_lanes[7] lane_inst operand_b", false,-1, 31,0);
        tracep->declBus(c+341,"simd_compute_unit gen_lanes[7] lane_inst result", false,-1, 31,0);
        tracep->declBit(c+342,"simd_compute_unit gen_lanes[7] lane_inst cmp_result", false,-1);
        tracep->declBus(c+372,"simd_pkg NUM_LANES", false,-1, 31,0);
        tracep->declBus(c+373,"simd_pkg DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"simd_pkg REG_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"simd_pkg MASK_WIDTH", false,-1, 31,0);
    }
}

void Vsimd_compute_unit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsimd_compute_unit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vsimd_compute_unit__Syms* __restrict vlSymsp = static_cast<Vsimd_compute_unit__Syms*>(userp);
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vsimd_compute_unit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vsimd_compute_unit__Syms* __restrict vlSymsp = static_cast<Vsimd_compute_unit__Syms*>(userp);
    Vsimd_compute_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*255:0*/ __Vtemp58[8];
    WData/*255:0*/ __Vtemp59[8];
    WData/*255:0*/ __Vtemp60[8];
    WData/*255:0*/ __Vtemp61[8];
    WData/*255:0*/ __Vtemp62[8];
    WData/*255:0*/ __Vtemp63[8];
    WData/*255:0*/ __Vtemp64[8];
    WData/*255:0*/ __Vtemp65[8];
    WData/*255:0*/ __Vtemp66[8];
    WData/*255:0*/ __Vtemp67[8];
    WData/*255:0*/ __Vtemp68[8];
    WData/*255:0*/ __Vtemp69[8];
    WData/*255:0*/ __Vtemp70[8];
    WData/*255:0*/ __Vtemp71[8];
    WData/*255:0*/ __Vtemp72[8];
    WData/*255:0*/ __Vtemp73[8];
    WData/*255:0*/ __Vtemp74[8];
    WData/*255:0*/ __Vtemp75[8];
    WData/*255:0*/ __Vtemp76[8];
    WData/*255:0*/ __Vtemp77[8];
    WData/*255:0*/ __Vtemp78[8];
    WData/*255:0*/ __Vtemp79[8];
    WData/*255:0*/ __Vtemp80[8];
    WData/*255:0*/ __Vtemp81[8];
    WData/*255:0*/ __Vtemp82[8];
    WData/*255:0*/ __Vtemp83[8];
    WData/*255:0*/ __Vtemp84[8];
    WData/*255:0*/ __Vtemp85[8];
    WData/*255:0*/ __Vtemp86[8];
    WData/*255:0*/ __Vtemp87[8];
    WData/*255:0*/ __Vtemp88[8];
    WData/*255:0*/ __Vtemp89[8];
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullWData(oldp+2,(vlTOPp->simd_compute_unit__DOT____Vcellout__mem_inst__rdata),256);
        __Vtemp58[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0U][0U];
        __Vtemp58[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0U][1U];
        __Vtemp58[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0U][2U];
        __Vtemp58[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0U][3U];
        __Vtemp58[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0U][4U];
        __Vtemp58[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0U][5U];
        __Vtemp58[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0U][6U];
        __Vtemp58[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0U][7U];
        tracep->fullWData(oldp+10,(__Vtemp58),256);
        __Vtemp59[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [1U][0U];
        __Vtemp59[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [1U][1U];
        __Vtemp59[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [1U][2U];
        __Vtemp59[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [1U][3U];
        __Vtemp59[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [1U][4U];
        __Vtemp59[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [1U][5U];
        __Vtemp59[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [1U][6U];
        __Vtemp59[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [1U][7U];
        tracep->fullWData(oldp+18,(__Vtemp59),256);
        __Vtemp60[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [2U][0U];
        __Vtemp60[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [2U][1U];
        __Vtemp60[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [2U][2U];
        __Vtemp60[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [2U][3U];
        __Vtemp60[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [2U][4U];
        __Vtemp60[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [2U][5U];
        __Vtemp60[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [2U][6U];
        __Vtemp60[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [2U][7U];
        tracep->fullWData(oldp+26,(__Vtemp60),256);
        __Vtemp61[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [3U][0U];
        __Vtemp61[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [3U][1U];
        __Vtemp61[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [3U][2U];
        __Vtemp61[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [3U][3U];
        __Vtemp61[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [3U][4U];
        __Vtemp61[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [3U][5U];
        __Vtemp61[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [3U][6U];
        __Vtemp61[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [3U][7U];
        tracep->fullWData(oldp+34,(__Vtemp61),256);
        __Vtemp62[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [4U][0U];
        __Vtemp62[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [4U][1U];
        __Vtemp62[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [4U][2U];
        __Vtemp62[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [4U][3U];
        __Vtemp62[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [4U][4U];
        __Vtemp62[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [4U][5U];
        __Vtemp62[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [4U][6U];
        __Vtemp62[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [4U][7U];
        tracep->fullWData(oldp+42,(__Vtemp62),256);
        __Vtemp63[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [5U][0U];
        __Vtemp63[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [5U][1U];
        __Vtemp63[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [5U][2U];
        __Vtemp63[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [5U][3U];
        __Vtemp63[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [5U][4U];
        __Vtemp63[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [5U][5U];
        __Vtemp63[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [5U][6U];
        __Vtemp63[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [5U][7U];
        tracep->fullWData(oldp+50,(__Vtemp63),256);
        __Vtemp64[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [6U][0U];
        __Vtemp64[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [6U][1U];
        __Vtemp64[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [6U][2U];
        __Vtemp64[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [6U][3U];
        __Vtemp64[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [6U][4U];
        __Vtemp64[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [6U][5U];
        __Vtemp64[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [6U][6U];
        __Vtemp64[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [6U][7U];
        tracep->fullWData(oldp+58,(__Vtemp64),256);
        __Vtemp65[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [7U][0U];
        __Vtemp65[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [7U][1U];
        __Vtemp65[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [7U][2U];
        __Vtemp65[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [7U][3U];
        __Vtemp65[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [7U][4U];
        __Vtemp65[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [7U][5U];
        __Vtemp65[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [7U][6U];
        __Vtemp65[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [7U][7U];
        tracep->fullWData(oldp+66,(__Vtemp65),256);
        __Vtemp66[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [8U][0U];
        __Vtemp66[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [8U][1U];
        __Vtemp66[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [8U][2U];
        __Vtemp66[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [8U][3U];
        __Vtemp66[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [8U][4U];
        __Vtemp66[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [8U][5U];
        __Vtemp66[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [8U][6U];
        __Vtemp66[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [8U][7U];
        tracep->fullWData(oldp+74,(__Vtemp66),256);
        __Vtemp67[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [9U][0U];
        __Vtemp67[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [9U][1U];
        __Vtemp67[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [9U][2U];
        __Vtemp67[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [9U][3U];
        __Vtemp67[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [9U][4U];
        __Vtemp67[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [9U][5U];
        __Vtemp67[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [9U][6U];
        __Vtemp67[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [9U][7U];
        tracep->fullWData(oldp+82,(__Vtemp67),256);
        __Vtemp68[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xaU][0U];
        __Vtemp68[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xaU][1U];
        __Vtemp68[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xaU][2U];
        __Vtemp68[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xaU][3U];
        __Vtemp68[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xaU][4U];
        __Vtemp68[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xaU][5U];
        __Vtemp68[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xaU][6U];
        __Vtemp68[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xaU][7U];
        tracep->fullWData(oldp+90,(__Vtemp68),256);
        __Vtemp69[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xbU][0U];
        __Vtemp69[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xbU][1U];
        __Vtemp69[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xbU][2U];
        __Vtemp69[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xbU][3U];
        __Vtemp69[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xbU][4U];
        __Vtemp69[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xbU][5U];
        __Vtemp69[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xbU][6U];
        __Vtemp69[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xbU][7U];
        tracep->fullWData(oldp+98,(__Vtemp69),256);
        __Vtemp70[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xcU][0U];
        __Vtemp70[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xcU][1U];
        __Vtemp70[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xcU][2U];
        __Vtemp70[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xcU][3U];
        __Vtemp70[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xcU][4U];
        __Vtemp70[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xcU][5U];
        __Vtemp70[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xcU][6U];
        __Vtemp70[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xcU][7U];
        tracep->fullWData(oldp+106,(__Vtemp70),256);
        __Vtemp71[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xdU][0U];
        __Vtemp71[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xdU][1U];
        __Vtemp71[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xdU][2U];
        __Vtemp71[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xdU][3U];
        __Vtemp71[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xdU][4U];
        __Vtemp71[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xdU][5U];
        __Vtemp71[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xdU][6U];
        __Vtemp71[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xdU][7U];
        tracep->fullWData(oldp+114,(__Vtemp71),256);
        __Vtemp72[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xeU][0U];
        __Vtemp72[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xeU][1U];
        __Vtemp72[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xeU][2U];
        __Vtemp72[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xeU][3U];
        __Vtemp72[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xeU][4U];
        __Vtemp72[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xeU][5U];
        __Vtemp72[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xeU][6U];
        __Vtemp72[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xeU][7U];
        tracep->fullWData(oldp+122,(__Vtemp72),256);
        __Vtemp73[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xfU][0U];
        __Vtemp73[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xfU][1U];
        __Vtemp73[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xfU][2U];
        __Vtemp73[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xfU][3U];
        __Vtemp73[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xfU][4U];
        __Vtemp73[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xfU][5U];
        __Vtemp73[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xfU][6U];
        __Vtemp73[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0xfU][7U];
        tracep->fullWData(oldp+130,(__Vtemp73),256);
        __Vtemp74[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x10U][0U];
        __Vtemp74[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x10U][1U];
        __Vtemp74[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x10U][2U];
        __Vtemp74[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x10U][3U];
        __Vtemp74[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x10U][4U];
        __Vtemp74[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x10U][5U];
        __Vtemp74[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x10U][6U];
        __Vtemp74[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x10U][7U];
        tracep->fullWData(oldp+138,(__Vtemp74),256);
        __Vtemp75[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x11U][0U];
        __Vtemp75[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x11U][1U];
        __Vtemp75[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x11U][2U];
        __Vtemp75[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x11U][3U];
        __Vtemp75[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x11U][4U];
        __Vtemp75[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x11U][5U];
        __Vtemp75[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x11U][6U];
        __Vtemp75[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x11U][7U];
        tracep->fullWData(oldp+146,(__Vtemp75),256);
        __Vtemp76[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x12U][0U];
        __Vtemp76[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x12U][1U];
        __Vtemp76[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x12U][2U];
        __Vtemp76[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x12U][3U];
        __Vtemp76[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x12U][4U];
        __Vtemp76[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x12U][5U];
        __Vtemp76[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x12U][6U];
        __Vtemp76[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x12U][7U];
        tracep->fullWData(oldp+154,(__Vtemp76),256);
        __Vtemp77[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x13U][0U];
        __Vtemp77[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x13U][1U];
        __Vtemp77[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x13U][2U];
        __Vtemp77[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x13U][3U];
        __Vtemp77[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x13U][4U];
        __Vtemp77[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x13U][5U];
        __Vtemp77[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x13U][6U];
        __Vtemp77[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x13U][7U];
        tracep->fullWData(oldp+162,(__Vtemp77),256);
        __Vtemp78[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x14U][0U];
        __Vtemp78[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x14U][1U];
        __Vtemp78[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x14U][2U];
        __Vtemp78[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x14U][3U];
        __Vtemp78[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x14U][4U];
        __Vtemp78[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x14U][5U];
        __Vtemp78[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x14U][6U];
        __Vtemp78[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x14U][7U];
        tracep->fullWData(oldp+170,(__Vtemp78),256);
        __Vtemp79[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x15U][0U];
        __Vtemp79[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x15U][1U];
        __Vtemp79[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x15U][2U];
        __Vtemp79[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x15U][3U];
        __Vtemp79[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x15U][4U];
        __Vtemp79[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x15U][5U];
        __Vtemp79[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x15U][6U];
        __Vtemp79[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x15U][7U];
        tracep->fullWData(oldp+178,(__Vtemp79),256);
        __Vtemp80[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x16U][0U];
        __Vtemp80[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x16U][1U];
        __Vtemp80[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x16U][2U];
        __Vtemp80[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x16U][3U];
        __Vtemp80[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x16U][4U];
        __Vtemp80[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x16U][5U];
        __Vtemp80[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x16U][6U];
        __Vtemp80[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x16U][7U];
        tracep->fullWData(oldp+186,(__Vtemp80),256);
        __Vtemp81[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x17U][0U];
        __Vtemp81[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x17U][1U];
        __Vtemp81[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x17U][2U];
        __Vtemp81[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x17U][3U];
        __Vtemp81[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x17U][4U];
        __Vtemp81[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x17U][5U];
        __Vtemp81[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x17U][6U];
        __Vtemp81[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x17U][7U];
        tracep->fullWData(oldp+194,(__Vtemp81),256);
        __Vtemp82[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x18U][0U];
        __Vtemp82[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x18U][1U];
        __Vtemp82[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x18U][2U];
        __Vtemp82[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x18U][3U];
        __Vtemp82[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x18U][4U];
        __Vtemp82[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x18U][5U];
        __Vtemp82[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x18U][6U];
        __Vtemp82[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x18U][7U];
        tracep->fullWData(oldp+202,(__Vtemp82),256);
        __Vtemp83[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x19U][0U];
        __Vtemp83[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x19U][1U];
        __Vtemp83[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x19U][2U];
        __Vtemp83[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x19U][3U];
        __Vtemp83[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x19U][4U];
        __Vtemp83[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x19U][5U];
        __Vtemp83[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x19U][6U];
        __Vtemp83[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x19U][7U];
        tracep->fullWData(oldp+210,(__Vtemp83),256);
        __Vtemp84[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1aU][0U];
        __Vtemp84[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1aU][1U];
        __Vtemp84[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1aU][2U];
        __Vtemp84[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1aU][3U];
        __Vtemp84[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1aU][4U];
        __Vtemp84[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1aU][5U];
        __Vtemp84[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1aU][6U];
        __Vtemp84[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1aU][7U];
        tracep->fullWData(oldp+218,(__Vtemp84),256);
        __Vtemp85[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1bU][0U];
        __Vtemp85[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1bU][1U];
        __Vtemp85[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1bU][2U];
        __Vtemp85[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1bU][3U];
        __Vtemp85[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1bU][4U];
        __Vtemp85[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1bU][5U];
        __Vtemp85[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1bU][6U];
        __Vtemp85[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1bU][7U];
        tracep->fullWData(oldp+226,(__Vtemp85),256);
        __Vtemp86[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1cU][0U];
        __Vtemp86[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1cU][1U];
        __Vtemp86[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1cU][2U];
        __Vtemp86[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1cU][3U];
        __Vtemp86[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1cU][4U];
        __Vtemp86[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1cU][5U];
        __Vtemp86[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1cU][6U];
        __Vtemp86[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1cU][7U];
        tracep->fullWData(oldp+234,(__Vtemp86),256);
        __Vtemp87[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1dU][0U];
        __Vtemp87[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1dU][1U];
        __Vtemp87[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1dU][2U];
        __Vtemp87[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1dU][3U];
        __Vtemp87[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1dU][4U];
        __Vtemp87[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1dU][5U];
        __Vtemp87[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1dU][6U];
        __Vtemp87[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1dU][7U];
        tracep->fullWData(oldp+242,(__Vtemp87),256);
        __Vtemp88[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1eU][0U];
        __Vtemp88[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1eU][1U];
        __Vtemp88[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1eU][2U];
        __Vtemp88[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1eU][3U];
        __Vtemp88[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1eU][4U];
        __Vtemp88[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1eU][5U];
        __Vtemp88[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1eU][6U];
        __Vtemp88[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1eU][7U];
        tracep->fullWData(oldp+250,(__Vtemp88),256);
        __Vtemp89[0U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1fU][0U];
        __Vtemp89[1U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1fU][1U];
        __Vtemp89[2U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1fU][2U];
        __Vtemp89[3U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1fU][3U];
        __Vtemp89[4U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1fU][4U];
        __Vtemp89[5U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1fU][5U];
        __Vtemp89[6U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1fU][6U];
        __Vtemp89[7U] = vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__registers
            [0x1fU][7U];
        tracep->fullWData(oldp+258,(__Vtemp89),256);
        tracep->fullIData(oldp+266,(vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk2__DOT__lane),32);
        tracep->fullIData(oldp+267,(vlTOPp->simd_compute_unit__DOT__regfile_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+268,(vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__lane),32);
        tracep->fullSData(oldp+269,(vlTOPp->simd_compute_unit__DOT__mem_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__word_addr),10);
        tracep->fullCData(oldp+270,(vlTOPp->simd_compute_unit__DOT__alu_op),4);
        tracep->fullBit(oldp+271,(vlTOPp->simd_compute_unit__DOT__rf_wen));
        tracep->fullWData(oldp+272,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a),256);
        tracep->fullWData(oldp+280,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b),256);
        tracep->fullWData(oldp+288,(vlTOPp->simd_compute_unit__DOT__alu_results),256);
        tracep->fullCData(oldp+296,(vlTOPp->simd_compute_unit__DOT__cmp_results),8);
        tracep->fullWData(oldp+297,(vlTOPp->simd_compute_unit__DOT__writeback_data),256);
        tracep->fullIData(oldp+305,(vlTOPp->simd_compute_unit__DOT__alu_results[0U]),32);
        tracep->fullBit(oldp+306,(vlTOPp->simd_compute_unit__DOT__unused_is_coalesced));
        tracep->fullCData(oldp+307,(vlTOPp->simd_compute_unit__DOT__unused_burst_len),8);
        tracep->fullBit(oldp+308,(vlTOPp->simd_compute_unit__DOT__coalescer_inst__DOT__contiguous));
        tracep->fullBit(oldp+309,((0xaU == (IData)(vlTOPp->simd_compute_unit__DOT__alu_op))));
        tracep->fullCData(oldp+310,(vlTOPp->simd_compute_unit__DOT__alu_op),4);
        tracep->fullIData(oldp+311,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[0U]),32);
        tracep->fullIData(oldp+312,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[0U]),32);
        tracep->fullIData(oldp+313,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__result),32);
        tracep->fullBit(oldp+314,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__cmp_result));
        tracep->fullIData(oldp+315,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[1U]),32);
        tracep->fullIData(oldp+316,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[1U]),32);
        tracep->fullIData(oldp+317,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__result),32);
        tracep->fullBit(oldp+318,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__cmp_result));
        tracep->fullIData(oldp+319,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[2U]),32);
        tracep->fullIData(oldp+320,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[2U]),32);
        tracep->fullIData(oldp+321,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__result),32);
        tracep->fullBit(oldp+322,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__cmp_result));
        tracep->fullIData(oldp+323,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[3U]),32);
        tracep->fullIData(oldp+324,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[3U]),32);
        tracep->fullIData(oldp+325,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__result),32);
        tracep->fullBit(oldp+326,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__cmp_result));
        tracep->fullIData(oldp+327,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[4U]),32);
        tracep->fullIData(oldp+328,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[4U]),32);
        tracep->fullIData(oldp+329,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__result),32);
        tracep->fullBit(oldp+330,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__cmp_result));
        tracep->fullIData(oldp+331,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[5U]),32);
        tracep->fullIData(oldp+332,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[5U]),32);
        tracep->fullIData(oldp+333,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__result),32);
        tracep->fullBit(oldp+334,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__cmp_result));
        tracep->fullIData(oldp+335,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[6U]),32);
        tracep->fullIData(oldp+336,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[6U]),32);
        tracep->fullIData(oldp+337,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__result),32);
        tracep->fullBit(oldp+338,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__cmp_result));
        tracep->fullIData(oldp+339,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_a[7U]),32);
        tracep->fullIData(oldp+340,(vlTOPp->simd_compute_unit__DOT____Vcellout__regfile_inst__rdata_b[7U]),32);
        tracep->fullIData(oldp+341,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__result),32);
        tracep->fullBit(oldp+342,(vlTOPp->simd_compute_unit__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__cmp_result));
        tracep->fullBit(oldp+343,(vlTOPp->clk));
        tracep->fullBit(oldp+344,(vlTOPp->rst_n));
        tracep->fullIData(oldp+345,(vlTOPp->inst_in),20);
        tracep->fullBit(oldp+346,(vlTOPp->inst_valid));
        tracep->fullBit(oldp+347,(vlTOPp->inst_ready));
        tracep->fullCData(oldp+348,(vlTOPp->active_mask),8);
        tracep->fullWData(oldp+349,(vlTOPp->vector_out),256);
        tracep->fullCData(oldp+357,((0x1fU & (vlTOPp->inst_in 
                                              >> 6U))),5);
        tracep->fullCData(oldp+358,((0x1fU & (vlTOPp->inst_in 
                                              >> 1U))),5);
        tracep->fullCData(oldp+359,((0x1fU & (vlTOPp->inst_in 
                                              >> 0xbU))),5);
        tracep->fullBit(oldp+360,((1U & vlTOPp->inst_in)));
        tracep->fullBit(oldp+361,((1U & (IData)(vlTOPp->active_mask))));
        tracep->fullBit(oldp+362,((1U & ((IData)(vlTOPp->active_mask) 
                                         >> 1U))));
        tracep->fullBit(oldp+363,((1U & ((IData)(vlTOPp->active_mask) 
                                         >> 2U))));
        tracep->fullBit(oldp+364,((1U & ((IData)(vlTOPp->active_mask) 
                                         >> 3U))));
        tracep->fullBit(oldp+365,((1U & ((IData)(vlTOPp->active_mask) 
                                         >> 4U))));
        tracep->fullBit(oldp+366,((1U & ((IData)(vlTOPp->active_mask) 
                                         >> 5U))));
        tracep->fullBit(oldp+367,((1U & ((IData)(vlTOPp->active_mask) 
                                         >> 6U))));
        tracep->fullBit(oldp+368,((1U & ((IData)(vlTOPp->active_mask) 
                                         >> 7U))));
        tracep->fullIData(oldp+369,(8U),32);
        tracep->fullIData(oldp+370,(8U),32);
        tracep->fullBit(oldp+371,(1U));
        tracep->fullIData(oldp+372,(8U),32);
        tracep->fullIData(oldp+373,(0x20U),32);
        tracep->fullIData(oldp+374,(5U),32);
    }
}

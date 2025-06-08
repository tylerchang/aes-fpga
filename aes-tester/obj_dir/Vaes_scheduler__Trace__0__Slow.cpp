// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaes_scheduler__Syms.h"


VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1578,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1579,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1585,0,"round_key_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1586,0,"sink_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1587,0,"sink_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1588,0,"sink_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1589,0,"source_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1590,0,"source_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1591,0,"source_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("aes_scheduler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1642,0,"N_CORES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1578,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1579,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1585,0,"round_key_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1586,0,"sink_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1587,0,"sink_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1588,0,"sink_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1589,0,"source_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1590,0,"source_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1591,0,"source_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("in_text", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declArray(c+944+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_text", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declArray(c+984+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1024,0,"r_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"we_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1025,0,"we_core",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wr_en_sched", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBit(c+1026+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1036+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1040,0,"c_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1041,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1042,0,"start_cores",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1043,0,"w_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"we_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1044+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1048,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1049,0,"r_reg_word_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1050,0,"r_reg_core_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1051,0,"w_reg_word_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1052,0,"w_reg_core_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("core_input_comb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1053,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1054,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1055,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("core_input_seq", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1056,0,"next_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_aes_cores[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1057,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1061,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1062,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1592,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1066,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1062,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1067,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1593,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1068,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+6,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+10,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1062,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1593,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1062,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+14+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1062,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+6,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1072,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1074,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1075,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1072,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1076,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1062,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1068,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+50+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1077+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+66+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1093,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1094,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1095,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1096,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1097,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1098,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1099,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1100,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1101,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1102,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1103,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1104,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1105,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1106,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1107,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1108,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1109,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1113,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1114,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1597,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1118,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1114,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1119,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1598,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1120,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+100,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+104,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1114,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1598,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1114,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+104,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+108+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+124+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+140,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1114,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+100,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1124,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1125,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1127,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1124,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1128,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1114,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1120,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+144+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1129+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+160+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1145,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1146,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1147,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1148,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1149,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1150,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1151,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+183,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1152,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1153,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1154,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1155,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1156,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1157,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1158,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1159,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1160,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1161,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1165,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1166,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1602,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1170,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+193,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1166,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1171,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1603,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1172,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+194,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+198,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1166,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1603,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1166,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+198,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+202+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+218+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+234,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1166,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+194,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1176,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1177,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1176,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1180,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1166,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1172,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+238+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1181+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+254+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1197,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1198,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1199,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1200,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1201,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1202,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1203,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1204,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1205,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1206,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1207,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1208,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1209,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1210,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1211,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1212,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1213,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1217,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1218,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1607,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+286,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1222,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+287,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1218,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1223,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1608,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1224,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+288,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+292,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1218,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1608,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1218,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+292,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+296+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+312+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+328,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1218,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+288,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1228,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1229,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1230,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1231,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1228,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1232,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1218,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1224,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+332+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1233+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+348+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1249,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+365,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1250,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1251,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+367,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1252,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1253,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+369,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1254,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1255,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+371,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1256,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1257,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1258,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1259,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1260,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1261,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1262,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1263,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+379,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1264,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1265,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1269,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1270,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1612,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+380,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1274,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+381,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1270,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1275,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1613,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1276,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+382,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+386,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1270,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1613,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1270,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+386,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+390+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+406+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+422,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+423,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1270,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+382,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1280,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1281,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1282,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1283,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1280,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+424,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1284,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1270,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1276,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+426+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1285+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+442+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+458,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1301,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+459,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1302,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+460,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1303,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1304,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1305,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1306,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1307,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+465,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1308,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+466,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1309,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1310,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1311,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1312,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+470,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1313,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1314,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+472,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1315,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1316,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1317,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1321,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1322,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1617,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+474,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1326,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+475,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1322,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1327,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1618,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1328,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+476,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+480,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1322,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1618,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1322,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+480,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+484+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+500+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+516,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+517,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1322,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+476,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1332,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1333,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1334,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1335,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1332,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+518,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1336,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+519,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1322,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1328,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+520+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1337+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+536+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1353,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1354,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+554,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1355,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+555,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1356,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+556,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1357,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1358,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+558,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1359,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+559,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1360,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+560,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1361,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+561,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1362,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+562,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1363,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+563,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1364,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+564,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1365,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1366,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+566,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1367,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+567,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1368,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1369,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1373,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1374,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1622,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+568,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1378,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+569,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1374,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1379,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1623,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1380,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+570,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+574,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1374,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1623,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1374,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+574,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+578+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+594+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+611,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1374,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+570,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1384,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1385,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1386,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1387,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1384,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+612,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1388,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+613,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1374,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1380,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+614+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1389+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+630+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+646,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1405,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+647,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1406,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1407,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+649,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1408,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1409,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+651,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1410,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1411,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1412,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+654,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1413,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+655,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1414,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1415,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1416,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+658,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1417,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+659,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1418,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+660,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1419,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+661,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1420,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1421,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1425,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1426,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1627,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+662,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1430,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+663,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1426,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1431,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1628,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1432,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+664,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+668,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1426,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1628,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1426,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+668,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+672+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+688+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+704,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+705,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1426,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+664,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1436,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1437,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1438,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1439,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1436,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1440,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+707,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1426,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1432,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+708+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1441+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+724+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+740,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1457,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+741,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1458,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+742,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1459,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+743,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1460,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+744,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1461,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+745,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1462,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+746,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1463,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+747,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1464,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1465,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+749,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1466,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+750,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1467,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1468,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+752,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1469,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1470,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1471,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+755,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1472,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1473,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1477,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1478,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1632,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+756,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1482,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+757,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1478,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1483,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1633,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1484,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+758,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+762,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1478,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1633,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1478,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+762,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+766+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+782+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+798,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+799,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1478,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+758,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1488,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1489,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1490,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1491,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1488,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1492,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+801,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1478,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1484,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+802+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1493+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+818+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+834,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1509,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+835,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1510,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+836,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1511,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+837,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1512,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+838,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1513,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1514,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1515,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1516,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+842,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1517,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+843,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1518,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+844,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1519,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+845,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1520,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+846,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1521,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+847,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1522,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+848,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1523,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+849,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1524,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_sub__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1525,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1529,0,"wr_en_sched",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1530,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1637,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+850,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1534,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+851,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1530,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1535,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1638,0,"out_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1536,0,"out_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+852,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+856,0,"out_mix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("m_add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1530,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1581,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1638,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1530,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+856,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+860+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+876+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+892,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+893,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1530,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+852,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1540,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1541,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1542,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1543,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1540,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+894,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1544,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+895,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1530,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1580,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1536,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+896+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1545+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+912+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+928,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1561,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1562,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+930,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1563,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+931,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1564,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+932,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1565,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+933,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1566,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+934,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1567,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+935,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1568,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+936,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1569,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+937,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1570,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+938,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1571,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+939,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1572,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+940,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1573,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+941,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1574,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+942,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1575,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rom_instances[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1577,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+943,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1576,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1643,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_init_top(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_init_top\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_scheduler___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vaes_scheduler___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes_scheduler___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes_scheduler___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaes_scheduler___024root__trace_register(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_register\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vaes_scheduler___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vaes_scheduler___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vaes_scheduler___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vaes_scheduler___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_const_0_sub_0(Vaes_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaes_scheduler___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_const_0\n"); );
    // Init
    Vaes_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_scheduler___024root*>(voidSelf);
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaes_scheduler___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_const_0_sub_0(Vaes_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_const_0_sub_0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1642,(0xaU),32);
    bufp->fullIData(oldp+1643,(0x10U),32);
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_full_0_sub_0(Vaes_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaes_scheduler___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_full_0\n"); );
    // Init
    Vaes_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_scheduler___024root*>(voidSelf);
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaes_scheduler___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_full_0_sub_0(Vaes_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_full_0_sub_0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.aes_scheduler__DOT__we_r));
    bufp->fullBit(oldp+2,(vlSelfRef.aes_scheduler__DOT__we_w));
    bufp->fullCData(oldp+3,(vlSelfRef.aes_scheduler__DOT__next_state),2);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+5,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_2[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U]) 
                      | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                      << 0x10U))) | 
                     ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U]) 
                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_2[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U]) 
                      | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                      << 8U))) | ((0xff00U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                        >> 8U))));
    __Vtemp_2[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                                                | (0xff0000U 
                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                      >> 8U))) 
                                               | ((0xff00U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U]) 
                                                  | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                     >> 0x18U))))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((0xff000000U 
                                                             & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U]) 
                                                            | (0xff0000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                           | ((0xff00U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U]) 
                                                              | (0xffU 
                                                                 & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                    >> 0x10U))))))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))) 
                             >> 0x20U));
    bufp->fullWData(oldp+6,(__Vtemp_2),128);
    bufp->fullWData(oldp+10,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+16,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+17,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+19,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+22,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+23,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+24,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+25,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+27,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+29,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+33,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+34,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+36,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+37,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+38,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+39,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+40,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+41,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+42,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+43,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+47,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+48,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+50,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+51,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+52,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+53,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+54,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+58,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+59,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+61,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+62,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+65,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+66,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+67,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+68,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+69,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+70,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+71,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+72,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+73,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+74,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+75,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+76,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+77,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+78,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+79,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+80,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+81,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+82,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [0U]),9);
    bufp->fullSData(oldp+83,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [0xaU]),9);
    bufp->fullSData(oldp+84,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [0xbU]),9);
    bufp->fullSData(oldp+85,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [0xcU]),9);
    bufp->fullSData(oldp+86,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [0xdU]),9);
    bufp->fullSData(oldp+87,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [0xeU]),9);
    bufp->fullSData(oldp+88,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [0xfU]),9);
    bufp->fullSData(oldp+89,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [1U]),9);
    bufp->fullSData(oldp+90,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [2U]),9);
    bufp->fullSData(oldp+91,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [3U]),9);
    bufp->fullSData(oldp+92,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [4U]),9);
    bufp->fullSData(oldp+93,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [5U]),9);
    bufp->fullSData(oldp+94,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [6U]),9);
    bufp->fullSData(oldp+95,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [7U]),9);
    bufp->fullSData(oldp+96,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [8U]),9);
    bufp->fullSData(oldp+97,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                             [9U]),9);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+99,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_4[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U]) 
                      | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                      << 0x10U))) | 
                     ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U]) 
                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_4[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U]) 
                      | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                      << 8U))) | ((0xff00U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                        >> 8U))));
    __Vtemp_4[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                                                | (0xff0000U 
                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                      >> 8U))) 
                                               | ((0xff00U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U]) 
                                                  | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                     >> 0x18U))))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((0xff000000U 
                                                             & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U]) 
                                                            | (0xff0000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                           | ((0xff00U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U]) 
                                                              | (0xffU 
                                                                 & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                    >> 0x10U))))))));
    __Vtemp_4[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))) 
                             >> 0x20U));
    bufp->fullWData(oldp+100,(__Vtemp_4),128);
    bufp->fullWData(oldp+104,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+108,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+110,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+111,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+112,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+113,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+114,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+115,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+118,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+120,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+121,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+122,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+123,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+124,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+125,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+126,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+127,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+128,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+129,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+130,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+131,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+132,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+133,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+134,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+135,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+136,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+137,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+138,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+139,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+144,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+145,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+146,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+147,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+148,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+149,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+150,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+151,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+152,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+153,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+154,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+155,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+156,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+157,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+158,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+159,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+160,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+161,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+162,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+163,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+164,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+165,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+166,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+167,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+168,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+169,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+170,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+171,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+172,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+173,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+174,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+175,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+176,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0U]),9);
    bufp->fullSData(oldp+177,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xaU]),9);
    bufp->fullSData(oldp+178,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xbU]),9);
    bufp->fullSData(oldp+179,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xcU]),9);
    bufp->fullSData(oldp+180,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xdU]),9);
    bufp->fullSData(oldp+181,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xeU]),9);
    bufp->fullSData(oldp+182,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xfU]),9);
    bufp->fullSData(oldp+183,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [1U]),9);
    bufp->fullSData(oldp+184,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [2U]),9);
    bufp->fullSData(oldp+185,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [3U]),9);
    bufp->fullSData(oldp+186,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [4U]),9);
    bufp->fullSData(oldp+187,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [5U]),9);
    bufp->fullSData(oldp+188,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [6U]),9);
    bufp->fullSData(oldp+189,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [7U]),9);
    bufp->fullSData(oldp+190,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [8U]),9);
    bufp->fullSData(oldp+191,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [9U]),9);
    bufp->fullCData(oldp+192,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+193,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_6[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U]) 
                      | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                      << 0x10U))) | 
                     ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U]) 
                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_6[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U]) 
                      | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                      << 8U))) | ((0xff00U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                        >> 8U))));
    __Vtemp_6[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                                                | (0xff0000U 
                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                      >> 8U))) 
                                               | ((0xff00U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U]) 
                                                  | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                     >> 0x18U))))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((0xff000000U 
                                                             & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U]) 
                                                            | (0xff0000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                           | ((0xff00U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U]) 
                                                              | (0xffU 
                                                                 & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                    >> 0x10U))))))));
    __Vtemp_6[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))) 
                             >> 0x20U));
    bufp->fullWData(oldp+194,(__Vtemp_6),128);
    bufp->fullWData(oldp+198,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+202,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+203,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+204,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+205,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+206,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+207,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+208,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+209,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+210,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+211,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+212,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+213,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+214,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+215,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+216,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+217,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+218,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+219,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+220,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+221,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+222,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+223,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+224,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+225,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+226,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+227,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+228,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+229,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+230,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+231,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+232,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+233,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+238,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+239,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+240,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+241,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+242,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+243,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+244,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+245,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+246,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+247,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+248,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+249,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+250,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+251,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+252,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+253,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+254,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+255,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+256,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+257,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+258,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+259,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+260,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+261,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+262,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+263,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+264,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+265,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+266,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+267,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+268,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+269,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+270,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0U]),9);
    bufp->fullSData(oldp+271,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xaU]),9);
    bufp->fullSData(oldp+272,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xbU]),9);
    bufp->fullSData(oldp+273,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xcU]),9);
    bufp->fullSData(oldp+274,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xdU]),9);
    bufp->fullSData(oldp+275,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xeU]),9);
    bufp->fullSData(oldp+276,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xfU]),9);
    bufp->fullSData(oldp+277,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [1U]),9);
    bufp->fullSData(oldp+278,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [2U]),9);
    bufp->fullSData(oldp+279,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [3U]),9);
    bufp->fullSData(oldp+280,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [4U]),9);
    bufp->fullSData(oldp+281,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [5U]),9);
    bufp->fullSData(oldp+282,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [6U]),9);
    bufp->fullSData(oldp+283,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [7U]),9);
    bufp->fullSData(oldp+284,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [8U]),9);
    bufp->fullSData(oldp+285,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [9U]),9);
    bufp->fullCData(oldp+286,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+287,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_8[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U]) 
                      | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                      << 0x10U))) | 
                     ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U]) 
                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_8[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U]) 
                      | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                      << 8U))) | ((0xff00U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                        >> 8U))));
    __Vtemp_8[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                                                | (0xff0000U 
                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                      >> 8U))) 
                                               | ((0xff00U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U]) 
                                                  | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                     >> 0x18U))))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((0xff000000U 
                                                             & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U]) 
                                                            | (0xff0000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                           | ((0xff00U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U]) 
                                                              | (0xffU 
                                                                 & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                    >> 0x10U))))))));
    __Vtemp_8[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))) 
                             >> 0x20U));
    bufp->fullWData(oldp+288,(__Vtemp_8),128);
    bufp->fullWData(oldp+292,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+296,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+297,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+298,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+299,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+300,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+301,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+302,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+303,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+304,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+305,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+306,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+307,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+308,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+309,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+310,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+311,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+312,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+313,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+314,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+316,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+317,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+318,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+319,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+320,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+321,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+322,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+323,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+324,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+325,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+326,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+327,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+332,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+333,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+334,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+335,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+336,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+337,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+338,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+339,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+340,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+344,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+345,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+346,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+347,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+348,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+349,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+350,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+351,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+352,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+353,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+354,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+355,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+356,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+357,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+358,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+359,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+360,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+361,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+362,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+363,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+364,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0U]),9);
    bufp->fullSData(oldp+365,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xaU]),9);
    bufp->fullSData(oldp+366,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xbU]),9);
    bufp->fullSData(oldp+367,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xcU]),9);
    bufp->fullSData(oldp+368,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xdU]),9);
    bufp->fullSData(oldp+369,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xeU]),9);
    bufp->fullSData(oldp+370,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xfU]),9);
    bufp->fullSData(oldp+371,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [1U]),9);
    bufp->fullSData(oldp+372,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [2U]),9);
    bufp->fullSData(oldp+373,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [3U]),9);
    bufp->fullSData(oldp+374,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [4U]),9);
    bufp->fullSData(oldp+375,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [5U]),9);
    bufp->fullSData(oldp+376,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [6U]),9);
    bufp->fullSData(oldp+377,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [7U]),9);
    bufp->fullSData(oldp+378,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [8U]),9);
    bufp->fullSData(oldp+379,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [9U]),9);
    bufp->fullCData(oldp+380,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+381,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_10[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 0x10U))) 
                      | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U]) 
                         | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_10[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 8U))) | (
                                                   (0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                                                   | (0xffU 
                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 8U))));
    __Vtemp_10[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))));
    __Vtemp_10[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xff0000U 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                        >> 8U))) 
                                                 | ((0xff00U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U]) 
                                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                       >> 0x18U))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0xff000000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U]) 
                                                              | (0xff0000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                             | ((0xff00U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                | (0xffU 
                                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                      >> 0x10U))))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+382,(__Vtemp_10),128);
    bufp->fullWData(oldp+386,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+390,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+391,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+392,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+393,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+394,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+395,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+396,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+397,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+398,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+399,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+400,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+401,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+402,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+403,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+404,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+405,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+406,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+407,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+408,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+409,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+410,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+411,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+412,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+413,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+414,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+415,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+416,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+417,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+418,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+419,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+420,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+421,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+422,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+423,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+424,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+425,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+426,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+427,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+428,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+429,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+430,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+431,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+432,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+433,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+434,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+435,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+436,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+437,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+438,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+439,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+440,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+441,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+442,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+443,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+444,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+445,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+446,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+447,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+448,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+449,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+450,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+451,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+452,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+453,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+454,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+455,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+456,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+457,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+458,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0U]),9);
    bufp->fullSData(oldp+459,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xaU]),9);
    bufp->fullSData(oldp+460,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xbU]),9);
    bufp->fullSData(oldp+461,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xcU]),9);
    bufp->fullSData(oldp+462,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xdU]),9);
    bufp->fullSData(oldp+463,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xeU]),9);
    bufp->fullSData(oldp+464,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xfU]),9);
    bufp->fullSData(oldp+465,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [1U]),9);
    bufp->fullSData(oldp+466,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [2U]),9);
    bufp->fullSData(oldp+467,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [3U]),9);
    bufp->fullSData(oldp+468,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [4U]),9);
    bufp->fullSData(oldp+469,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [5U]),9);
    bufp->fullSData(oldp+470,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [6U]),9);
    bufp->fullSData(oldp+471,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [7U]),9);
    bufp->fullSData(oldp+472,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [8U]),9);
    bufp->fullSData(oldp+473,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [9U]),9);
    bufp->fullCData(oldp+474,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+475,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_12[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 0x10U))) 
                      | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U]) 
                         | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_12[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 8U))) | (
                                                   (0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                                                   | (0xffU 
                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 8U))));
    __Vtemp_12[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))));
    __Vtemp_12[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xff0000U 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                        >> 8U))) 
                                                 | ((0xff00U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U]) 
                                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                       >> 0x18U))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0xff000000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U]) 
                                                              | (0xff0000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                             | ((0xff00U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                | (0xffU 
                                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                      >> 0x10U))))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+476,(__Vtemp_12),128);
    bufp->fullWData(oldp+480,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+484,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+485,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+486,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+487,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+488,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+489,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+490,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+491,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+492,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+493,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+494,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+495,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+496,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+497,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+498,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+499,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+500,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+501,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+502,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+503,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+504,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+505,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+506,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+507,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+508,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+509,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+510,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+511,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+512,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+513,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+514,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+515,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+517,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+518,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+519,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+520,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+521,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+522,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+523,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+524,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+525,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+526,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+527,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+528,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+529,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+530,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+531,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+532,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+533,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+534,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+535,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+536,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+537,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+538,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+539,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+540,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+541,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+542,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+543,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+544,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+545,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+546,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+547,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+548,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+549,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+550,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+551,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+552,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0U]),9);
    bufp->fullSData(oldp+553,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xaU]),9);
    bufp->fullSData(oldp+554,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xbU]),9);
    bufp->fullSData(oldp+555,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xcU]),9);
    bufp->fullSData(oldp+556,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xdU]),9);
    bufp->fullSData(oldp+557,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xeU]),9);
    bufp->fullSData(oldp+558,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xfU]),9);
    bufp->fullSData(oldp+559,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [1U]),9);
    bufp->fullSData(oldp+560,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [2U]),9);
    bufp->fullSData(oldp+561,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [3U]),9);
    bufp->fullSData(oldp+562,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [4U]),9);
    bufp->fullSData(oldp+563,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [5U]),9);
    bufp->fullSData(oldp+564,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [6U]),9);
    bufp->fullSData(oldp+565,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [7U]),9);
    bufp->fullSData(oldp+566,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [8U]),9);
    bufp->fullSData(oldp+567,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [9U]),9);
    bufp->fullCData(oldp+568,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+569,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_14[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 0x10U))) 
                      | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U]) 
                         | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_14[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 8U))) | (
                                                   (0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                                                   | (0xffU 
                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 8U))));
    __Vtemp_14[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))));
    __Vtemp_14[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xff0000U 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                        >> 8U))) 
                                                 | ((0xff00U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U]) 
                                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                       >> 0x18U))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0xff000000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U]) 
                                                              | (0xff0000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                             | ((0xff00U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                | (0xffU 
                                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                      >> 0x10U))))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+570,(__Vtemp_14),128);
    bufp->fullWData(oldp+574,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+578,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+579,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+580,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+581,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+582,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+583,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+584,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+585,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+586,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+587,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+588,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+589,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+590,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+591,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+592,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+593,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+594,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+595,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+596,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+597,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+598,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+599,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+600,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+601,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+602,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+603,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+604,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+605,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+606,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+607,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+608,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+609,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+610,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+611,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+612,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+613,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+614,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+615,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+616,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+617,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+618,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+619,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+620,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+621,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+622,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+623,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+624,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+625,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+626,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+627,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+628,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+629,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+630,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+631,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+632,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+633,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+634,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+635,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+636,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+637,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+638,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+639,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+640,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+641,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+642,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+643,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+644,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+645,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+646,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0U]),9);
    bufp->fullSData(oldp+647,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xaU]),9);
    bufp->fullSData(oldp+648,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xbU]),9);
    bufp->fullSData(oldp+649,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xcU]),9);
    bufp->fullSData(oldp+650,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xdU]),9);
    bufp->fullSData(oldp+651,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xeU]),9);
    bufp->fullSData(oldp+652,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xfU]),9);
    bufp->fullSData(oldp+653,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [1U]),9);
    bufp->fullSData(oldp+654,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [2U]),9);
    bufp->fullSData(oldp+655,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [3U]),9);
    bufp->fullSData(oldp+656,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [4U]),9);
    bufp->fullSData(oldp+657,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [5U]),9);
    bufp->fullSData(oldp+658,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [6U]),9);
    bufp->fullSData(oldp+659,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [7U]),9);
    bufp->fullSData(oldp+660,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [8U]),9);
    bufp->fullSData(oldp+661,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [9U]),9);
    bufp->fullCData(oldp+662,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+663,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_16[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 0x10U))) 
                      | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U]) 
                         | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_16[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 8U))) | (
                                                   (0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                                                   | (0xffU 
                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 8U))));
    __Vtemp_16[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))));
    __Vtemp_16[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xff0000U 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                        >> 8U))) 
                                                 | ((0xff00U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U]) 
                                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                       >> 0x18U))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0xff000000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U]) 
                                                              | (0xff0000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                             | ((0xff00U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                | (0xffU 
                                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                      >> 0x10U))))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+664,(__Vtemp_16),128);
    bufp->fullWData(oldp+668,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+672,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+673,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+674,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+675,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+676,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+677,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+678,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+679,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+680,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+681,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+682,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+683,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+684,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+685,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+686,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+687,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+688,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+689,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+690,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+691,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+692,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+693,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+694,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+695,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+696,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+697,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+698,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+699,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+700,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+701,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+702,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+703,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+704,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+705,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+706,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+707,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+708,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+709,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+710,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+711,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+712,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+713,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+714,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+715,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+716,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+717,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+718,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+719,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+720,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+721,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+722,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+723,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+724,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+725,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+726,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+727,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+728,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+729,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+730,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+731,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+732,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+733,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+734,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+735,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+736,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+737,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+738,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+739,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+740,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0U]),9);
    bufp->fullSData(oldp+741,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xaU]),9);
    bufp->fullSData(oldp+742,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xbU]),9);
    bufp->fullSData(oldp+743,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xcU]),9);
    bufp->fullSData(oldp+744,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xdU]),9);
    bufp->fullSData(oldp+745,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xeU]),9);
    bufp->fullSData(oldp+746,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xfU]),9);
    bufp->fullSData(oldp+747,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [1U]),9);
    bufp->fullSData(oldp+748,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [2U]),9);
    bufp->fullSData(oldp+749,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [3U]),9);
    bufp->fullSData(oldp+750,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [4U]),9);
    bufp->fullSData(oldp+751,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [5U]),9);
    bufp->fullSData(oldp+752,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [6U]),9);
    bufp->fullSData(oldp+753,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [7U]),9);
    bufp->fullSData(oldp+754,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [8U]),9);
    bufp->fullSData(oldp+755,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [9U]),9);
    bufp->fullCData(oldp+756,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+757,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_18[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 0x10U))) 
                      | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U]) 
                         | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_18[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 8U))) | (
                                                   (0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                                                   | (0xffU 
                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 8U))));
    __Vtemp_18[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))));
    __Vtemp_18[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xff0000U 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                        >> 8U))) 
                                                 | ((0xff00U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U]) 
                                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                       >> 0x18U))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0xff000000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U]) 
                                                              | (0xff0000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                             | ((0xff00U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                | (0xffU 
                                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                      >> 0x10U))))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+758,(__Vtemp_18),128);
    bufp->fullWData(oldp+762,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+766,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+767,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+768,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+769,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+770,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+771,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+772,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+773,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+774,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+775,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+776,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+777,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+778,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+779,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+780,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+781,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+782,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+783,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+784,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+785,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+786,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+787,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+788,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+789,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+790,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+791,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+792,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+793,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+794,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+795,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+796,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+797,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+798,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+799,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+800,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+801,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+802,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+803,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+804,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+805,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+806,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+807,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+808,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+809,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+810,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+811,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+812,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+813,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+814,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+815,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+816,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+817,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+818,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+819,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+820,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+821,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+822,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+823,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+824,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+825,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+826,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+827,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+828,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+829,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+830,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+831,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+832,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+833,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+834,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0U]),9);
    bufp->fullSData(oldp+835,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xaU]),9);
    bufp->fullSData(oldp+836,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xbU]),9);
    bufp->fullSData(oldp+837,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xcU]),9);
    bufp->fullSData(oldp+838,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xdU]),9);
    bufp->fullSData(oldp+839,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xeU]),9);
    bufp->fullSData(oldp+840,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xfU]),9);
    bufp->fullSData(oldp+841,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [1U]),9);
    bufp->fullSData(oldp+842,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [2U]),9);
    bufp->fullSData(oldp+843,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [3U]),9);
    bufp->fullSData(oldp+844,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [4U]),9);
    bufp->fullSData(oldp+845,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [5U]),9);
    bufp->fullSData(oldp+846,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [6U]),9);
    bufp->fullSData(oldp+847,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [7U]),9);
    bufp->fullSData(oldp+848,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [8U]),9);
    bufp->fullSData(oldp+849,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [9U]),9);
    bufp->fullCData(oldp+850,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__select),3);
    bufp->fullCData(oldp+851,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__next_state),3);
    __Vtemp_20[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 0x10U))) 
                      | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U]) 
                         | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
    __Vtemp_20[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U]) 
                       | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                       << 8U))) | (
                                                   (0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                                                   | (0xffU 
                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 8U))));
    __Vtemp_20[2U] = (IData)((((QData)((IData)((((0xff000000U 
                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                                                 | (0xff0000U 
                                                    & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                       >> 8U))) 
                                                | ((0xff00U 
                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U]) 
                                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                      >> 0x18U))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0xff000000U 
                                                              & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U]) 
                                                             | (0xff0000U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                            | ((0xff00U 
                                                                & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U]) 
                                                               | (0xffU 
                                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                     >> 0x10U))))))));
    __Vtemp_20[3U] = (IData)(((((QData)((IData)((((0xff000000U 
                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                                                  | (0xff0000U 
                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                        >> 8U))) 
                                                 | ((0xff00U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U]) 
                                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                       >> 0x18U))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0xff000000U 
                                                               & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U]) 
                                                              | (0xff0000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                             | ((0xff00U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                | (0xffU 
                                                                   & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                      >> 0x10U))))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+852,(__Vtemp_20),128);
    bufp->fullWData(oldp+856,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__out_mix),128);
    bufp->fullCData(oldp+860,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+861,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+862,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+863,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+864,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+865,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+866,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+867,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+868,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+869,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+870,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+871,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+872,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+873,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+874,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+875,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+876,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+877,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+878,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+879,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+880,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+881,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+882,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+883,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+884,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+885,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+886,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+887,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+888,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+889,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+890,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+891,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+892,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+893,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+894,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+895,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
    bufp->fullCData(oldp+896,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+897,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+898,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+899,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+900,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+901,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+902,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+903,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+904,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+905,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+906,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+907,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+908,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+909,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+910,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+911,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+912,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+913,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+914,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+915,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+916,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+917,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+918,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+919,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+920,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+921,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+922,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+923,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+924,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+925,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+926,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+927,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+928,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0U]),9);
    bufp->fullSData(oldp+929,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xaU]),9);
    bufp->fullSData(oldp+930,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xbU]),9);
    bufp->fullSData(oldp+931,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xcU]),9);
    bufp->fullSData(oldp+932,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xdU]),9);
    bufp->fullSData(oldp+933,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xeU]),9);
    bufp->fullSData(oldp+934,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [0xfU]),9);
    bufp->fullSData(oldp+935,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [1U]),9);
    bufp->fullSData(oldp+936,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [2U]),9);
    bufp->fullSData(oldp+937,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [3U]),9);
    bufp->fullSData(oldp+938,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [4U]),9);
    bufp->fullSData(oldp+939,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [5U]),9);
    bufp->fullSData(oldp+940,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [6U]),9);
    bufp->fullSData(oldp+941,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [7U]),9);
    bufp->fullSData(oldp+942,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [8U]),9);
    bufp->fullSData(oldp+943,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                              [9U]),9);
    bufp->fullWData(oldp+944,(vlSelfRef.aes_scheduler__DOT__in_text[0]),128);
    bufp->fullWData(oldp+948,(vlSelfRef.aes_scheduler__DOT__in_text[1]),128);
    bufp->fullWData(oldp+952,(vlSelfRef.aes_scheduler__DOT__in_text[2]),128);
    bufp->fullWData(oldp+956,(vlSelfRef.aes_scheduler__DOT__in_text[3]),128);
    bufp->fullWData(oldp+960,(vlSelfRef.aes_scheduler__DOT__in_text[4]),128);
    bufp->fullWData(oldp+964,(vlSelfRef.aes_scheduler__DOT__in_text[5]),128);
    bufp->fullWData(oldp+968,(vlSelfRef.aes_scheduler__DOT__in_text[6]),128);
    bufp->fullWData(oldp+972,(vlSelfRef.aes_scheduler__DOT__in_text[7]),128);
    bufp->fullWData(oldp+976,(vlSelfRef.aes_scheduler__DOT__in_text[8]),128);
    bufp->fullWData(oldp+980,(vlSelfRef.aes_scheduler__DOT__in_text[9]),128);
    bufp->fullWData(oldp+984,(vlSelfRef.aes_scheduler__DOT__out_text[0]),128);
    bufp->fullWData(oldp+988,(vlSelfRef.aes_scheduler__DOT__out_text[1]),128);
    bufp->fullWData(oldp+992,(vlSelfRef.aes_scheduler__DOT__out_text[2]),128);
    bufp->fullWData(oldp+996,(vlSelfRef.aes_scheduler__DOT__out_text[3]),128);
    bufp->fullWData(oldp+1000,(vlSelfRef.aes_scheduler__DOT__out_text[4]),128);
    bufp->fullWData(oldp+1004,(vlSelfRef.aes_scheduler__DOT__out_text[5]),128);
    bufp->fullWData(oldp+1008,(vlSelfRef.aes_scheduler__DOT__out_text[6]),128);
    bufp->fullWData(oldp+1012,(vlSelfRef.aes_scheduler__DOT__out_text[7]),128);
    bufp->fullWData(oldp+1016,(vlSelfRef.aes_scheduler__DOT__out_text[8]),128);
    bufp->fullWData(oldp+1020,(vlSelfRef.aes_scheduler__DOT__out_text[9]),128);
    bufp->fullCData(oldp+1024,(vlSelfRef.aes_scheduler__DOT__r_cnt),8);
    bufp->fullBit(oldp+1025,(vlSelfRef.aes_scheduler__DOT__we_core));
    bufp->fullBit(oldp+1026,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[0]));
    bufp->fullBit(oldp+1027,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[1]));
    bufp->fullBit(oldp+1028,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[2]));
    bufp->fullBit(oldp+1029,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[3]));
    bufp->fullBit(oldp+1030,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[4]));
    bufp->fullBit(oldp+1031,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[5]));
    bufp->fullBit(oldp+1032,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[6]));
    bufp->fullBit(oldp+1033,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[7]));
    bufp->fullBit(oldp+1034,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[8]));
    bufp->fullBit(oldp+1035,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[9]));
    bufp->fullIData(oldp+1036,(vlSelfRef.aes_scheduler__DOT__r_reg[0]),32);
    bufp->fullIData(oldp+1037,(vlSelfRef.aes_scheduler__DOT__r_reg[1]),32);
    bufp->fullIData(oldp+1038,(vlSelfRef.aes_scheduler__DOT__r_reg[2]),32);
    bufp->fullIData(oldp+1039,(vlSelfRef.aes_scheduler__DOT__r_reg[3]),32);
    bufp->fullCData(oldp+1040,(vlSelfRef.aes_scheduler__DOT__c_cnt),6);
    bufp->fullCData(oldp+1041,(vlSelfRef.aes_scheduler__DOT__round),4);
    bufp->fullBit(oldp+1042,((2U == (IData)(vlSelfRef.aes_scheduler__DOT__state))));
    bufp->fullCData(oldp+1043,(vlSelfRef.aes_scheduler__DOT__w_cnt),8);
    bufp->fullIData(oldp+1044,(vlSelfRef.aes_scheduler__DOT__core_out[0]),32);
    bufp->fullIData(oldp+1045,(vlSelfRef.aes_scheduler__DOT__core_out[1]),32);
    bufp->fullIData(oldp+1046,(vlSelfRef.aes_scheduler__DOT__core_out[2]),32);
    bufp->fullIData(oldp+1047,(vlSelfRef.aes_scheduler__DOT__core_out[3]),32);
    bufp->fullCData(oldp+1048,(vlSelfRef.aes_scheduler__DOT__state),2);
    bufp->fullCData(oldp+1049,((3U & (IData)(vlSelfRef.aes_scheduler__DOT__r_cnt))),2);
    bufp->fullCData(oldp+1050,((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                        >> 2U))),4);
    bufp->fullCData(oldp+1051,((3U & (IData)(vlSelfRef.aes_scheduler__DOT__w_cnt))),2);
    bufp->fullCData(oldp+1052,((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                                        >> 2U))),4);
    bufp->fullIData(oldp+1053,(vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1054,(vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1055,(vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+1056,(vlSelfRef.aes_scheduler__DOT__core_input_seq__DOT__unnamedblk4__DOT__next_round),4);
    bufp->fullWData(oldp+1057,(vlSelfRef.aes_scheduler__DOT__in_text
                               [0U]),128);
    bufp->fullBit(oldp+1061,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [0U]));
    bufp->fullWData(oldp+1062,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1066,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1067,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1068,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1072,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1073,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1074,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1075,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1076,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1077,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1078,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1079,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1080,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1081,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1082,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1083,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1084,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1085,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1086,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1087,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1088,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1089,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1090,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1091,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1092,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1093,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1094,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1095,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1096,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1097,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1098,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1099,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1100,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1101,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1102,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1103,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1104,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1105,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1106,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1107,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1108,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+1109,(vlSelfRef.aes_scheduler__DOT__in_text
                               [1U]),128);
    bufp->fullBit(oldp+1113,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [1U]));
    bufp->fullWData(oldp+1114,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1118,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1119,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1120,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1124,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1125,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1126,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1127,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1128,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1129,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1130,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1131,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1132,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1133,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1134,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1135,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1136,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1137,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1138,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1139,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1140,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1141,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1142,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1143,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1144,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1145,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1146,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1147,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1148,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1149,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1150,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1151,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1152,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1153,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1154,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1155,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1156,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1157,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1158,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1159,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1160,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+1161,(vlSelfRef.aes_scheduler__DOT__in_text
                               [2U]),128);
    bufp->fullBit(oldp+1165,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [2U]));
    bufp->fullWData(oldp+1166,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1170,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1171,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1172,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1176,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1177,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1178,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1179,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1180,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1181,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1182,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1183,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1184,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1185,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1186,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1187,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1188,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1189,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1190,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1191,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1192,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1193,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1194,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1195,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1196,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1197,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1198,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1199,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1200,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1201,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1202,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1203,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1204,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1205,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1206,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1207,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1208,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1209,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1210,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1211,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1212,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+1213,(vlSelfRef.aes_scheduler__DOT__in_text
                               [3U]),128);
    bufp->fullBit(oldp+1217,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [3U]));
    bufp->fullWData(oldp+1218,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1222,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1223,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1224,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1228,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1229,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1230,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1231,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1232,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1233,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1234,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1235,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1236,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1237,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1238,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1239,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1240,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1241,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1242,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1243,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1244,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1245,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1246,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1247,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1248,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1249,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1250,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1251,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1252,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1253,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1254,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1255,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1256,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1257,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1258,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1259,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1260,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1261,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1262,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1263,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1264,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+1265,(vlSelfRef.aes_scheduler__DOT__in_text
                               [4U]),128);
    bufp->fullBit(oldp+1269,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [4U]));
    bufp->fullWData(oldp+1270,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1274,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1275,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1276,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1280,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1281,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1282,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1283,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1284,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1285,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1286,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1287,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1288,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1289,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1290,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1291,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1292,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1293,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1294,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1295,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1296,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1297,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1298,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1299,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1300,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1301,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1302,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1303,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1304,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1305,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1306,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1307,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1308,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1309,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1310,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1311,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1312,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1313,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1314,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1315,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1316,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+1317,(vlSelfRef.aes_scheduler__DOT__in_text
                               [5U]),128);
    bufp->fullBit(oldp+1321,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [5U]));
    bufp->fullWData(oldp+1322,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1326,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1327,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1328,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1332,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1333,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1334,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1335,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1336,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1337,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1338,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1339,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1340,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1341,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1342,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1343,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1344,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1345,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1346,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1347,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1348,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1349,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1350,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1351,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1352,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1353,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1354,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1355,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1356,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1357,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1358,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1359,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1360,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1361,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1362,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1363,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1364,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1365,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1366,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1367,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1368,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+1369,(vlSelfRef.aes_scheduler__DOT__in_text
                               [6U]),128);
    bufp->fullBit(oldp+1373,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [6U]));
    bufp->fullWData(oldp+1374,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1378,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1379,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1380,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1384,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1385,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1386,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1387,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1388,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1389,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1390,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1391,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1392,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1393,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1394,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1395,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1396,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1397,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1398,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1399,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1400,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1401,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1402,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1403,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1404,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1405,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1406,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1407,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1408,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1409,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1410,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1411,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1412,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1413,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1414,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1415,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1416,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1417,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1418,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1419,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1420,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+1421,(vlSelfRef.aes_scheduler__DOT__in_text
                               [7U]),128);
    bufp->fullBit(oldp+1425,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [7U]));
    bufp->fullWData(oldp+1426,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1430,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1431,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1432,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1436,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1437,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1438,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1439,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1440,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1441,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1442,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1443,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1444,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1445,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1446,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1447,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1448,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1449,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1450,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1451,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1452,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1453,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1454,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1455,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1456,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1457,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1458,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1459,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1460,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1461,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1462,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1463,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1464,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1465,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1466,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1467,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1468,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1469,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1470,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1471,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1472,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+1473,(vlSelfRef.aes_scheduler__DOT__in_text
                               [8U]),128);
    bufp->fullBit(oldp+1477,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [8U]));
    bufp->fullWData(oldp+1478,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1482,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1483,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1484,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1488,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1489,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1490,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1491,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1492,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1493,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1494,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1495,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1496,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1497,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1498,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1499,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1500,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1501,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1502,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1503,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1504,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1505,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1506,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1507,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1508,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1509,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1510,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1511,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1512,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1513,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1514,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1515,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1516,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1517,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1518,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1519,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1520,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1521,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1522,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1523,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1524,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+1525,(vlSelfRef.aes_scheduler__DOT__in_text
                               [9U]),128);
    bufp->fullBit(oldp+1529,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                             [9U]));
    bufp->fullWData(oldp+1530,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r),128);
    bufp->fullCData(oldp+1534,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state),3);
    bufp->fullCData(oldp+1535,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__counter),6);
    bufp->fullWData(oldp+1536,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__out_sub),128);
    bufp->fullIData(oldp+1540,((((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                                                 >> 8U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 0x10U)) 
                                   | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                                      >> 0x18U)))),32);
    bufp->fullIData(oldp+1541,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 8U)) 
                                 | (0xff0000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U])) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                                               >> 8U)) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 0x10U))))),32);
    bufp->fullIData(oldp+1542,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                                               >> 8U))))),32);
    bufp->fullIData(oldp+1543,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U] 
                                  << 0x18U) | (0xff0000U 
                                               & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 0x10U))) 
                                | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                                               << 8U)) 
                                   | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U])))),32);
    bufp->fullIData(oldp+1544,((((0xff000000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                                                 << 0x10U)) 
                                 | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                                                 << 8U))) 
                                | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                                   | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                                               >> 8U))))),32);
    bufp->fullCData(oldp+1545,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+1546,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+1547,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+1548,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+1549,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+1550,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+1551,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+1552,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+1553,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+1554,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+1555,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+1556,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+1557,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+1558,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+1559,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+1560,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+1561,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1562,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1563,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1564,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1565,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1566,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1567,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1568,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1569,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1570,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1571,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1572,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1573,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1574,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1575,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+1576,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullBit(oldp+1577,(vlSelfRef.clk));
    bufp->fullBit(oldp+1578,(vlSelfRef.reset));
    bufp->fullBit(oldp+1579,(vlSelfRef.start));
    bufp->fullBit(oldp+1580,(vlSelfRef.mode));
    bufp->fullWData(oldp+1581,(vlSelfRef.round_key),128);
    bufp->fullCData(oldp+1585,(vlSelfRef.round_key_addr),4);
    bufp->fullBit(oldp+1586,(vlSelfRef.sink_valid));
    bufp->fullIData(oldp+1587,(vlSelfRef.sink_data),32);
    bufp->fullBit(oldp+1588,(vlSelfRef.sink_ready));
    bufp->fullBit(oldp+1589,(vlSelfRef.source_valid));
    bufp->fullIData(oldp+1590,(vlSelfRef.source_data),32);
    bufp->fullBit(oldp+1591,(vlSelfRef.source_ready));
    bufp->fullBit(oldp+1592,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [0U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [0U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [0U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [0U]))))));
    __Vtemp_21[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_21[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_21[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_21[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1593,(__Vtemp_21),128);
    bufp->fullBit(oldp+1597,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [1U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [1U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [1U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [1U]))))));
    __Vtemp_22[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_22[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_22[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_22[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1598,(__Vtemp_22),128);
    bufp->fullBit(oldp+1602,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [2U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [2U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [2U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [2U]))))));
    __Vtemp_23[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_23[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_23[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_23[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1603,(__Vtemp_23),128);
    bufp->fullBit(oldp+1607,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [3U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [3U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [3U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [3U]))))));
    __Vtemp_24[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_24[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_24[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_24[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1608,(__Vtemp_24),128);
    bufp->fullBit(oldp+1612,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [4U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [4U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [4U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [4U]))))));
    __Vtemp_25[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_25[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_25[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_25[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1613,(__Vtemp_25),128);
    bufp->fullBit(oldp+1617,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [5U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [5U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [5U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [5U]))))));
    __Vtemp_26[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_26[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_26[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_26[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1618,(__Vtemp_26),128);
    bufp->fullBit(oldp+1622,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [6U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [6U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [6U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [6U]))))));
    __Vtemp_27[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_27[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_27[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_27[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1623,(__Vtemp_27),128);
    bufp->fullBit(oldp+1627,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [7U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [7U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [7U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [7U]))))));
    __Vtemp_28[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_28[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_28[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_28[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1628,(__Vtemp_28),128);
    bufp->fullBit(oldp+1632,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [8U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [8U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [8U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [8U]))))));
    __Vtemp_29[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_29[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_29[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_29[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1633,(__Vtemp_29),128);
    bufp->fullBit(oldp+1637,(((IData)(vlSelfRef.mode)
                               ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [9U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [9U])))
                               : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state))
                                   ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U))) 
                                      || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                      [9U]) : ((1U 
                                                & ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state)) 
                                                   || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                   [9U]))))));
    __Vtemp_30[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_30[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_30[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_30[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->fullWData(oldp+1638,(__Vtemp_30),128);
}

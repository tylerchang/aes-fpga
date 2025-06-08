// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsubstitute_bytes__Syms.h"


void Vsubstitute_bytes___024root__trace_chg_0_sub_0(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsubstitute_bytes___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_chg_0\n"); );
    // Init
    Vsubstitute_bytes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsubstitute_bytes___024root*>(voidSelf);
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsubstitute_bytes___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsubstitute_bytes___024root__trace_chg_0_sub_0(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_chg_0_sub_0\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+16,(vlSelfRef.substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+17,(vlSelfRef.substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+18,(vlSelfRef.substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+19,(vlSelfRef.substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+20,(vlSelfRef.substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+21,(vlSelfRef.substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+22,(vlSelfRef.substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+23,(vlSelfRef.substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+24,(vlSelfRef.substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+25,(vlSelfRef.substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+26,(vlSelfRef.substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+27,(vlSelfRef.substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+28,(vlSelfRef.substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+29,(vlSelfRef.substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+30,(vlSelfRef.substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+31,(vlSelfRef.substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+32,(vlSelfRef.substitute_bytes__DOT__addr
                                [0U]),9);
        bufp->chgSData(oldp+33,(vlSelfRef.substitute_bytes__DOT__addr
                                [0xaU]),9);
        bufp->chgSData(oldp+34,(vlSelfRef.substitute_bytes__DOT__addr
                                [0xbU]),9);
        bufp->chgSData(oldp+35,(vlSelfRef.substitute_bytes__DOT__addr
                                [0xcU]),9);
        bufp->chgSData(oldp+36,(vlSelfRef.substitute_bytes__DOT__addr
                                [0xdU]),9);
        bufp->chgSData(oldp+37,(vlSelfRef.substitute_bytes__DOT__addr
                                [0xeU]),9);
        bufp->chgSData(oldp+38,(vlSelfRef.substitute_bytes__DOT__addr
                                [0xfU]),9);
        bufp->chgSData(oldp+39,(vlSelfRef.substitute_bytes__DOT__addr
                                [1U]),9);
        bufp->chgSData(oldp+40,(vlSelfRef.substitute_bytes__DOT__addr
                                [2U]),9);
        bufp->chgSData(oldp+41,(vlSelfRef.substitute_bytes__DOT__addr
                                [3U]),9);
        bufp->chgSData(oldp+42,(vlSelfRef.substitute_bytes__DOT__addr
                                [4U]),9);
        bufp->chgSData(oldp+43,(vlSelfRef.substitute_bytes__DOT__addr
                                [5U]),9);
        bufp->chgSData(oldp+44,(vlSelfRef.substitute_bytes__DOT__addr
                                [6U]),9);
        bufp->chgSData(oldp+45,(vlSelfRef.substitute_bytes__DOT__addr
                                [7U]),9);
        bufp->chgSData(oldp+46,(vlSelfRef.substitute_bytes__DOT__addr
                                [8U]),9);
        bufp->chgSData(oldp+47,(vlSelfRef.substitute_bytes__DOT__addr
                                [9U]),9);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+48,(vlSelfRef.substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+62,(vlSelfRef.substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+64,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+65,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+66,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+67,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+68,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+69,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+70,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+71,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+72,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+73,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+74,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+75,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+76,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+77,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+78,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+79,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__9__KET____DOT__simple_rom_j__data),8);
    }
    bufp->chgWData(oldp+80,(vlSelfRef.in),128);
    bufp->chgBit(oldp+84,(vlSelfRef.mode));
    bufp->chgBit(oldp+85,(vlSelfRef.clk));
    bufp->chgWData(oldp+86,(vlSelfRef.out),128);
}

void Vsubstitute_bytes___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_cleanup\n"); );
    // Init
    Vsubstitute_bytes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsubstitute_bytes___024root*>(voidSelf);
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

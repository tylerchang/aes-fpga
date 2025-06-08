// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmix_columns__Syms.h"


void Vmix_columns___024root__trace_chg_0_sub_0(Vmix_columns___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmix_columns___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_chg_0\n"); );
    // Init
    Vmix_columns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmix_columns___024root*>(voidSelf);
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmix_columns___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmix_columns___024root__trace_chg_0_sub_0(Vmix_columns___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_chg_0_sub_0\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+32,(vlSelfRef.mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+33,(vlSelfRef.mix_columns__DOT__unnamedblk3__DOT__i),32);
    }
    bufp->chgWData(oldp+34,(vlSelfRef.in),128);
    bufp->chgBit(oldp+38,(vlSelfRef.mode));
    bufp->chgWData(oldp+39,(vlSelfRef.out),128);
}

void Vmix_columns___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_cleanup\n"); );
    // Init
    Vmix_columns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmix_columns___024root*>(voidSelf);
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

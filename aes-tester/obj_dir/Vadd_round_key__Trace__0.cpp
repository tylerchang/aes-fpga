// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadd_round_key__Syms.h"


void Vadd_round_key___024root__trace_chg_0_sub_0(Vadd_round_key___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vadd_round_key___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root__trace_chg_0\n"); );
    // Init
    Vadd_round_key___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd_round_key___024root*>(voidSelf);
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vadd_round_key___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vadd_round_key___024root__trace_chg_0_sub_0(Vadd_round_key___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root__trace_chg_0_sub_0\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgWData(oldp+0,(vlSelfRef.in_text),128);
    bufp->chgWData(oldp+4,(vlSelfRef.round_key),128);
    bufp->chgWData(oldp+8,(vlSelfRef.out_text),128);
}

void Vadd_round_key___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root__trace_cleanup\n"); );
    // Init
    Vadd_round_key___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd_round_key___024root*>(voidSelf);
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

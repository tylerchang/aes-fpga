// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmix_columns.h for the primary calling header

#include "Vmix_columns__pch.h"
#include "Vmix_columns__Syms.h"
#include "Vmix_columns___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__ico(Vmix_columns___024root* vlSelf);
#endif  // VL_DEBUG

void Vmix_columns___024root___eval_triggers__ico(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_triggers__ico\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmix_columns___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__act(Vmix_columns___024root* vlSelf);
#endif  // VL_DEBUG

void Vmix_columns___024root___eval_triggers__act(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_triggers__act\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmix_columns___024root___dump_triggers__act(vlSelf);
    }
#endif
}

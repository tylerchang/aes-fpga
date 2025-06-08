// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_rows.h for the primary calling header

#include "Vshift_rows__pch.h"
#include "Vshift_rows__Syms.h"
#include "Vshift_rows___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__ico(Vshift_rows___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_rows___024root___eval_triggers__ico(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_triggers__ico\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vshift_rows___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__act(Vshift_rows___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_rows___024root___eval_triggers__act(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_triggers__act\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vshift_rows___024root___dump_triggers__act(vlSelf);
    }
#endif
}

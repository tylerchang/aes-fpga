// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift_rows__Syms.h"


void Vshift_rows___024root__trace_chg_0_sub_0(Vshift_rows___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vshift_rows___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root__trace_chg_0\n"); );
    // Init
    Vshift_rows___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_rows___024root*>(voidSelf);
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vshift_rows___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vshift_rows___024root__trace_chg_0_sub_0(Vshift_rows___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root__trace_chg_0_sub_0\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgWData(oldp+0,(vlSelfRef.in_text),128);
    bufp->chgBit(oldp+4,(vlSelfRef.mode));
    bufp->chgWData(oldp+5,(vlSelfRef.out_text),128);
    bufp->chgIData(oldp+9,((((0xff000000U & vlSelfRef.in_text[3U]) 
                             | (0xff0000U & (vlSelfRef.in_text[2U] 
                                             >> 8U))) 
                            | ((0xff00U & (vlSelfRef.in_text[1U] 
                                           >> 0x10U)) 
                               | (vlSelfRef.in_text[0U] 
                                  >> 0x18U)))),32);
    bufp->chgIData(oldp+10,(((0xff000000U & (vlSelfRef.in_text[3U] 
                                             << 8U)) 
                             | vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_16)),32);
    bufp->chgIData(oldp+11,(((0xff000000U & (vlSelfRef.in_text[3U] 
                                             << 0x10U)) 
                             | ((0xff0000U & (vlSelfRef.in_text[2U] 
                                              << 8U)) 
                                | (IData)(vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_17)))),32);
    bufp->chgIData(oldp+12,(((vlSelfRef.in_text[3U] 
                              << 0x18U) | vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_18)),32);
    bufp->chgIData(oldp+13,(vlSelfRef.shift_rows__DOT__shifted_row1),32);
    bufp->chgIData(oldp+14,((((IData)(vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_17) 
                              << 0x10U) | ((0xff00U 
                                            & vlSelfRef.in_text[3U]) 
                                           | (0xffU 
                                              & (vlSelfRef.in_text[2U] 
                                                 >> 8U))))),32);
    bufp->chgIData(oldp+15,(vlSelfRef.shift_rows__DOT__shifted_row3),32);
}

void Vshift_rows___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root__trace_cleanup\n"); );
    // Init
    Vshift_rows___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_rows___024root*>(voidSelf);
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

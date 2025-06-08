// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_scheduler.h for the primary calling header

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler__Syms.h"
#include "Vaes_scheduler___024root.h"

VL_ATTR_COLD void Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst(Vaes_scheduler_aes_core* vlSelf);

VL_ATTR_COLD void Vaes_scheduler___024root___eval_initial(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_initial\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst));
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst));
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst));
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst));
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst));
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst));
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst));
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst));
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst));
    Vaes_scheduler_aes_core___eval_initial__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__stl(Vaes_scheduler___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaes_scheduler___024root___eval_triggers__stl(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_triggers__stl\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_scheduler___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vaes_scheduler___024root___stl_sequent__TOP__0(Vaes_scheduler___024root* vlSelf);
VL_ATTR_COLD void Vaes_scheduler___024root____Vm_traceActivitySetAll(Vaes_scheduler___024root* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
VL_ATTR_COLD void Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);

VL_ATTR_COLD void Vaes_scheduler___024root___eval_stl(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_stl\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vaes_scheduler___024root___stl_sequent__TOP__0(vlSelf);
        Vaes_scheduler___024root____Vm_traceActivitySetAll(vlSelf);
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___stl_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst));
    }
}

VL_ATTR_COLD void Vaes_scheduler___024root___stl_sequent__TOP__0(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___stl_sequent__TOP__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U != (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk2__DOT__i = 0xaU;
    }
    if ((1U == (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[0U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[0U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[0U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[0U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[1U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[1U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[1U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[1U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[2U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[2U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[2U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[2U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[3U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[3U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[3U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[3U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[4U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[4U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[4U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[4U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[5U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[5U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[5U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[5U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[6U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[6U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[6U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[6U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[7U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[7U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[7U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[7U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[8U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[8U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[8U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[8U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[9U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[9U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[9U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[9U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.sink_ready = vlSelfRef.start;
        vlSelfRef.aes_scheduler__DOT__we_r = ((IData)(vlSelfRef.sink_valid) 
                                              & (IData)(vlSelfRef.sink_ready));
        vlSelfRef.aes_scheduler__DOT__we_core = ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.aes_scheduler__DOT__r_cnt))) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.aes_scheduler__DOT__r_cnt)));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (0U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (1U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (2U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (3U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (4U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[4U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (5U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[5U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (6U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[6U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (7U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[7U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (8U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[8U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (9U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[9U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
    } else {
        vlSelfRef.aes_scheduler__DOT__in_text[0U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[0U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[0U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[0U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[1U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[1U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[1U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[1U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[2U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[2U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[2U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[2U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[3U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[3U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[3U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[3U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[4U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[4U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[4U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[4U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[5U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[5U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[5U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[5U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[6U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[6U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[6U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[6U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[7U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[7U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[7U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[7U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[8U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[8U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[8U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[8U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[9U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[9U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[9U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[9U][3U] = 0U;
        vlSelfRef.sink_ready = 0U;
        vlSelfRef.aes_scheduler__DOT__we_r = 0U;
        vlSelfRef.aes_scheduler__DOT__we_core = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[4U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[5U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[6U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[7U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[8U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[9U] = 0U;
    }
    if ((3U != (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk3__DOT__i = 4U;
    }
    vlSelfRef.aes_scheduler__DOT__r_reg_word_sel = 
        (3U & (IData)(vlSelfRef.aes_scheduler__DOT__r_cnt));
    vlSelfRef.aes_scheduler__DOT__out_text[0U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[0U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[0U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[0U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[1U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[1U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[1U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[1U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[2U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[2U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[2U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[2U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[3U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[3U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[3U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[3U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[4U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[4U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[4U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[4U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[5U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[5U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[5U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[5U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[6U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[6U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[6U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[6U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[7U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[7U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[7U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[7U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[8U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[8U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[8U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[8U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[9U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[9U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[9U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[9U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U];
    if ((3U == (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.source_valid = vlSelfRef.start;
        vlSelfRef.aes_scheduler__DOT__we_w = ((IData)(vlSelfRef.source_valid) 
                                              & (IData)(vlSelfRef.source_ready));
        if ((9U >= (0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                            >> 2U)))) {
            vlSelfRef.aes_scheduler__DOT__core_out[0U] 
                = vlSelfRef.aes_scheduler__DOT__out_text
                [(0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                          >> 2U))][3U];
            vlSelfRef.aes_scheduler__DOT__core_out[1U] 
                = vlSelfRef.aes_scheduler__DOT__out_text
                [(0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                          >> 2U))][2U];
            vlSelfRef.aes_scheduler__DOT__core_out[2U] 
                = vlSelfRef.aes_scheduler__DOT__out_text
                [(0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                          >> 2U))][1U];
            vlSelfRef.aes_scheduler__DOT__core_out[3U] 
                = vlSelfRef.aes_scheduler__DOT__out_text
                [(0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                          >> 2U))][0U];
        } else {
            vlSelfRef.aes_scheduler__DOT__core_out[0U] = 0U;
            vlSelfRef.aes_scheduler__DOT__core_out[1U] = 0U;
            vlSelfRef.aes_scheduler__DOT__core_out[2U] = 0U;
            vlSelfRef.aes_scheduler__DOT__core_out[3U] = 0U;
        }
        vlSelfRef.source_data = vlSelfRef.aes_scheduler__DOT__core_out
            [(3U & (IData)(vlSelfRef.aes_scheduler__DOT__w_cnt))];
    } else {
        vlSelfRef.source_valid = 0U;
        vlSelfRef.aes_scheduler__DOT__we_w = 0U;
        vlSelfRef.aes_scheduler__DOT__core_out[0U] = 0U;
        vlSelfRef.source_data = 0U;
        vlSelfRef.aes_scheduler__DOT__core_out[1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__core_out[2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__core_out[3U] = 0U;
    }
    vlSelfRef.aes_scheduler__DOT__next_state = ((2U 
                                                 & (IData)(vlSelfRef.aes_scheduler__DOT__state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.aes_scheduler__DOT__state))
                                                  ? 
                                                 ((0x27U 
                                                   == (IData)(vlSelfRef.aes_scheduler__DOT__w_cnt))
                                                   ? 0U
                                                   : 3U)
                                                  : 
                                                 ((0x32U 
                                                   == (IData)(vlSelfRef.aes_scheduler__DOT__c_cnt))
                                                   ? 3U
                                                   : 2U))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.aes_scheduler__DOT__state))
                                                  ? 
                                                 (vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [9U]
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((IData)(vlSelfRef.start)
                                                   ? 1U
                                                   : 0U)));
    if ((1U & ((IData)(vlSelfRef.reset) | (~ (IData)(vlSelfRef.start))))) {
        vlSelfRef.aes_scheduler__DOT__next_state = 0U;
    }
}

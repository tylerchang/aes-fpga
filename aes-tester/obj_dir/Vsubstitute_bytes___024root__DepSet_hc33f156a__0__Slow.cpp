// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsubstitute_bytes.h for the primary calling header

#include "Vsubstitute_bytes__pch.h"
#include "Vsubstitute_bytes___024root.h"

VL_ATTR_COLD void Vsubstitute_bytes___024root___eval_static(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_static\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vsubstitute_bytes___024root___eval_initial__TOP(Vsubstitute_bytes___024root* vlSelf);

VL_ATTR_COLD void Vsubstitute_bytes___024root___eval_initial(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_initial\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsubstitute_bytes___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vsubstitute_bytes___024root___eval_initial__TOP(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_initial__TOP\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f626f78U;
    __Vtemp_1[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__0__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x5f626f78U;
    __Vtemp_2[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__1__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x5f626f78U;
    __Vtemp_3[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__2__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x5f626f78U;
    __Vtemp_4[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_4)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__3__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_5[0U] = 0x2e686578U;
    __Vtemp_5[1U] = 0x5f626f78U;
    __Vtemp_5[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_5)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__4__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_6[0U] = 0x2e686578U;
    __Vtemp_6[1U] = 0x5f626f78U;
    __Vtemp_6[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_6)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__5__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_7[0U] = 0x2e686578U;
    __Vtemp_7[1U] = 0x5f626f78U;
    __Vtemp_7[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_7)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__6__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_8[0U] = 0x2e686578U;
    __Vtemp_8[1U] = 0x5f626f78U;
    __Vtemp_8[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_8)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__7__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_9[0U] = 0x2e686578U;
    __Vtemp_9[1U] = 0x5f626f78U;
    __Vtemp_9[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_9)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__8__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_10[0U] = 0x2e686578U;
    __Vtemp_10[1U] = 0x5f626f78U;
    __Vtemp_10[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_10)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__9__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_11[0U] = 0x2e686578U;
    __Vtemp_11[1U] = 0x5f626f78U;
    __Vtemp_11[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_11)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__10__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_12[0U] = 0x2e686578U;
    __Vtemp_12[1U] = 0x5f626f78U;
    __Vtemp_12[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_12)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__11__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_13[0U] = 0x2e686578U;
    __Vtemp_13[1U] = 0x5f626f78U;
    __Vtemp_13[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_13)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__12__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_14[0U] = 0x2e686578U;
    __Vtemp_14[1U] = 0x5f626f78U;
    __Vtemp_14[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_14)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__13__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_15[0U] = 0x2e686578U;
    __Vtemp_15[1U] = 0x5f626f78U;
    __Vtemp_15[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_15)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__14__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
    __Vtemp_16[0U] = 0x2e686578U;
    __Vtemp_16[1U] = 0x5f626f78U;
    __Vtemp_16[2U] = 0x737562U;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_16)
                 ,  &(vlSelfRef.substitute_bytes__DOT__genblk1__BRA__15__KET____DOT__simple_rom_j__DOT__rom_data)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsubstitute_bytes___024root___eval_final(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_final\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubstitute_bytes___024root___dump_triggers__stl(Vsubstitute_bytes___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsubstitute_bytes___024root___eval_phase__stl(Vsubstitute_bytes___024root* vlSelf);

VL_ATTR_COLD void Vsubstitute_bytes___024root___eval_settle(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_settle\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsubstitute_bytes___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../hw/../hw/substitute_bytes.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsubstitute_bytes___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubstitute_bytes___024root___dump_triggers__stl(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___dump_triggers__stl\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsubstitute_bytes___024root___stl_sequent__TOP__0(Vsubstitute_bytes___024root* vlSelf);
VL_ATTR_COLD void Vsubstitute_bytes___024root____Vm_traceActivitySetAll(Vsubstitute_bytes___024root* vlSelf);

VL_ATTR_COLD void Vsubstitute_bytes___024root___eval_stl(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_stl\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsubstitute_bytes___024root___stl_sequent__TOP__0(vlSelf);
        Vsubstitute_bytes___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vsubstitute_bytes___024root___stl_sequent__TOP__0(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___stl_sequent__TOP__0\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.substitute_bytes__DOT__in_bytes[0U] = 
        (vlSelfRef.in[3U] >> 0x18U);
    vlSelfRef.substitute_bytes__DOT__addr[0U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [0U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[1U] = 
        (0xffU & (vlSelfRef.in[3U] >> 0x10U));
    vlSelfRef.substitute_bytes__DOT__addr[1U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [1U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[2U] = 
        (0xffU & (vlSelfRef.in[3U] >> 8U));
    vlSelfRef.substitute_bytes__DOT__addr[2U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [2U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[3U] = 
        (0xffU & vlSelfRef.in[3U]);
    vlSelfRef.substitute_bytes__DOT__addr[3U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [3U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[4U] = 
        (vlSelfRef.in[2U] >> 0x18U);
    vlSelfRef.substitute_bytes__DOT__addr[4U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [4U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[5U] = 
        (0xffU & (vlSelfRef.in[2U] >> 0x10U));
    vlSelfRef.substitute_bytes__DOT__addr[5U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [5U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[6U] = 
        (0xffU & (vlSelfRef.in[2U] >> 8U));
    vlSelfRef.substitute_bytes__DOT__addr[6U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [6U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[7U] = 
        (0xffU & vlSelfRef.in[2U]);
    vlSelfRef.substitute_bytes__DOT__addr[7U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [7U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[8U] = 
        (vlSelfRef.in[1U] >> 0x18U);
    vlSelfRef.substitute_bytes__DOT__addr[8U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [8U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[9U] = 
        (0xffU & (vlSelfRef.in[1U] >> 0x10U));
    vlSelfRef.substitute_bytes__DOT__addr[9U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [9U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.in[1U] >> 8U));
    vlSelfRef.substitute_bytes__DOT__addr[0xaU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xaU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.in[1U]);
    vlSelfRef.substitute_bytes__DOT__addr[0xbU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xbU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xcU] 
        = (vlSelfRef.in[0U] >> 0x18U);
    vlSelfRef.substitute_bytes__DOT__addr[0xcU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xcU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.in[0U] >> 0x10U));
    vlSelfRef.substitute_bytes__DOT__addr[0xdU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xdU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.in[0U] >> 8U));
    vlSelfRef.substitute_bytes__DOT__addr[0xeU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xeU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.in[0U]);
    vlSelfRef.substitute_bytes__DOT__addr[0xfU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xfU]);
    vlSelfRef.substitute_bytes__DOT__out_bytes[0U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__0__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[1U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__1__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[2U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__2__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[3U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__3__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[4U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__4__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[5U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__5__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[6U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__6__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[7U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__7__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[8U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__8__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[9U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__9__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xaU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__10__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xbU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__11__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xcU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__12__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xdU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__13__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xeU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__14__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xfU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__15__KET____DOT__simple_rom_j__data;
    vlSelfRef.out[3U] = ((0xffU & vlSelfRef.out[3U]) 
                         | (0xffffff00U & ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                            [0U] << 0x18U) 
                                           | ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                               [1U] 
                                               << 0x10U) 
                                              | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                                 [2U] 
                                                 << 8U)))));
    vlSelfRef.out[2U] = ((0xffffU & vlSelfRef.out[2U]) 
                         | (0xffff0000U & ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                            [4U] << 0x18U) 
                                           | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                              [5U] 
                                              << 0x10U))));
    vlSelfRef.out[3U] = ((0xffffff00U & vlSelfRef.out[3U]) 
                         | (0xffffU & ((0xffffU & vlSelfRef.substitute_bytes__DOT__out_bytes
                                        [3U]) | ((0xffffU 
                                                  & (vlSelfRef.substitute_bytes__DOT__out_bytes
                                                     [4U] 
                                                     >> 8U)) 
                                                 | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                                    [5U] 
                                                    >> 0x10U)))));
    vlSelfRef.out[1U] = ((0xffffffU & vlSelfRef.out[1U]) 
                         | (vlSelfRef.substitute_bytes__DOT__out_bytes
                            [8U] << 0x18U));
    vlSelfRef.out[2U] = ((0xffff0000U & vlSelfRef.out[2U]) 
                         | (0xffffffU & ((0xffff00U 
                                          & (vlSelfRef.substitute_bytes__DOT__out_bytes
                                             [6U] << 8U)) 
                                         | ((0xffffffU 
                                             & vlSelfRef.substitute_bytes__DOT__out_bytes
                                             [7U]) 
                                            | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                               [8U] 
                                               >> 8U)))));
    vlSelfRef.out[1U] = ((0xff000000U & vlSelfRef.out[1U]) 
                         | ((vlSelfRef.substitute_bytes__DOT__out_bytes
                             [9U] << 0x10U) | ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                                [0xaU] 
                                                << 8U) 
                                               | vlSelfRef.substitute_bytes__DOT__out_bytes
                                               [0xbU])));
    vlSelfRef.out[0U] = ((0xffU & vlSelfRef.out[0U]) 
                         | (0xffffff00U & ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                            [0xcU] 
                                            << 0x18U) 
                                           | ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                               [0xdU] 
                                               << 0x10U) 
                                              | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                                 [0xeU] 
                                                 << 8U)))));
    vlSelfRef.out[0U] = ((0xffffff00U & vlSelfRef.out[0U]) 
                         | vlSelfRef.substitute_bytes__DOT__out_bytes
                         [0xfU]);
}

VL_ATTR_COLD void Vsubstitute_bytes___024root___eval_triggers__stl(Vsubstitute_bytes___024root* vlSelf);

VL_ATTR_COLD bool Vsubstitute_bytes___024root___eval_phase__stl(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_phase__stl\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsubstitute_bytes___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsubstitute_bytes___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubstitute_bytes___024root___dump_triggers__ico(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___dump_triggers__ico\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubstitute_bytes___024root___dump_triggers__act(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___dump_triggers__act\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubstitute_bytes___024root___dump_triggers__nba(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___dump_triggers__nba\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsubstitute_bytes___024root____Vm_traceActivitySetAll(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root____Vm_traceActivitySetAll\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vsubstitute_bytes___024root___ctor_var_reset(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___ctor_var_reset\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(128, vlSelf->in);
    vlSelf->mode = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->out);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__in_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__out_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__0__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__1__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__2__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__3__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__4__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__5__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__6__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__7__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__8__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__9__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__10__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__11__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__12__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__13__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__14__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    vlSelf->substitute_bytes__DOT____Vcellout__genblk1__BRA__15__KET____DOT__simple_rom_j__data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__0__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__1__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__2__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__3__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__4__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__5__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__6__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__7__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__8__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__9__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__10__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__11__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__12__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__13__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__14__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->substitute_bytes__DOT__genblk1__BRA__15__KET____DOT__simple_rom_j__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

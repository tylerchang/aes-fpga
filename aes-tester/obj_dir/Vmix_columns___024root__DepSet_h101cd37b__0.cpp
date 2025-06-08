// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmix_columns.h for the primary calling header

#include "Vmix_columns__pch.h"
#include "Vmix_columns___024root.h"

void Vmix_columns___024root___ico_sequent__TOP__0(Vmix_columns___024root* vlSelf);

void Vmix_columns___024root___eval_ico(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_ico\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmix_columns___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vmix_columns___024root___ico_sequent__TOP__0(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___ico_sequent__TOP__0\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mix_columns__DOT__in_bytes[0U] = (vlSelfRef.in[3U] 
                                                >> 0x18U);
    vlSelfRef.mix_columns__DOT__in_bytes[1U] = (0xffU 
                                                & (vlSelfRef.in[3U] 
                                                   >> 0x10U));
    vlSelfRef.mix_columns__DOT__in_bytes[2U] = (0xffU 
                                                & (vlSelfRef.in[3U] 
                                                   >> 8U));
    vlSelfRef.mix_columns__DOT__in_bytes[3U] = (0xffU 
                                                & vlSelfRef.in[3U]);
    vlSelfRef.mix_columns__DOT__in_bytes[4U] = (vlSelfRef.in[2U] 
                                                >> 0x18U);
    vlSelfRef.mix_columns__DOT__in_bytes[5U] = (0xffU 
                                                & (vlSelfRef.in[2U] 
                                                   >> 0x10U));
    vlSelfRef.mix_columns__DOT__in_bytes[6U] = (0xffU 
                                                & (vlSelfRef.in[2U] 
                                                   >> 8U));
    vlSelfRef.mix_columns__DOT__in_bytes[7U] = (0xffU 
                                                & vlSelfRef.in[2U]);
    vlSelfRef.mix_columns__DOT__in_bytes[8U] = (vlSelfRef.in[1U] 
                                                >> 0x18U);
    vlSelfRef.mix_columns__DOT__in_bytes[9U] = (0xffU 
                                                & (vlSelfRef.in[1U] 
                                                   >> 0x10U));
    vlSelfRef.mix_columns__DOT__in_bytes[0xaU] = (0xffU 
                                                  & (vlSelfRef.in[1U] 
                                                     >> 8U));
    vlSelfRef.mix_columns__DOT__in_bytes[0xbU] = (0xffU 
                                                  & vlSelfRef.in[1U]);
    vlSelfRef.mix_columns__DOT__in_bytes[0xcU] = (vlSelfRef.in[0U] 
                                                  >> 0x18U);
    vlSelfRef.mix_columns__DOT__in_bytes[0xdU] = (0xffU 
                                                  & (vlSelfRef.in[0U] 
                                                     >> 0x10U));
    vlSelfRef.mix_columns__DOT__in_bytes[0xeU] = (0xffU 
                                                  & (vlSelfRef.in[0U] 
                                                     >> 8U));
    vlSelfRef.mix_columns__DOT__in_bytes[0xfU] = (0xffU 
                                                  & vlSelfRef.in[0U]);
    if (vlSelfRef.mode) {
        vlSelfRef.mix_columns__DOT__out_bytes[0U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a 
                                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a;
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__Vfuncout))) 
              ^ vlSelfRef.mix_columns__DOT__in_bytes
              [2U]) ^ vlSelfRef.mix_columns__DOT__in_bytes
             [3U]);
        vlSelfRef.mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.mix_columns__DOT__out_bytes[1U] = 
            (((vlSelfRef.mix_columns__DOT__in_bytes
               [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a 
                                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a;
                                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__Vfuncout))) 
             ^ vlSelfRef.mix_columns__DOT__in_bytes
             [3U]);
        vlSelfRef.mix_columns__DOT__out_bytes[2U] = 
            (((vlSelfRef.mix_columns__DOT__in_bytes
               [0U] ^ vlSelfRef.mix_columns__DOT__in_bytes
               [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a 
                                    = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a;
                                vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[3U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a 
                                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a;
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__Vfuncout)) 
               ^ vlSelfRef.mix_columns__DOT__in_bytes
               [1U]) ^ vlSelfRef.mix_columns__DOT__in_bytes
              [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[4U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a 
                                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a;
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__Vfuncout))) 
              ^ vlSelfRef.mix_columns__DOT__in_bytes
              [6U]) ^ vlSelfRef.mix_columns__DOT__in_bytes
             [7U]);
        vlSelfRef.mix_columns__DOT__out_bytes[5U] = 
            (((vlSelfRef.mix_columns__DOT__in_bytes
               [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a 
                                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a;
                                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__Vfuncout))) 
             ^ vlSelfRef.mix_columns__DOT__in_bytes
             [7U]);
        vlSelfRef.mix_columns__DOT__out_bytes[6U] = 
            (((vlSelfRef.mix_columns__DOT__in_bytes
               [4U] ^ vlSelfRef.mix_columns__DOT__in_bytes
               [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a 
                                    = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a;
                                vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[7U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a 
                                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a;
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__Vfuncout)) 
               ^ vlSelfRef.mix_columns__DOT__in_bytes
               [5U]) ^ vlSelfRef.mix_columns__DOT__in_bytes
              [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[8U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a 
                                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a;
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__Vfuncout))) 
              ^ vlSelfRef.mix_columns__DOT__in_bytes
              [0xaU]) ^ vlSelfRef.mix_columns__DOT__in_bytes
             [0xbU]);
        vlSelfRef.mix_columns__DOT__out_bytes[9U] = 
            (((vlSelfRef.mix_columns__DOT__in_bytes
               [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a 
                                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a;
                                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__Vfuncout))) 
             ^ vlSelfRef.mix_columns__DOT__in_bytes
             [0xbU]);
        vlSelfRef.mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a 
                                    = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a;
                                vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a 
                                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a;
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__Vfuncout)) 
                 ^ vlSelfRef.mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__0__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a 
                                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a;
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__2__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__1__Vfuncout))) 
                ^ vlSelfRef.mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__3__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a 
                                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a;
                                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__5__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__4__Vfuncout))) 
               ^ vlSelfRef.mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__6__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a 
                                    = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a;
                                vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__8__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__7__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a 
                                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a;
                                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__10__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime3__9__Vfuncout)) 
                 ^ vlSelfRef.mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__11__Vfuncout)));
    } else {
        vlSelfRef.mix_columns__DOT__out_bytes[0U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__Vfuncout)));
        vlSelfRef.mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.mix_columns__DOT__out_bytes[1U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[2U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[3U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[4U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[5U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[6U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[7U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[8U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[9U] = 
            (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__Vfuncout)) 
               ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__Vfuncout))) 
              ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__Vfuncout))) 
             ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__13__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__14__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__15__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__12__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__17__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__18__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__19__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__16__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__21__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__22__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__23__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__20__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__25__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__26__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__27__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__24__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__29__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__30__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__31__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__28__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__33__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__34__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__35__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__32__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__37__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__38__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__39__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__36__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__41__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__42__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__43__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__40__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__45__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__46__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__47__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__44__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__49__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__50__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__51__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__48__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__53__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__54__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__55__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__52__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__57__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__58__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__59__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__a));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__56__Vfuncout)));
        vlSelfRef.mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__61__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__62__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__63__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime11__60__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a 
                                = vlSelfRef.mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a2 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__65__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a2;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__66__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a8 
                                = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__67__Vfuncout;
                            vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__a));
                        }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime13__64__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a 
                            = vlSelfRef.mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a2 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__69__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a2;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a4 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__70__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a4;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a8 
                            = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__71__Vfuncout;
                        vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__a));
                    }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime9__68__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a 
                        = vlSelfRef.mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__73__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__74__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a8 
                        = vlSelfRef.__Vfunc_mix_columns__DOT__xtime2__75__Vfuncout;
                    vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__a2));
                }(), (IData)(vlSelfRef.__Vfunc_mix_columns__DOT__xtime14__72__Vfuncout)));
    }
    vlSelfRef.out[3U] = ((0xffU & vlSelfRef.out[3U]) 
                         | (0xffffff00U & ((vlSelfRef.mix_columns__DOT__out_bytes
                                            [0U] << 0x18U) 
                                           | ((vlSelfRef.mix_columns__DOT__out_bytes
                                               [1U] 
                                               << 0x10U) 
                                              | (vlSelfRef.mix_columns__DOT__out_bytes
                                                 [2U] 
                                                 << 8U)))));
    vlSelfRef.out[2U] = ((0xffffU & vlSelfRef.out[2U]) 
                         | (0xffff0000U & ((vlSelfRef.mix_columns__DOT__out_bytes
                                            [4U] << 0x18U) 
                                           | (vlSelfRef.mix_columns__DOT__out_bytes
                                              [5U] 
                                              << 0x10U))));
    vlSelfRef.out[3U] = ((0xffffff00U & vlSelfRef.out[3U]) 
                         | (0xffffU & ((0xffffU & vlSelfRef.mix_columns__DOT__out_bytes
                                        [3U]) | ((0xffffU 
                                                  & (vlSelfRef.mix_columns__DOT__out_bytes
                                                     [4U] 
                                                     >> 8U)) 
                                                 | (vlSelfRef.mix_columns__DOT__out_bytes
                                                    [5U] 
                                                    >> 0x10U)))));
    vlSelfRef.out[1U] = ((0xffffffU & vlSelfRef.out[1U]) 
                         | (vlSelfRef.mix_columns__DOT__out_bytes
                            [8U] << 0x18U));
    vlSelfRef.out[2U] = ((0xffff0000U & vlSelfRef.out[2U]) 
                         | (0xffffffU & ((0xffff00U 
                                          & (vlSelfRef.mix_columns__DOT__out_bytes
                                             [6U] << 8U)) 
                                         | ((0xffffffU 
                                             & vlSelfRef.mix_columns__DOT__out_bytes
                                             [7U]) 
                                            | (vlSelfRef.mix_columns__DOT__out_bytes
                                               [8U] 
                                               >> 8U)))));
    vlSelfRef.out[1U] = ((0xff000000U & vlSelfRef.out[1U]) 
                         | ((vlSelfRef.mix_columns__DOT__out_bytes
                             [9U] << 0x10U) | ((vlSelfRef.mix_columns__DOT__out_bytes
                                                [0xaU] 
                                                << 8U) 
                                               | vlSelfRef.mix_columns__DOT__out_bytes
                                               [0xbU])));
    vlSelfRef.out[0U] = ((0xffU & vlSelfRef.out[0U]) 
                         | (0xffffff00U & ((vlSelfRef.mix_columns__DOT__out_bytes
                                            [0xcU] 
                                            << 0x18U) 
                                           | ((vlSelfRef.mix_columns__DOT__out_bytes
                                               [0xdU] 
                                               << 0x10U) 
                                              | (vlSelfRef.mix_columns__DOT__out_bytes
                                                 [0xeU] 
                                                 << 8U)))));
    vlSelfRef.out[0U] = ((0xffffff00U & vlSelfRef.out[0U]) 
                         | vlSelfRef.mix_columns__DOT__out_bytes
                         [0xfU]);
}

void Vmix_columns___024root___eval_triggers__ico(Vmix_columns___024root* vlSelf);

bool Vmix_columns___024root___eval_phase__ico(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_phase__ico\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmix_columns___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmix_columns___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmix_columns___024root___eval_act(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_act\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmix_columns___024root___eval_nba(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_nba\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmix_columns___024root___eval_triggers__act(Vmix_columns___024root* vlSelf);

bool Vmix_columns___024root___eval_phase__act(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_phase__act\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmix_columns___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmix_columns___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmix_columns___024root___eval_phase__nba(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_phase__nba\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmix_columns___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__ico(Vmix_columns___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__nba(Vmix_columns___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__act(Vmix_columns___024root* vlSelf);
#endif  // VL_DEBUG

void Vmix_columns___024root___eval(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmix_columns___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../hw/aes_core/mix_columns.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmix_columns___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmix_columns___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../hw/aes_core/mix_columns.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmix_columns___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../hw/aes_core/mix_columns.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmix_columns___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmix_columns___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmix_columns___024root___eval_debug_assertions(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_debug_assertions\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xfeU)))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG

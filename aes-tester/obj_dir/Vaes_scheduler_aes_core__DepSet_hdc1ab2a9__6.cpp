// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_scheduler.h for the primary calling header

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler__Syms.h"
#include "Vaes_scheduler_aes_core.h"

VL_INLINE_OPT void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_add[0U] = (vlSelfRef.__PVT__r[0U] 
                                    ^ vlSymsp->TOP.round_key[0U]);
    vlSelfRef.__PVT__out_add[1U] = (vlSelfRef.__PVT__r[1U] 
                                    ^ vlSymsp->TOP.round_key[1U]);
    vlSelfRef.__PVT__out_add[2U] = (vlSelfRef.__PVT__r[2U] 
                                    ^ vlSymsp->TOP.round_key[2U]);
    vlSelfRef.__PVT__out_add[3U] = (vlSelfRef.__PVT__r[3U] 
                                    ^ vlSymsp->TOP.round_key[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[1U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[2U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[3U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[4U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [4U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[5U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [5U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[6U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [6U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[7U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [7U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[8U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [8U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[9U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [9U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xaU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xaU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xbU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xbU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xcU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xcU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xdU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xdU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xeU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xeU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xfU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xfU]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    if (vlSymsp->TOP.mode) {
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__select = 0U;
                vlSelfRef.__PVT__next_state = (7U & 
                                               ((2U 
                                                 == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))
                                                 ? 1U
                                                 : 0U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__select = 4U;
                vlSelfRef.__PVT__next_state = (7U & 4U);
            } else {
                vlSelfRef.__PVT__select = 3U;
                vlSelfRef.__PVT__next_state = (7U & 2U);
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__select = 2U;
            vlSelfRef.__PVT__next_state = (7U & ((1U 
                                                  & (IData)(vlSelfRef.__PVT__state))
                                                  ? 1U
                                                  : 3U));
        } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__select = 1U;
            vlSelfRef.__PVT__next_state = (7U & ((1U 
                                                  == (IData)(vlSelfRef.__PVT__counter))
                                                  ? 4U
                                                  : 
                                                 ((0x32U 
                                                   == (IData)(vlSelfRef.__PVT__counter))
                                                   ? 0U
                                                   : 5U)));
        } else {
            vlSelfRef.__PVT__select = 0U;
            vlSelfRef.__PVT__next_state = (7U & ((2U 
                                                  == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))
                                                  ? 1U
                                                  : 0U));
        }
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[0U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[3U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[2U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[1U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[2U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[1U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[0U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[3U])));
    } else {
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__select = 0U;
                vlSelfRef.__PVT__next_state = (7U & 
                                               ((2U 
                                                 == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))
                                                 ? 1U
                                                 : 0U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__select = 4U;
                vlSelfRef.__PVT__next_state = (7U & 1U);
            } else {
                vlSelfRef.__PVT__select = 3U;
                vlSelfRef.__PVT__next_state = (7U & 
                                               ((0x31U 
                                                 == (IData)(vlSelfRef.__PVT__counter))
                                                 ? 1U
                                                 : 5U));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__select = 2U;
            vlSelfRef.__PVT__next_state = (7U & ((1U 
                                                  & (IData)(vlSelfRef.__PVT__state))
                                                  ? 4U
                                                  : 3U));
        } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__select = 1U;
            vlSelfRef.__PVT__next_state = (7U & ((0x32U 
                                                  == (IData)(vlSelfRef.__PVT__counter))
                                                  ? 0U
                                                  : 2U));
        } else {
            vlSelfRef.__PVT__select = 0U;
            vlSelfRef.__PVT__next_state = (7U & ((2U 
                                                  == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))
                                                  ? 1U
                                                  : 0U));
        }
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[2U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[1U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[0U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[3U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[0U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[3U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[2U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[1U])));
    }
    if (vlSymsp->TOP.mode) {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout)));
    }
    vlSelfRef.__PVT__out_mix[3U] = ((0xffU & vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0U] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [2U] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffffU & vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffff0000U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [4U] << 0x18U) 
                                          | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                             [5U] << 0x10U))));
    vlSelfRef.__PVT__out_mix[3U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffU & ((0xffffU 
                                                   & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                   [3U]) 
                                                  | ((0xffffU 
                                                      & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                         [4U] 
                                                         >> 8U)) 
                                                     | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                        [5U] 
                                                        >> 0x10U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xffffffU & vlSelfRef.__PVT__out_mix[1U]) 
                                    | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                       [8U] << 0x18U));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffff0000U & 
                                     vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffffffU & 
                                       ((0xffff00U 
                                         & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [6U] << 8U)) 
                                        | ((0xffffffU 
                                            & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [7U]) | 
                                           (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [8U] >> 8U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xff000000U & 
                                     vlSelfRef.__PVT__out_mix[1U]) 
                                    | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                        [9U] << 0x10U) 
                                       | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xaU] << 8U) 
                                          | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                          [0xbU])));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffU & vlSelfRef.__PVT__out_mix[0U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xcU] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [0xeU] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[0U]) 
                                    | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                    [0xfU]);
    vlSelfRef.__PVT__out_shift[0U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[0U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 0x10U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[2U]) 
                                         | (0xffU & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3)));
    vlSelfRef.__PVT__out_shift[1U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[1U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[3U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 8U))));
    vlSelfRef.__PVT__out_shift[2U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[2U]) 
                                       | (0xff0000U 
                                          & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[0U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 0x10U))));
    vlSelfRef.__PVT__out_shift[3U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[3U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             >> 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[1U]) 
                                         | (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                            >> 0x18U)));
}

VL_INLINE_OPT void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))) {
        if ((0x32U != (IData)(vlSelfRef.__PVT__counter))) {
            vlSelfRef.__PVT__counter = (0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__counter)));
        }
    } else {
        vlSelfRef.__PVT__counter = 0U;
    }
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [1U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [2U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [3U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [4U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [5U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [6U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [7U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [8U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [9U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xaU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xbU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xcU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xdU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xeU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xfU]];
    if (((IData)(vlSymsp->TOP.mode) ? ((4U & (IData)(vlSelfRef.__PVT__state))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__state) 
                                                   >> 1U))) 
                                           || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                           [9U]) : 
                                       ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                               >> 1U)) 
                                        || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                            || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                            [9U])))
          : ((4U & (IData)(vlSelfRef.__PVT__state))
              ? ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                           >> 1U))) || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                 [9U]) : ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                 >> 1U)) || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                             || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                             [9U]))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [9U][0U];
            vlSelfRef.__PVT__r[1U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [9U][1U];
            vlSelfRef.__PVT__r[2U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [9U][2U];
            vlSelfRef.__PVT__r[3U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [9U][3U];
        } else if ((1U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_add[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_add[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_add[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_add[3U];
        } else if ((2U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_sub[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_sub[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_sub[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_sub[3U];
        } else if ((3U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_shift[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_shift[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_shift[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_shift[3U];
        } else if ((4U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_mix[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_mix[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_mix[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_mix[3U];
        } else {
            vlSelfRef.__PVT__r[0U] = 0U;
            vlSelfRef.__PVT__r[1U] = 0U;
            vlSelfRef.__PVT__r[2U] = 0U;
            vlSelfRef.__PVT__r[3U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[1U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[2U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[3U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[4U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[5U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[6U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[7U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[8U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[9U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xaU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xbU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xcU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xdU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xeU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xfU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__state = vlSelfRef.__PVT__next_state;
    vlSelfRef.__PVT__out_add[0U] = (vlSelfRef.__PVT__r[0U] 
                                    ^ vlSymsp->TOP.round_key[0U]);
    vlSelfRef.__PVT__out_add[1U] = (vlSelfRef.__PVT__r[1U] 
                                    ^ vlSymsp->TOP.round_key[1U]);
    vlSelfRef.__PVT__out_add[2U] = (vlSelfRef.__PVT__r[2U] 
                                    ^ vlSymsp->TOP.round_key[2U]);
    vlSelfRef.__PVT__out_add[3U] = (vlSelfRef.__PVT__r[3U] 
                                    ^ vlSymsp->TOP.round_key[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[1U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[2U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[3U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[4U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [4U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[5U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [5U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[6U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [6U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[7U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [7U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[8U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [8U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[9U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [9U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xaU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xaU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xbU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xbU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xcU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xcU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xdU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xdU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xeU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xeU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xfU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xfU]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    if (vlSymsp->TOP.mode) {
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[0U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[3U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[2U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[1U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[2U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[1U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[0U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[3U])));
    } else {
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[2U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[1U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[0U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[3U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[0U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[3U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[2U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[1U])));
    }
    if (vlSymsp->TOP.mode) {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__685__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__686__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__687__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__684__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__689__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__690__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__691__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__688__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__693__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__694__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__695__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__692__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__697__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__698__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__699__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__696__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__701__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__702__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__703__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__700__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__705__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__706__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__707__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__704__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__709__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__710__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__711__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__708__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__713__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__714__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__715__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__712__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__717__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__718__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__719__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__716__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__721__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__722__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__723__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__720__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__725__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__726__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__727__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__724__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__729__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__730__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__731__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__728__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__733__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__734__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__735__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__732__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__737__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__738__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__739__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__736__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__741__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__742__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__743__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__740__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__745__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__746__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__747__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__744__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__748__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__750__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__749__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__751__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__753__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__752__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__754__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__756__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__755__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__758__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__757__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__759__Vfuncout)));
    }
    vlSelfRef.__PVT__select = ((IData)(vlSymsp->TOP.mode)
                                ? ((4U & (IData)(vlSelfRef.__PVT__state))
                                    ? ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 4U
                                                 : 3U))
                                    : ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 2U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 1U
                                                 : 0U)))
                                : ((4U & (IData)(vlSelfRef.__PVT__state))
                                    ? ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 4U
                                                 : 3U))
                                    : ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 2U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.__PVT__out_mix[3U] = ((0xffU & vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0U] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [2U] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffffU & vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffff0000U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [4U] << 0x18U) 
                                          | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                             [5U] << 0x10U))));
    vlSelfRef.__PVT__out_mix[3U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffU & ((0xffffU 
                                                   & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                   [3U]) 
                                                  | ((0xffffU 
                                                      & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                         [4U] 
                                                         >> 8U)) 
                                                     | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                        [5U] 
                                                        >> 0x10U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xffffffU & vlSelfRef.__PVT__out_mix[1U]) 
                                    | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                       [8U] << 0x18U));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffff0000U & 
                                     vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffffffU & 
                                       ((0xffff00U 
                                         & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [6U] << 8U)) 
                                        | ((0xffffffU 
                                            & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [7U]) | 
                                           (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [8U] >> 8U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xff000000U & 
                                     vlSelfRef.__PVT__out_mix[1U]) 
                                    | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                        [9U] << 0x10U) 
                                       | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xaU] << 8U) 
                                          | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                          [0xbU])));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffU & vlSelfRef.__PVT__out_mix[0U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xcU] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [0xeU] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[0U]) 
                                    | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                    [0xfU]);
    vlSelfRef.__PVT__out_sub[3U] = ((0xffU & vlSelfRef.__PVT__out_sub[3U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [0U] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                              [1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                [2U] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_sub[2U] = ((0xffffU & vlSelfRef.__PVT__out_sub[2U]) 
                                    | (0xffff0000U 
                                       & ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [4U] << 0x18U) 
                                          | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                             [5U] << 0x10U))));
    vlSelfRef.__PVT__out_sub[3U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_sub[3U]) 
                                    | (0xffffU & ((0xffffU 
                                                   & vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                   [3U]) 
                                                  | ((0xffffU 
                                                      & (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                         [4U] 
                                                         >> 8U)) 
                                                     | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                        [5U] 
                                                        >> 0x10U)))));
    vlSelfRef.__PVT__out_sub[1U] = ((0xffffffU & vlSelfRef.__PVT__out_sub[1U]) 
                                    | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                       [8U] << 0x18U));
    vlSelfRef.__PVT__out_sub[2U] = ((0xffff0000U & 
                                     vlSelfRef.__PVT__out_sub[2U]) 
                                    | (0xffffffU & 
                                       ((0xffff00U 
                                         & (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                            [6U] << 8U)) 
                                        | ((0xffffffU 
                                            & vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                            [7U]) | 
                                           (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                            [8U] >> 8U)))));
    vlSelfRef.__PVT__out_sub[1U] = ((0xff000000U & 
                                     vlSelfRef.__PVT__out_sub[1U]) 
                                    | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                        [9U] << 0x10U) 
                                       | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [0xaU] << 8U) 
                                          | vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                          [0xbU])));
    vlSelfRef.__PVT__out_sub[0U] = ((0xffU & vlSelfRef.__PVT__out_sub[0U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [0xcU] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                              [0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                [0xeU] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_sub[0U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_sub[0U]) 
                                    | vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                    [0xfU]);
    vlSelfRef.__PVT__out_shift[0U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[0U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 0x10U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[2U]) 
                                         | (0xffU & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3)));
    vlSelfRef.__PVT__out_shift[1U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[1U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[3U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 8U))));
    vlSelfRef.__PVT__out_shift[2U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[2U]) 
                                       | (0xff0000U 
                                          & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[0U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 0x10U))));
    vlSelfRef.__PVT__out_shift[3U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[3U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             >> 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[1U]) 
                                         | (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                            >> 0x18U)));
}

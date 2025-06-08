// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_scheduler.h for the primary calling header

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler__Syms.h"
#include "Vaes_scheduler_aes_core.h"

VL_INLINE_OPT void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0\n"); );
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
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout)));
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

VL_INLINE_OPT void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0\n"); );
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
                                           [3U]) : 
                                       ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                               >> 1U)) 
                                        || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                            || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                            [3U])))
          : ((4U & (IData)(vlSelfRef.__PVT__state))
              ? ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                           >> 1U))) || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                 [3U]) : ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                 >> 1U)) || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                             || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                             [3U]))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [3U][0U];
            vlSelfRef.__PVT__r[1U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [3U][1U];
            vlSelfRef.__PVT__r[2U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [3U][2U];
            vlSelfRef.__PVT__r[3U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [3U][3U];
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
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__229__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__230__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__231__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__228__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__233__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__234__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__235__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__232__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__237__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__238__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__239__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__236__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__241__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__242__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__243__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__240__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__245__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__246__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__247__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__244__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__249__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__250__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__251__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__248__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__253__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__254__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__255__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__252__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__257__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__258__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__259__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__256__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__261__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__262__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__263__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__260__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__265__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__266__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__267__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__264__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__269__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__270__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__271__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__268__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__273__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__274__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__275__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__272__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__277__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__278__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__279__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__276__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__281__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__282__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__283__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__280__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__285__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__286__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__287__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__284__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__289__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__290__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__291__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__288__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__292__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__294__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__293__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__295__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__297__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__296__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__298__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__300__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__299__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__302__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__301__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__303__Vfuncout)));
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

VL_INLINE_OPT void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0\n"); );
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
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__305__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__306__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__307__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__304__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__309__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__310__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__311__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__308__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__313__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__314__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__315__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__312__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__317__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__318__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__319__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__316__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__321__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__322__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__323__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__320__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__325__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__326__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__327__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__324__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__329__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__330__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__331__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__328__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__333__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__334__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__335__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__332__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__337__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__338__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__339__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__336__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__341__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__342__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__343__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__340__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__345__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__346__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__347__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__344__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__349__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__350__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__351__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__348__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__353__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__354__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__355__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__352__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__357__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__358__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__359__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__356__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__361__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__362__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__363__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__360__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__365__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__366__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__367__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__364__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__368__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__370__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__369__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__371__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__373__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__372__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__374__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__376__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__375__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__378__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__377__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__379__Vfuncout)));
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_scheduler.h for the primary calling header

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler__Syms.h"
#include "Vaes_scheduler_aes_core.h"

VL_INLINE_OPT void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0\n"); );
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
                                           [7U]) : 
                                       ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                               >> 1U)) 
                                        || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                            || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                            [7U])))
          : ((4U & (IData)(vlSelfRef.__PVT__state))
              ? ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                           >> 1U))) || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                 [7U]) : ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                 >> 1U)) || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                             || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                             [7U]))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [7U][0U];
            vlSelfRef.__PVT__r[1U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [7U][1U];
            vlSelfRef.__PVT__r[2U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [7U][2U];
            vlSelfRef.__PVT__r[3U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [7U][3U];
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
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__533__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__534__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__535__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__532__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__537__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__538__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__539__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__536__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__541__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__542__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__543__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__540__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__545__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__546__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__547__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__544__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__549__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__550__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__551__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__548__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__553__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__554__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__555__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__552__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__557__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__558__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__559__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__556__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__561__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__562__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__563__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__560__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__565__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__566__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__567__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__564__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__569__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__570__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__571__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__568__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__573__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__574__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__575__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__572__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__577__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__578__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__579__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__576__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__581__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__582__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__583__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__580__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__585__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__586__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__587__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__584__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__589__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__590__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__591__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__588__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__593__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__594__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__595__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__592__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__596__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__598__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__597__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__599__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__601__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__600__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__602__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__604__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__603__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__606__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__605__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__607__Vfuncout)));
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

VL_INLINE_OPT void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0\n"); );
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
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout)));
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

VL_INLINE_OPT void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0\n"); );
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
                                           [8U]) : 
                                       ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                               >> 1U)) 
                                        || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                            || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                            [8U])))
          : ((4U & (IData)(vlSelfRef.__PVT__state))
              ? ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                           >> 1U))) || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                 [8U]) : ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                 >> 1U)) || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                             || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                             [8U]))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [8U][0U];
            vlSelfRef.__PVT__r[1U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [8U][1U];
            vlSelfRef.__PVT__r[2U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [8U][2U];
            vlSelfRef.__PVT__r[3U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [8U][3U];
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
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__609__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__610__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__611__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__608__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__613__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__614__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__615__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__612__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__617__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__618__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__619__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__616__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__621__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__622__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__623__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__620__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__625__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__626__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__627__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__624__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__629__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__630__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__631__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__628__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__633__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__634__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__635__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__632__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__637__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__638__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__639__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__636__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__641__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__642__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__643__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__640__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__645__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__646__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__647__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__644__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__649__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__650__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__651__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__648__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__653__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__654__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__655__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__652__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__657__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__658__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__659__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__656__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__661__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__662__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__663__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__660__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__665__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__666__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__667__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__664__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__669__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__670__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__671__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__668__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__672__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__674__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__673__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__675__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__677__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__676__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__678__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__680__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__679__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__682__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__681__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__683__Vfuncout)));
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_scheduler.h for the primary calling header

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler__Syms.h"
#include "Vaes_scheduler___024root.h"

void Vaes_scheduler___024root___ctor_var_reset(Vaes_scheduler___024root* vlSelf);

Vaes_scheduler___024root::Vaes_scheduler___024root(Vaes_scheduler__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaes_scheduler___024root___ctor_var_reset(this);
}

void Vaes_scheduler___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaes_scheduler___024root::~Vaes_scheduler___024root() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmix_columns.h for the primary calling header

#include "Vmix_columns__pch.h"
#include "Vmix_columns__Syms.h"
#include "Vmix_columns___024root.h"

void Vmix_columns___024root___ctor_var_reset(Vmix_columns___024root* vlSelf);

Vmix_columns___024root::Vmix_columns___024root(Vmix_columns__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmix_columns___024root___ctor_var_reset(this);
}

void Vmix_columns___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmix_columns___024root::~Vmix_columns___024root() {
}

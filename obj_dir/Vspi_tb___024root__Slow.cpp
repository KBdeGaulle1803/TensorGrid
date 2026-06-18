// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_tb.h for the primary calling header

#include "Vspi_tb__pch.h"

void Vspi_tb___024root___ctor_var_reset(Vspi_tb___024root* vlSelf);

Vspi_tb___024root::Vspi_tb___024root(Vspi_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vspi_tb___024root___ctor_var_reset(this);
}

void Vspi_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vspi_tb___024root::~Vspi_tb___024root() {
}

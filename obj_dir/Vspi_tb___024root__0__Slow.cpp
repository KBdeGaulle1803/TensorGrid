// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_tb.h for the primary calling header

#include "Vspi_tb__pch.h"

VL_ATTR_COLD void Vspi_tb___024root___eval_static__TOP(Vspi_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_tb___024root___eval_static(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_static\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspi_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__spi_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__spi_tb__DOT__rst__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__spi_tb__DOT__tx_data_ready__0 
        = vlSelfRef.spi_tb__DOT__tx_data_ready;
}

VL_ATTR_COLD void Vspi_tb___024root___eval_static__TOP(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_static__TOP\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spi_tb__DOT__rst = 0U;
    vlSelfRef.spi_tb__DOT__clk = 0U;
    vlSelfRef.spi_tb__DOT__controller_byte_tx = 0U;
    vlSelfRef.spi_tb__DOT__controller_byte_tx_dv = 0U;
}

VL_ATTR_COLD void Vspi_tb___024root___eval_final(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_final\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vspi_tb___024root___eval_settle(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_settle\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vspi_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vspi_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge spi_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge spi_tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge spi_tb.tx_data_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_tb___024root___ctor_var_reset(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___ctor_var_reset\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->spi_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16490067192118527173ull);
    vlSelf->spi_tb__DOT__spi_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8822869813421790013ull);
    vlSelf->spi_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5769436778104471381ull);
    vlSelf->spi_tb__DOT__spi_pico = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3014387401212723954ull);
    vlSelf->spi_tb__DOT__controller_byte_tx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5008141223457575901ull);
    vlSelf->spi_tb__DOT__controller_byte_tx_dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7379714794456788398ull);
    vlSelf->spi_tb__DOT__tx_data_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5022925684420172160ull);
    vlSelf->spi_tb__DOT__peripheral_byte_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4362141784445895269ull);
    vlSelf->spi_tb__DOT__peripheral_byte_rx_dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18297133522831505016ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__spi_clk_edges = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4612424150866784095ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__spi_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9885706348767201230ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__clk_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2350930246331982066ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__leading_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8981879643270496871ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__trailing_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4486928909359348826ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__tx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15947001708957063394ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__tx_dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13665243436818520009ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__tx_bit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10796286224958325848ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__rx_bit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11821888493410172999ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__spi_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9620278323952267025ull);
    vlSelf->__Vtrigprevexpr___TOP__spi_tb__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1789326246098868792ull);
    vlSelf->__Vtrigprevexpr___TOP__spi_tb__DOT__tx_data_ready__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6731293053620296279ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

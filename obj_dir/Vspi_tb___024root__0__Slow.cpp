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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspi_tb___024root___eval_phase__stl(Vspi_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_tb___024root___eval_settle(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_settle\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vspi_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("Test/spi_tb.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vspi_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vspi_tb___024root___eval_triggers__stl(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_triggers__stl\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vspi_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vspi_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vspi_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vspi_tb___024root___act_comb__TOP__0(Vspi_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_tb___024root___eval_stl(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_stl\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vspi_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vspi_tb___024root___eval_phase__stl(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_phase__stl\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspi_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vspi_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vspi_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge spi_tb.tx_data_ready)\n");
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
    vlSelf->spi_tb__DOT__active_chip = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3283293161659353476ull);
    vlSelf->spi_tb__DOT__spi_chip_select = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16827079912929244110ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__tx_count_in = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9726860886479274260ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 339886304850779974ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__TX_Count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7589061233659995942ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18372199924296669992ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__r_CS_Inactive_Count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16874536716153062150ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__w_Master_Ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16341058130640401523ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__controller__DOT__spi_clk_edges = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16731677150294048408ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__controller__DOT__spi_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4315380835238210026ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__controller__DOT__clk_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3761185530674489079ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__controller__DOT__leading_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1363186531217681520ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__controller__DOT__trailing_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13306857805717721938ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__controller__DOT__tx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14128321393558439670ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__controller__DOT__tx_dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10329212426882294542ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__controller__DOT__tx_bit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17389543663475404651ull);
    vlSelf->spi_tb__DOT__spi_controller__DOT__controller__DOT__rx_bit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9878426464500220132ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
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

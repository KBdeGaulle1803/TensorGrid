// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_tb.h for the primary calling header

#include "Vspi_tb__pch.h"

VlCoroutine Vspi_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_tb___024root* vlSelf);
VlCoroutine Vspi_tb___024root___eval_initial__TOP__Vtiming__1(Vspi_tb___024root* vlSelf);

void Vspi_tb___024root___eval_initial(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_initial\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspi_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vspi_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vspi_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ spi_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    spi_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ spi_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    spi_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ spi_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    spi_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*7:0*/ __Vtask_spi_tb__DOT__SendByte__0__data;
    __Vtask_spi_tb__DOT__SendByte__0__data = 0;
    CData/*7:0*/ __Vtask_spi_tb__DOT__SendByte__1__data;
    __Vtask_spi_tb__DOT__SendByte__1__data = 0;
    CData/*7:0*/ __Vtask_spi_tb__DOT__SendByte__2__data;
    __Vtask_spi_tb__DOT__SendByte__2__data = 0;
    // Body
    spi_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, spi_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h453e51df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge spi_tb.clk)", 
                                                             "Test/spi_tb.sv", 
                                                             47);
        spi_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (spi_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.spi_tb__DOT__rst = 0U;
    spi_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, spi_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h453e51df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge spi_tb.clk)", 
                                                             "Test/spi_tb.sv", 
                                                             49);
        spi_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (spi_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.spi_tb__DOT__rst = 1U;
    __Vtask_spi_tb__DOT__SendByte__0__data = 0xc1U;
    co_await vlSelfRef.__VtrigSched_h453e51df__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge spi_tb.clk)", 
                                                         "Test/spi_tb.sv", 
                                                         37);
    vlSelfRef.spi_tb__DOT__controller_byte_tx = __Vtask_spi_tb__DOT__SendByte__0__data;
    vlSelfRef.spi_tb__DOT__controller_byte_tx_dv = 1U;
    co_await vlSelfRef.__VtrigSched_h453e51df__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge spi_tb.clk)", 
                                                         "Test/spi_tb.sv", 
                                                         40);
    vlSelfRef.spi_tb__DOT__controller_byte_tx_dv = 0U;
    co_await vlSelfRef.__VtrigSched_h55b95fb1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge spi_tb.tx_data_ready)", 
                                                         "Test/spi_tb.sv", 
                                                         42);
    VL_WRITEF_NX("Sent 0xC1 Received 0x%x\n",0,8,vlSelfRef.spi_tb__DOT__peripheral_byte_rx);
    __Vtask_spi_tb__DOT__SendByte__1__data = 0xc4U;
    co_await vlSelfRef.__VtrigSched_h453e51df__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge spi_tb.clk)", 
                                                         "Test/spi_tb.sv", 
                                                         37);
    vlSelfRef.spi_tb__DOT__controller_byte_tx = __Vtask_spi_tb__DOT__SendByte__1__data;
    vlSelfRef.spi_tb__DOT__controller_byte_tx_dv = 1U;
    co_await vlSelfRef.__VtrigSched_h453e51df__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge spi_tb.clk)", 
                                                         "Test/spi_tb.sv", 
                                                         40);
    vlSelfRef.spi_tb__DOT__controller_byte_tx_dv = 0U;
    co_await vlSelfRef.__VtrigSched_h55b95fb1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge spi_tb.tx_data_ready)", 
                                                         "Test/spi_tb.sv", 
                                                         42);
    VL_WRITEF_NX("Sent 0xC4 Received 0x%x\n",0,8,vlSelfRef.spi_tb__DOT__peripheral_byte_rx);
    __Vtask_spi_tb__DOT__SendByte__2__data = 0xa1U;
    co_await vlSelfRef.__VtrigSched_h453e51df__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge spi_tb.clk)", 
                                                         "Test/spi_tb.sv", 
                                                         37);
    vlSelfRef.spi_tb__DOT__controller_byte_tx = __Vtask_spi_tb__DOT__SendByte__2__data;
    vlSelfRef.spi_tb__DOT__controller_byte_tx_dv = 1U;
    co_await vlSelfRef.__VtrigSched_h453e51df__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge spi_tb.clk)", 
                                                         "Test/spi_tb.sv", 
                                                         40);
    vlSelfRef.spi_tb__DOT__controller_byte_tx_dv = 0U;
    co_await vlSelfRef.__VtrigSched_h55b95fb1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge spi_tb.tx_data_ready)", 
                                                         "Test/spi_tb.sv", 
                                                         42);
    VL_WRITEF_NX("Sent 0xA1 Received 0x%x\n",0,8,vlSelfRef.spi_tb__DOT__peripheral_byte_rx);
    spi_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, spi_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h453e51df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge spi_tb.clk)", 
                                                             "Test/spi_tb.sv", 
                                                             61);
        spi_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (spi_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSymsp->_vm_contextp__->dumpfile("spi_tb.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_FINISH_MT("Test/spi_tb.sv", 64, "");
}

VlCoroutine Vspi_tb___024root___eval_initial__TOP__Vtiming__1(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(2ULL, 
                                             nullptr, 
                                             "Test/spi_tb.sv", 
                                             17);
        vlSelfRef.spi_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.spi_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vspi_tb___024root___eval_triggers__act(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_triggers__act\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.spi_tb__DOT__tx_data_ready) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__spi_tb__DOT__tx_data_ready__0))) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.spi_tb__DOT__rst)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__spi_tb__DOT__rst__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.spi_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__spi_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__spi_tb__DOT__clk__0 
        = vlSelfRef.spi_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__spi_tb__DOT__rst__0 
        = vlSelfRef.spi_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__spi_tb__DOT__tx_data_ready__0 
        = vlSelfRef.spi_tb__DOT__tx_data_ready;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vspi_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___trigger_anySet__act\n"); );
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

void Vspi_tb___024root___nba_sequent__TOP__0(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___nba_sequent__TOP__0\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk_edges;
    __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk_edges = 0;
    CData/*0:0*/ __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk;
    __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk = 0;
    CData/*3:0*/ __Vdly__spi_tb__DOT__spi_controller__DOT__clk_count;
    __Vdly__spi_tb__DOT__spi_controller__DOT__clk_count = 0;
    CData/*2:0*/ __Vdly__spi_tb__DOT__spi_controller__DOT__tx_bit_count;
    __Vdly__spi_tb__DOT__spi_controller__DOT__tx_bit_count = 0;
    CData/*2:0*/ __Vdly__spi_tb__DOT__spi_controller__DOT__rx_bit_count;
    __Vdly__spi_tb__DOT__spi_controller__DOT__rx_bit_count = 0;
    // Body
    __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk_edges 
        = vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk_edges;
    __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk 
        = vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk;
    __Vdly__spi_tb__DOT__spi_controller__DOT__clk_count 
        = vlSelfRef.spi_tb__DOT__spi_controller__DOT__clk_count;
    __Vdly__spi_tb__DOT__spi_controller__DOT__tx_bit_count 
        = vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_bit_count;
    __Vdly__spi_tb__DOT__spi_controller__DOT__rx_bit_count 
        = vlSelfRef.spi_tb__DOT__spi_controller__DOT__rx_bit_count;
    vlSelfRef.spi_tb__DOT__spi_clk = ((1U & (~ (IData)(vlSelfRef.spi_tb__DOT__rst))) 
                                      || (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk));
    if (vlSelfRef.spi_tb__DOT__rst) {
        vlSelfRef.spi_tb__DOT__peripheral_byte_rx_dv = 0U;
        if (vlSelfRef.spi_tb__DOT__tx_data_ready) {
            __Vdly__spi_tb__DOT__spi_controller__DOT__rx_bit_count = 7U;
            __Vdly__spi_tb__DOT__spi_controller__DOT__tx_bit_count = 7U;
        } else {
            if (vlSelfRef.spi_tb__DOT__spi_controller__DOT__trailing_edge) {
                vlSelfRef.spi_tb__DOT__peripheral_byte_rx 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__rx_bit_count))) 
                        & (IData)(vlSelfRef.spi_tb__DOT__peripheral_byte_rx)) 
                       | (0x00ffU & ((IData)(vlSelfRef.spi_tb__DOT__spi_pico) 
                                     << (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__rx_bit_count))));
                __Vdly__spi_tb__DOT__spi_controller__DOT__rx_bit_count 
                    = (7U & ((IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__rx_bit_count) 
                             - (IData)(1U)));
                if ((0U == (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__rx_bit_count))) {
                    vlSelfRef.spi_tb__DOT__peripheral_byte_rx_dv = 0U;
                }
            }
            if (vlSelfRef.spi_tb__DOT__spi_controller__DOT__leading_edge) {
                vlSelfRef.spi_tb__DOT__spi_pico = (1U 
                                                   & ((IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_data) 
                                                      >> (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_bit_count)));
                __Vdly__spi_tb__DOT__spi_controller__DOT__tx_bit_count 
                    = (7U & ((IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_bit_count) 
                             - (IData)(1U)));
            }
        }
        if (vlSelfRef.spi_tb__DOT__controller_byte_tx_dv) {
            vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_data 
                = vlSelfRef.spi_tb__DOT__controller_byte_tx;
        }
        vlSelfRef.spi_tb__DOT__spi_controller__DOT__trailing_edge = 0U;
        vlSelfRef.spi_tb__DOT__spi_controller__DOT__leading_edge = 0U;
        if (vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_dv) {
            vlSelfRef.spi_tb__DOT__tx_data_ready = 0U;
            __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk_edges = 0x10U;
        } else if ((0U < (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk_edges))) {
            vlSelfRef.spi_tb__DOT__tx_data_ready = 0U;
            if ((7U == (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__clk_count))) {
                __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk_edges 
                    = (0x0000001fU & ((IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk_edges) 
                                      - (IData)(1U)));
                __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk 
                    = (1U & (~ (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk)));
                __Vdly__spi_tb__DOT__spi_controller__DOT__clk_count = 0U;
                vlSelfRef.spi_tb__DOT__spi_controller__DOT__trailing_edge = 1U;
            } else if ((3U == (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__clk_count))) {
                __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk_edges 
                    = (0x0000001fU & ((IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk_edges) 
                                      - (IData)(1U)));
                __Vdly__spi_tb__DOT__spi_controller__DOT__clk_count 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__clk_count)));
                __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk 
                    = (1U & (~ (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk)));
                vlSelfRef.spi_tb__DOT__spi_controller__DOT__leading_edge = 1U;
            } else {
                __Vdly__spi_tb__DOT__spi_controller__DOT__clk_count 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__clk_count)));
            }
        } else {
            vlSelfRef.spi_tb__DOT__tx_data_ready = 1U;
        }
    } else {
        __Vdly__spi_tb__DOT__spi_controller__DOT__rx_bit_count = 7U;
        vlSelfRef.spi_tb__DOT__peripheral_byte_rx = 0U;
        vlSelfRef.spi_tb__DOT__peripheral_byte_rx_dv = 0U;
        __Vdly__spi_tb__DOT__spi_controller__DOT__tx_bit_count = 7U;
        vlSelfRef.spi_tb__DOT__spi_pico = 0U;
        vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_data = 0U;
        __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk = 1U;
        __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk_edges = 0U;
        __Vdly__spi_tb__DOT__spi_controller__DOT__clk_count = 0U;
        vlSelfRef.spi_tb__DOT__tx_data_ready = 1U;
    }
    vlSelfRef.spi_tb__DOT__spi_controller__DOT__rx_bit_count 
        = __Vdly__spi_tb__DOT__spi_controller__DOT__rx_bit_count;
    vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_bit_count 
        = __Vdly__spi_tb__DOT__spi_controller__DOT__tx_bit_count;
    vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk_edges 
        = __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk_edges;
    vlSelfRef.spi_tb__DOT__spi_controller__DOT__spi_clk 
        = __Vdly__spi_tb__DOT__spi_controller__DOT__spi_clk;
    vlSelfRef.spi_tb__DOT__spi_controller__DOT__clk_count 
        = __Vdly__spi_tb__DOT__spi_controller__DOT__clk_count;
    vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_dv 
        = ((IData)(vlSelfRef.spi_tb__DOT__rst) && (IData)(vlSelfRef.spi_tb__DOT__controller_byte_tx_dv));
}

void Vspi_tb___024root___eval_nba(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_nba\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vspi_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vspi_tb___024root___timing_commit(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___timing_commit\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h453e51df__0.commit(
                                                   "@(posedge spi_tb.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h55b95fb1__0.commit(
                                                   "@(posedge spi_tb.tx_data_ready)");
    }
}

void Vspi_tb___024root___timing_resume(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___timing_resume\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h453e51df__0.resume(
                                                   "@(posedge spi_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h55b95fb1__0.resume(
                                                   "@(posedge spi_tb.tx_data_ready)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vspi_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vspi_tb___024root___eval_phase__act(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_phase__act\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vspi_tb___024root___eval_triggers__act(vlSelf);
    Vspi_tb___024root___timing_commit(vlSelf);
    Vspi_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vspi_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vspi_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vspi_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vspi_tb___024root___eval_phase__nba(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_phase__nba\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vspi_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vspi_tb___024root___eval_nba(vlSelf);
        Vspi_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vspi_tb___024root___eval(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vspi_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("Test/spi_tb.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vspi_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("Test/spi_tb.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vspi_tb___024root___eval_phase__act(vlSelf));
    } while (Vspi_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vspi_tb___024root___eval_debug_assertions(Vspi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root___eval_debug_assertions\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

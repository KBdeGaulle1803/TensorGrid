// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_tb__Syms.h"


void Vspi_tb___024root__trace_chg_0_sub_0(Vspi_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vspi_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root__trace_chg_0\n"); );
    // Body
    Vspi_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_tb___024root*>(voidSelf);
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vspi_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_tb___024root__trace_chg_0_sub_0(Vspi_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root__trace_chg_0_sub_0\n"); );
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.spi_tb__DOT__spi_clk));
        bufp->chgBit(oldp+1,(vlSelfRef.spi_tb__DOT__spi_pico));
        bufp->chgCData(oldp+2,(vlSelfRef.spi_tb__DOT__peripheral_byte_rx),8);
        bufp->chgBit(oldp+3,(vlSelfRef.spi_tb__DOT__peripheral_byte_rx_dv));
        bufp->chgCData(oldp+4,(vlSelfRef.spi_tb__DOT__spi_chip_select),8);
        bufp->chgCData(oldp+5,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__state),2);
        bufp->chgCData(oldp+6,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__TX_Count),2);
        bufp->chgBit(oldp+7,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_ready));
        bufp->chgCData(oldp+8,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__r_CS_Inactive_Count),2);
        bufp->chgCData(oldp+9,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__controller__DOT__spi_clk_edges),5);
        bufp->chgBit(oldp+10,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__controller__DOT__spi_clk));
        bufp->chgCData(oldp+11,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__controller__DOT__clk_count),4);
        bufp->chgBit(oldp+12,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__controller__DOT__leading_edge));
        bufp->chgBit(oldp+13,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__controller__DOT__trailing_edge));
        bufp->chgCData(oldp+14,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__controller__DOT__tx_data),8);
        bufp->chgBit(oldp+15,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__controller__DOT__tx_dv));
        bufp->chgCData(oldp+16,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__controller__DOT__tx_bit_count),3);
        bufp->chgCData(oldp+17,(vlSelfRef.spi_tb__DOT__spi_controller__DOT__controller__DOT__rx_bit_count),3);
    }
    bufp->chgBit(oldp+18,(vlSelfRef.spi_tb__DOT__rst));
    bufp->chgBit(oldp+19,(vlSelfRef.spi_tb__DOT__clk));
    bufp->chgCData(oldp+20,(vlSelfRef.spi_tb__DOT__controller_byte_tx),8);
    bufp->chgBit(oldp+21,(vlSelfRef.spi_tb__DOT__controller_byte_tx_dv));
    bufp->chgBit(oldp+22,(((~ (IData)(vlSelfRef.spi_tb__DOT__controller_byte_tx_dv)) 
                           & ((0U == (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__state)) 
                              | ((1U == (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__state)) 
                                 & ((IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__tx_ready) 
                                    & (0U < (IData)(vlSelfRef.spi_tb__DOT__spi_controller__DOT__TX_Count))))))));
    bufp->chgCData(oldp+23,(vlSelfRef.spi_tb__DOT__active_chip),3);
}

void Vspi_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_tb___024root__trace_cleanup\n"); );
    // Body
    Vspi_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_tb___024root*>(voidSelf);
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

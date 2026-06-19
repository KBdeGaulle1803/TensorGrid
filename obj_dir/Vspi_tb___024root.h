// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_tb.h for the primary calling header

#ifndef VERILATED_VSPI_TB___024ROOT_H_
#define VERILATED_VSPI_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vspi_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ spi_tb__DOT__rst;
    CData/*0:0*/ spi_tb__DOT__spi_clk;
    CData/*0:0*/ spi_tb__DOT__clk;
    CData/*0:0*/ spi_tb__DOT__spi_pico;
    CData/*7:0*/ spi_tb__DOT__controller_byte_tx;
    CData/*0:0*/ spi_tb__DOT__controller_byte_tx_dv;
    CData/*0:0*/ spi_tb__DOT__tx_data_ready;
    CData/*7:0*/ spi_tb__DOT__peripheral_byte_rx;
    CData/*0:0*/ spi_tb__DOT__peripheral_byte_rx_dv;
    CData/*2:0*/ spi_tb__DOT__active_chip;
    CData/*7:0*/ spi_tb__DOT__spi_chip_select;
    CData/*1:0*/ spi_tb__DOT__spi_controller__DOT__tx_count_in;
    CData/*1:0*/ spi_tb__DOT__spi_controller__DOT__state;
    CData/*1:0*/ spi_tb__DOT__spi_controller__DOT__TX_Count;
    CData/*0:0*/ spi_tb__DOT__spi_controller__DOT__tx_ready;
    CData/*1:0*/ spi_tb__DOT__spi_controller__DOT__r_CS_Inactive_Count;
    CData/*0:0*/ spi_tb__DOT__spi_controller__DOT__w_Master_Ready;
    CData/*4:0*/ spi_tb__DOT__spi_controller__DOT__controller__DOT__spi_clk_edges;
    CData/*0:0*/ spi_tb__DOT__spi_controller__DOT__controller__DOT__spi_clk;
    CData/*3:0*/ spi_tb__DOT__spi_controller__DOT__controller__DOT__clk_count;
    CData/*0:0*/ spi_tb__DOT__spi_controller__DOT__controller__DOT__leading_edge;
    CData/*0:0*/ spi_tb__DOT__spi_controller__DOT__controller__DOT__trailing_edge;
    CData/*7:0*/ spi_tb__DOT__spi_controller__DOT__controller__DOT__tx_data;
    CData/*0:0*/ spi_tb__DOT__spi_controller__DOT__controller__DOT__tx_dv;
    CData/*2:0*/ spi_tb__DOT__spi_controller__DOT__controller__DOT__tx_bit_count;
    CData/*2:0*/ spi_tb__DOT__spi_controller__DOT__controller__DOT__rx_bit_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_tb__DOT__tx_data_ready__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h453e51df__0;
    VlTriggerScheduler __VtrigSched_h55b95fb1__0;

    // INTERNAL VARIABLES
    Vspi_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_tb___024root(Vspi_tb__Syms* symsp, const char* v__name);
    ~Vspi_tb___024root();
    VL_UNCOPYABLE(Vspi_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

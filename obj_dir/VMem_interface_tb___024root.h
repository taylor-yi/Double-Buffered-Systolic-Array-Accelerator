// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMem_interface_tb.h for the primary calling header

#ifndef VERILATED_VMEM_INTERFACE_TB___024ROOT_H_
#define VERILATED_VMEM_INTERFACE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VMem_interface_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMem_interface_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Mem_interface_tb__DOT__clk;
    CData/*0:0*/ Mem_interface_tb__DOT__rst_n;
    CData/*0:0*/ Mem_interface_tb__DOT__load_slot;
    CData/*0:0*/ Mem_interface_tb__DOT__feed;
    CData/*0:0*/ Mem_interface_tb__DOT__row_slot;
    CData/*0:0*/ Mem_interface_tb__DOT__en;
    CData/*0:0*/ Mem_interface_tb__DOT__done;
    CData/*1:0*/ Mem_interface_tb__DOT__row_idx;
    CData/*1:0*/ Mem_interface_tb__DOT__entry_valid;
    CData/*0:0*/ Mem_interface_tb__DOT__in_valid;
    CData/*0:0*/ Mem_interface_tb__DOT__dut__DOT__wr_ptr;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Mem_interface_tb__DOT__clk__0;
    VlWide<3>/*89:0*/ Mem_interface_tb__DOT__results_packed;
    IData/*31:0*/ Mem_interface_tb__DOT__checks;
    IData/*31:0*/ Mem_interface_tb__DOT__errors;
    IData/*31:0*/ Mem_interface_tb__DOT__test_errors;
    IData/*31:0*/ Mem_interface_tb__DOT__m;
    IData/*31:0*/ __Vi;
    QData/*35:0*/ Mem_interface_tb__DOT__a_packed;
    QData/*35:0*/ Mem_interface_tb__DOT__b_packed;
    VlUnpacked<CData/*3:0*/, 3> Mem_interface_tb__DOT__a_skewed;
    VlUnpacked<CData/*0:0*/, 3> Mem_interface_tb__DOT__skewed_slot;
    VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> Mem_interface_tb__DOT__b_out;
    VlUnpacked<SData/*9:0*/, 3> Mem_interface_tb__DOT__results_in;
    VlUnpacked<SData/*9:0*/, 3> Mem_interface_tb__DOT____Vcellinp__dut__results_in;
    VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> Mem_interface_tb__DOT____Vcellout__dut__b_out;
    VlUnpacked<CData/*0:0*/, 3> Mem_interface_tb__DOT____Vcellout__dut__skewed_slot;
    VlUnpacked<CData/*3:0*/, 3> Mem_interface_tb__DOT____Vcellout__dut__a_skewed;
    VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> Mem_interface_tb__DOT__A;
    VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> Mem_interface_tb__DOT__A2;
    VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> Mem_interface_tb__DOT__B;
    VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> Mem_interface_tb__DOT__B2;
    VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> Mem_interface_tb__DOT__dut__DOT__a_internal;
    VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> Mem_interface_tb__DOT__dut__DOT__b_internal;
    VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2> Mem_interface_tb__DOT__dut__DOT__A_buf;
    VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2> Mem_interface_tb__DOT__dut__DOT__B_buf;
    VlUnpacked<CData/*3:0*/, 3> Mem_interface_tb__DOT__dut__DOT__a_row;
    VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> Mem_interface_tb__DOT__dut__DOT__skew_a;
    VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3> Mem_interface_tb__DOT__dut__DOT__results_internal;
    VlUnpacked<SData/*9:0*/, 3> Mem_interface_tb__DOT__dut__DOT__deskewed;
    VlUnpacked<CData/*0:0*/, 6> Mem_interface_tb__DOT__dut__DOT__mark;
    VlUnpacked<CData/*3:0*/, 1> Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly;
    VlUnpacked<CData/*0:0*/, 1> Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly;
    VlUnpacked<CData/*3:0*/, 2> Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly;
    VlUnpacked<CData/*0:0*/, 2> Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly;
    VlUnpacked<SData/*9:0*/, 2> Mem_interface_tb__DOT__dut__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly;
    VlUnpacked<SData/*9:0*/, 1> Mem_interface_tb__DOT__dut__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_habbe9772__0;

    // INTERNAL VARIABLES
    VMem_interface_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VMem_interface_tb___024root(VMem_interface_tb__Syms* symsp, const char* namep);
    ~VMem_interface_tb___024root();
    VL_UNCOPYABLE(VMem_interface_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

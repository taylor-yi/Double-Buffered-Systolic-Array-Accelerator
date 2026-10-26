// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_tb.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_TB___024ROOT_H_
#define VERILATED_VSYSTOLIC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsystolic_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ systolic_tb__DOT__rst_n;
        CData/*0:0*/ systolic_tb__DOT__clk;
        CData/*3:0*/ systolic_tb__DOT__a11;
        CData/*3:0*/ systolic_tb__DOT__a12;
        CData/*3:0*/ systolic_tb__DOT__a13;
        CData/*3:0*/ systolic_tb__DOT__a21;
        CData/*3:0*/ systolic_tb__DOT__a22;
        CData/*3:0*/ systolic_tb__DOT__a23;
        CData/*3:0*/ systolic_tb__DOT__a31;
        CData/*3:0*/ systolic_tb__DOT__a32;
        CData/*3:0*/ systolic_tb__DOT__a33;
        CData/*3:0*/ systolic_tb__DOT__b11;
        CData/*3:0*/ systolic_tb__DOT__b12;
        CData/*3:0*/ systolic_tb__DOT__b13;
        CData/*3:0*/ systolic_tb__DOT__b21;
        CData/*3:0*/ systolic_tb__DOT__b22;
        CData/*3:0*/ systolic_tb__DOT__b23;
        CData/*3:0*/ systolic_tb__DOT__b31;
        CData/*3:0*/ systolic_tb__DOT__b32;
        CData/*3:0*/ systolic_tb__DOT__b33;
        CData/*0:0*/ systolic_tb__DOT__in_valid;
        CData/*1:0*/ systolic_tb__DOT__dut__DOT__entry_valid;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w;
    };
    struct {
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w;
        CData/*0:0*/ systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        CData/*2:0*/ systolic_tb__DOT__dut__DOT__controlla__DOT__state;
        CData/*1:0*/ systolic_tb__DOT__dut__DOT__controlla__DOT__cycle_count;
        CData/*6:0*/ __VdfgRegularize_hebeb780c_0_0;
        CData/*6:0*/ __Vsampled_TOP____VdfgRegularize_hebeb780c_0_0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0;
        SData/*9:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result;
        SData/*9:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result;
        SData/*9:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result;
        SData/*9:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result;
        SData/*9:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result;
        SData/*9:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result;
        SData/*9:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result;
        SData/*9:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result;
        SData/*9:0*/ systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result;
        IData/*31:0*/ systolic_tb__DOT__errors;
        IData/*31:0*/ systolic_tb__DOT__checks;
        IData/*31:0*/ systolic_tb__DOT__test_errors;
        IData/*31:0*/ systolic_tb__DOT__jobs;
        IData/*31:0*/ systolic_tb__DOT__gap;
        IData/*31:0*/ systolic_tb__DOT__outs_seen;
        IData/*31:0*/ systolic_tb__DOT__unnamedblk3__DOT__fd;
        IData/*31:0*/ systolic_tb__DOT__unnamedblk3__DOT__num_tests;
        IData/*31:0*/ systolic_tb__DOT__unnamedblk3__DOT__n;
        IData/*31:0*/ systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k;
        IData/*31:0*/ systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__w;
        VlWide<3>/*89:0*/ systolic_tb__DOT__dut__DOT__results_packed;
        IData/*31:0*/ __Vi;
        QData/*35:0*/ systolic_tb__DOT__dut__DOT__memi__DOT__a_packed;
        QData/*35:0*/ systolic_tb__DOT__dut__DOT__memi__DOT__b_packed;
        VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2> systolic_tb__DOT__A;
        VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2> systolic_tb__DOT__B;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 3>, 2> systolic_tb__DOT__C_exp;
        VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3> systolic_tb__DOT__C_got;
        VlUnpacked<CData/*3:0*/, 3> systolic_tb__DOT__dut__DOT__a_skewed;
        VlUnpacked<CData/*0:0*/, 3> systolic_tb__DOT__dut__DOT__slot_data;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> systolic_tb__DOT__dut__DOT__b_wires;
        VlUnpacked<SData/*9:0*/, 3> systolic_tb__DOT__dut__DOT__result_matrix;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> systolic_tb__DOT__dut__DOT__array__DOT__a_wire;
        VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3> systolic_tb__DOT__dut__DOT__array__DOT__p_wire;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 3>, 3> systolic_tb__DOT__dut__DOT__array__DOT__slot_wire;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> systolic_tb__DOT__dut__DOT__memi__DOT__a_internal;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> systolic_tb__DOT__dut__DOT__memi__DOT__b_internal;
        VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2> systolic_tb__DOT__dut__DOT__memi__DOT__A_buf;
        VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2> systolic_tb__DOT__dut__DOT__memi__DOT__B_buf;
        VlUnpacked<CData/*3:0*/, 3> systolic_tb__DOT__dut__DOT__memi__DOT__a_row;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> systolic_tb__DOT__dut__DOT__memi__DOT__skew_a;
        VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3> systolic_tb__DOT__dut__DOT__memi__DOT__results_internal;
        VlUnpacked<SData/*9:0*/, 3> systolic_tb__DOT__dut__DOT__memi__DOT__deskewed;
        VlUnpacked<CData/*0:0*/, 6> systolic_tb__DOT__dut__DOT__memi__DOT__mark;
        VlUnpacked<CData/*3:0*/, 1> systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly;
        VlUnpacked<CData/*0:0*/, 1> systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly;
        VlUnpacked<CData/*3:0*/, 2> systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly;
        VlUnpacked<CData/*0:0*/, 2> systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly;
        VlUnpacked<SData/*9:0*/, 2> systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly;
        VlUnpacked<SData/*9:0*/, 1> systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly;
        VlUnpacked<CData/*0:0*/, 128> __Vsampled_TOP__TABLE_h08a72cc3_0;
        VlUnpacked<CData/*0:0*/, 128> __Vsampled_TOP__TABLE_h028f018c_0;
        VlUnpacked<CData/*0:0*/, 128> __Vsampled_TOP__TABLE_h82a00311_0;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 3>, 3> __Vsampled_TOP__systolic_tb__DOT__dut__DOT__array__DOT__slot_wire;
        VlUnpacked<CData/*0:0*/, 2> __Vsampled_TOP__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 1> __Vsampled_TOP__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly;
        VlUnpacked<CData/*0:0*/, 128> __Vsampled_TOP__TABLE_h757529b2_0;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    std::string systolic_tb__DOT__unnamedblk3__DOT__path;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h174e5de0__0;

    // INTERNAL VARIABLES
    Vsystolic_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsystolic_tb___024root(Vsystolic_tb__Syms* symsp, const char* namep);
    ~Vsystolic_tb___024root();
    VL_UNCOPYABLE(Vsystolic_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

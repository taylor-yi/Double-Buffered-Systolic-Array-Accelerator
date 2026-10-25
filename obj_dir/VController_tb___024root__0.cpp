// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VController_tb.h for the primary calling header

#include "VController_tb__pch.h"

VlCoroutine VController_tb___024root___eval_initial__TOP__Vtiming__0(VController_tb___024root* vlSelf);
VlCoroutine VController_tb___024root___eval_initial__TOP__Vtiming__1(VController_tb___024root* vlSelf);

void VController_tb___024root___eval_initial(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_initial\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("dump.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VController_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VController_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void VController_tb___024root___eval_sample(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_sample\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VController_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VController_tb___024root___eval_ico(VController_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_ico\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VController_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void VController_tb___024root___timing_ready(VController_tb___024root* vlSelf);
void VController_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void VController_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VController_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void VController_tb___024root___timing_resume(VController_tb___024root* vlSelf);
void VController_tb___024root___act_sequent__TOP__0(VController_tb___024root* vlSelf);

bool VController_tb___024root___eval_act(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_act\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.Controller_tb__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Controller_tb__DOT__clk__0)) 
                                                          << 2U) 
                                                         | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.Controller_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Controller_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__Controller_tb__DOT__clk__0 
            = vlSelfRef.Controller_tb__DOT__clk;
    }
    VController_tb___024root___timing_ready(vlSelf);
    VController_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VController_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VController_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VController_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VController_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                VController_tb___024root___act_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool VController_tb___024root___eval_inact(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_inact\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("Controller_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VController_tb___024root___nba_sequent__TOP__0(VController_tb___024root* vlSelf);
void VController_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool VController_tb___024root___eval_nba(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_nba\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VController_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VController_tb___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[5U] = 1U;
            }
            if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VController_tb___024root___act_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[6U] = 1U;
            }
        }
        VController_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool VController_tb___024root___eval_obs(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_obs\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VController_tb___024root___eval_react(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_react\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void VController_tb___024root___eval_postponed(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_postponed\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine VController_tb___024root___eval_initial__TOP__Vtiming__0(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Controller_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "Controller_tb.sv", 
                                             17);
        vlSelfRef.Controller_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.Controller_tb__DOT__clk)));
    }
    co_return;
}

void VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(VController_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h0cc0fcf8_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h028f018c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_hbabea407_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h757529b2_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h0c797d14_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_hb7eea91c_0;
extern const VlUnpacked<CData/*1:0*/, 128> VController_tb__ConstPool__TABLE_h35b5d552_0;

VlCoroutine VController_tb___024root___eval_initial__TOP__Vtiming__1(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ Controller_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    Controller_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ Controller_tb__DOT__unnamedblk8__DOT__t;
    Controller_tb__DOT__unnamedblk8__DOT__t = 0;
    IData/*31:0*/ Controller_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    Controller_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ Controller_tb__DOT__unnamedblk9__DOT__t;
    Controller_tb__DOT__unnamedblk9__DOT__t = 0;
    IData/*31:0*/ Controller_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    Controller_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ Controller_tb__DOT__unnamedblk10__DOT__t;
    Controller_tb__DOT__unnamedblk10__DOT__t = 0;
    IData/*31:0*/ Controller_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    Controller_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ Controller_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    Controller_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ Controller_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    Controller_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__0__t;
    __Vtask_Controller_tb__DOT__check_ctrl__0__t = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__0__ew;
    __Vtask_Controller_tb__DOT__check_ctrl__0__ew = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__0__els;
    __Vtask_Controller_tb__DOT__check_ctrl__0__els = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__0__een;
    __Vtask_Controller_tb__DOT__check_ctrl__0__een = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__0__efd;
    __Vtask_Controller_tb__DOT__check_ctrl__0__efd = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__0__ers;
    __Vtask_Controller_tb__DOT__check_ctrl__0__ers = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__0__eri;
    __Vtask_Controller_tb__DOT__check_ctrl__0__eri = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__0__edn;
    __Vtask_Controller_tb__DOT__check_ctrl__0__edn = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__0__est;
    __Vtask_Controller_tb__DOT__check_ctrl__0__est = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_results__1__t;
    __Vtask_Controller_tb__DOT__check_results__1__t = 0;
    CData/*0:0*/ __Vtask_Controller_tb__DOT__check_results__1__two_jobs;
    __Vtask_Controller_tb__DOT__check_results__1__two_jobs = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_results__1__m;
    __Vtask_Controller_tb__DOT__check_results__1__m = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__2__t;
    __Vtask_Controller_tb__DOT__check_ctrl__2__t = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__2__ew;
    __Vtask_Controller_tb__DOT__check_ctrl__2__ew = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__2__els;
    __Vtask_Controller_tb__DOT__check_ctrl__2__els = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__2__een;
    __Vtask_Controller_tb__DOT__check_ctrl__2__een = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__2__efd;
    __Vtask_Controller_tb__DOT__check_ctrl__2__efd = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__2__ers;
    __Vtask_Controller_tb__DOT__check_ctrl__2__ers = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__2__eri;
    __Vtask_Controller_tb__DOT__check_ctrl__2__eri = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__2__edn;
    __Vtask_Controller_tb__DOT__check_ctrl__2__edn = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__2__est;
    __Vtask_Controller_tb__DOT__check_ctrl__2__est = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_results__3__t;
    __Vtask_Controller_tb__DOT__check_results__3__t = 0;
    CData/*0:0*/ __Vtask_Controller_tb__DOT__check_results__3__two_jobs;
    __Vtask_Controller_tb__DOT__check_results__3__two_jobs = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_results__3__m;
    __Vtask_Controller_tb__DOT__check_results__3__m = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__4__t;
    __Vtask_Controller_tb__DOT__check_ctrl__4__t = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__4__ew;
    __Vtask_Controller_tb__DOT__check_ctrl__4__ew = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__4__els;
    __Vtask_Controller_tb__DOT__check_ctrl__4__els = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__4__een;
    __Vtask_Controller_tb__DOT__check_ctrl__4__een = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__4__efd;
    __Vtask_Controller_tb__DOT__check_ctrl__4__efd = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__4__ers;
    __Vtask_Controller_tb__DOT__check_ctrl__4__ers = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__4__eri;
    __Vtask_Controller_tb__DOT__check_ctrl__4__eri = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__4__edn;
    __Vtask_Controller_tb__DOT__check_ctrl__4__edn = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_ctrl__4__est;
    __Vtask_Controller_tb__DOT__check_ctrl__4__est = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_results__5__t;
    __Vtask_Controller_tb__DOT__check_results__5__t = 0;
    CData/*0:0*/ __Vtask_Controller_tb__DOT__check_results__5__two_jobs;
    __Vtask_Controller_tb__DOT__check_results__5__two_jobs = 0;
    IData/*31:0*/ __Vtask_Controller_tb__DOT__check_results__5__m;
    __Vtask_Controller_tb__DOT__check_results__5__m = 0;
    std::string __Vtemp_55;
    std::string __Vtemp_56;
    std::string __Vtemp_57;
    // Body
    vlSelfRef.Controller_tb__DOT__A[0U][0U] = 1U;
    vlSelfRef.Controller_tb__DOT__A[0U][1U] = 2U;
    vlSelfRef.Controller_tb__DOT__A[0U][2U] = 3U;
    vlSelfRef.Controller_tb__DOT__A[1U][0U] = 4U;
    vlSelfRef.Controller_tb__DOT__A[1U][1U] = 5U;
    vlSelfRef.Controller_tb__DOT__A[1U][2U] = 6U;
    vlSelfRef.Controller_tb__DOT__A[2U][0U] = 7U;
    vlSelfRef.Controller_tb__DOT__A[2U][1U] = 8U;
    vlSelfRef.Controller_tb__DOT__A[2U][2U] = 9U;
    vlSelfRef.Controller_tb__DOT__A2[0U][0U] = 9U;
    vlSelfRef.Controller_tb__DOT__A2[0U][1U] = 8U;
    vlSelfRef.Controller_tb__DOT__A2[0U][2U] = 7U;
    vlSelfRef.Controller_tb__DOT__A2[1U][0U] = 6U;
    vlSelfRef.Controller_tb__DOT__A2[1U][1U] = 5U;
    vlSelfRef.Controller_tb__DOT__A2[1U][2U] = 4U;
    vlSelfRef.Controller_tb__DOT__A2[2U][0U] = 3U;
    vlSelfRef.Controller_tb__DOT__A2[2U][1U] = 2U;
    vlSelfRef.Controller_tb__DOT__A2[2U][2U] = 1U;
    vlSelfRef.Controller_tb__DOT__W[0U][0U] = 1U;
    vlSelfRef.Controller_tb__DOT__W[0U][1U] = 0U;
    vlSelfRef.Controller_tb__DOT__W[0U][2U] = 2U;
    vlSelfRef.Controller_tb__DOT__W[1U][0U] = 3U;
    vlSelfRef.Controller_tb__DOT__W[1U][1U] = 1U;
    vlSelfRef.Controller_tb__DOT__W[1U][2U] = 0U;
    vlSelfRef.Controller_tb__DOT__W[2U][0U] = 0U;
    vlSelfRef.Controller_tb__DOT__W[2U][1U] = 2U;
    vlSelfRef.Controller_tb__DOT__W[2U][2U] = 1U;
    vlSelfRef.Controller_tb__DOT__W2[0U][0U] = 2U;
    vlSelfRef.Controller_tb__DOT__W2[0U][1U] = 1U;
    vlSelfRef.Controller_tb__DOT__W2[0U][2U] = 0U;
    vlSelfRef.Controller_tb__DOT__W2[1U][0U] = 0U;
    vlSelfRef.Controller_tb__DOT__W2[1U][1U] = 3U;
    vlSelfRef.Controller_tb__DOT__W2[1U][2U] = 1U;
    vlSelfRef.Controller_tb__DOT__W2[2U][0U] = 1U;
    vlSelfRef.Controller_tb__DOT__W2[2U][1U] = 0U;
    vlSelfRef.Controller_tb__DOT__W2[2U][2U] = 2U;
    vlSelfRef.Controller_tb__DOT__C_exp[0U][0U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][0U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp[0U][0U] = (vlSelfRef.Controller_tb__DOT__C_exp[0U][0U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[0U][0U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[0U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][0U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[0U][0U] 
         + (vlSelfRef.Controller_tb__DOT__A2[0U][0U] 
            * vlSelfRef.Controller_tb__DOT__W2[0U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp[0U][0U] = (vlSelfRef.Controller_tb__DOT__C_exp[0U][0U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[0U][1U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[1U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][0U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[0U][0U] 
         + (vlSelfRef.Controller_tb__DOT__A2[0U][1U] 
            * vlSelfRef.Controller_tb__DOT__W2[1U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp[0U][0U] = (vlSelfRef.Controller_tb__DOT__C_exp[0U][0U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[0U][2U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[2U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][0U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[0U][0U] 
         + (vlSelfRef.Controller_tb__DOT__A2[0U][2U] 
            * vlSelfRef.Controller_tb__DOT__W2[2U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp[0U][1U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][1U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp[0U][1U] = (vlSelfRef.Controller_tb__DOT__C_exp[0U][1U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[0U][0U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[0U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][1U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[0U][1U] 
         + (vlSelfRef.Controller_tb__DOT__A2[0U][0U] 
            * vlSelfRef.Controller_tb__DOT__W2[0U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp[0U][1U] = (vlSelfRef.Controller_tb__DOT__C_exp[0U][1U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[0U][1U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[1U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][1U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[0U][1U] 
         + (vlSelfRef.Controller_tb__DOT__A2[0U][1U] 
            * vlSelfRef.Controller_tb__DOT__W2[1U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp[0U][1U] = (vlSelfRef.Controller_tb__DOT__C_exp[0U][1U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[0U][2U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[2U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][1U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[0U][1U] 
         + (vlSelfRef.Controller_tb__DOT__A2[0U][2U] 
            * vlSelfRef.Controller_tb__DOT__W2[2U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp[0U][2U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][2U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp[0U][2U] = (vlSelfRef.Controller_tb__DOT__C_exp[0U][2U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[0U][0U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[0U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][2U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[0U][2U] 
         + (vlSelfRef.Controller_tb__DOT__A2[0U][0U] 
            * vlSelfRef.Controller_tb__DOT__W2[0U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp[0U][2U] = (vlSelfRef.Controller_tb__DOT__C_exp[0U][2U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[0U][1U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[1U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][2U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[0U][2U] 
         + (vlSelfRef.Controller_tb__DOT__A2[0U][1U] 
            * vlSelfRef.Controller_tb__DOT__W2[1U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp[0U][2U] = (vlSelfRef.Controller_tb__DOT__C_exp[0U][2U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[0U][2U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[2U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[0U][2U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[0U][2U] 
         + (vlSelfRef.Controller_tb__DOT__A2[0U][2U] 
            * vlSelfRef.Controller_tb__DOT__W2[2U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp[1U][0U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][0U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp[1U][0U] = (vlSelfRef.Controller_tb__DOT__C_exp[1U][0U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[1U][0U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[0U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][0U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[1U][0U] 
         + (vlSelfRef.Controller_tb__DOT__A2[1U][0U] 
            * vlSelfRef.Controller_tb__DOT__W2[0U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp[1U][0U] = (vlSelfRef.Controller_tb__DOT__C_exp[1U][0U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[1U][1U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[1U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][0U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[1U][0U] 
         + (vlSelfRef.Controller_tb__DOT__A2[1U][1U] 
            * vlSelfRef.Controller_tb__DOT__W2[1U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp[1U][0U] = (vlSelfRef.Controller_tb__DOT__C_exp[1U][0U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[1U][2U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[2U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][0U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[1U][0U] 
         + (vlSelfRef.Controller_tb__DOT__A2[1U][2U] 
            * vlSelfRef.Controller_tb__DOT__W2[2U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp[1U][1U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][1U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp[1U][1U] = (vlSelfRef.Controller_tb__DOT__C_exp[1U][1U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[1U][0U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[0U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][1U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[1U][1U] 
         + (vlSelfRef.Controller_tb__DOT__A2[1U][0U] 
            * vlSelfRef.Controller_tb__DOT__W2[0U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp[1U][1U] = (vlSelfRef.Controller_tb__DOT__C_exp[1U][1U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[1U][1U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[1U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][1U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[1U][1U] 
         + (vlSelfRef.Controller_tb__DOT__A2[1U][1U] 
            * vlSelfRef.Controller_tb__DOT__W2[1U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp[1U][1U] = (vlSelfRef.Controller_tb__DOT__C_exp[1U][1U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[1U][2U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[2U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][1U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[1U][1U] 
         + (vlSelfRef.Controller_tb__DOT__A2[1U][2U] 
            * vlSelfRef.Controller_tb__DOT__W2[2U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp[1U][2U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][2U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp[1U][2U] = (vlSelfRef.Controller_tb__DOT__C_exp[1U][2U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[1U][0U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[0U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][2U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[1U][2U] 
         + (vlSelfRef.Controller_tb__DOT__A2[1U][0U] 
            * vlSelfRef.Controller_tb__DOT__W2[0U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp[1U][2U] = (vlSelfRef.Controller_tb__DOT__C_exp[1U][2U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[1U][1U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[1U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][2U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[1U][2U] 
         + (vlSelfRef.Controller_tb__DOT__A2[1U][1U] 
            * vlSelfRef.Controller_tb__DOT__W2[1U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp[1U][2U] = (vlSelfRef.Controller_tb__DOT__C_exp[1U][2U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[1U][2U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[2U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[1U][2U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[1U][2U] 
         + (vlSelfRef.Controller_tb__DOT__A2[1U][2U] 
            * vlSelfRef.Controller_tb__DOT__W2[2U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp[2U][0U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][0U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp[2U][0U] = (vlSelfRef.Controller_tb__DOT__C_exp[2U][0U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[2U][0U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[0U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][0U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[2U][0U] 
         + (vlSelfRef.Controller_tb__DOT__A2[2U][0U] 
            * vlSelfRef.Controller_tb__DOT__W2[0U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp[2U][0U] = (vlSelfRef.Controller_tb__DOT__C_exp[2U][0U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[2U][1U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[1U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][0U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[2U][0U] 
         + (vlSelfRef.Controller_tb__DOT__A2[2U][1U] 
            * vlSelfRef.Controller_tb__DOT__W2[1U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp[2U][0U] = (vlSelfRef.Controller_tb__DOT__C_exp[2U][0U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[2U][2U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[2U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][0U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[2U][0U] 
         + (vlSelfRef.Controller_tb__DOT__A2[2U][2U] 
            * vlSelfRef.Controller_tb__DOT__W2[2U][0U]));
    vlSelfRef.Controller_tb__DOT__C_exp[2U][1U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][1U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp[2U][1U] = (vlSelfRef.Controller_tb__DOT__C_exp[2U][1U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[2U][0U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[0U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][1U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[2U][1U] 
         + (vlSelfRef.Controller_tb__DOT__A2[2U][0U] 
            * vlSelfRef.Controller_tb__DOT__W2[0U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp[2U][1U] = (vlSelfRef.Controller_tb__DOT__C_exp[2U][1U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[2U][1U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[1U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][1U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[2U][1U] 
         + (vlSelfRef.Controller_tb__DOT__A2[2U][1U] 
            * vlSelfRef.Controller_tb__DOT__W2[1U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp[2U][1U] = (vlSelfRef.Controller_tb__DOT__C_exp[2U][1U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[2U][2U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[2U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][1U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[2U][1U] 
         + (vlSelfRef.Controller_tb__DOT__A2[2U][2U] 
            * vlSelfRef.Controller_tb__DOT__W2[2U][1U]));
    vlSelfRef.Controller_tb__DOT__C_exp[2U][2U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][2U] = 0U;
    vlSelfRef.Controller_tb__DOT__C_exp[2U][2U] = (vlSelfRef.Controller_tb__DOT__C_exp[2U][2U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[2U][0U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[0U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][2U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[2U][2U] 
         + (vlSelfRef.Controller_tb__DOT__A2[2U][0U] 
            * vlSelfRef.Controller_tb__DOT__W2[0U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp[2U][2U] = (vlSelfRef.Controller_tb__DOT__C_exp[2U][2U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[2U][1U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[1U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][2U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[2U][2U] 
         + (vlSelfRef.Controller_tb__DOT__A2[2U][1U] 
            * vlSelfRef.Controller_tb__DOT__W2[1U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp[2U][2U] = (vlSelfRef.Controller_tb__DOT__C_exp[2U][2U] 
                                                   + 
                                                   (vlSelfRef.Controller_tb__DOT__A[2U][2U] 
                                                    * vlSelfRef.Controller_tb__DOT__W[2U][2U]));
    vlSelfRef.Controller_tb__DOT__C_exp2[2U][2U] = 
        (vlSelfRef.Controller_tb__DOT__C_exp2[2U][2U] 
         + (vlSelfRef.Controller_tb__DOT__A2[2U][2U] 
            * vlSelfRef.Controller_tb__DOT__W2[2U][2U]));
    vlSelfRef.Controller_tb__DOT__rst_n = 0U;
    vlSelfRef.Controller_tb__DOT__start = 0U;
    Controller_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, Controller_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                             "@(negedge Controller_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge Controller_tb.clk)", 
                                                             "Controller_tb.sv", 
                                                             198);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Controller_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (Controller_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.Controller_tb__DOT__rst_n = 1U;
    vlSelfRef.Controller_tb__DOT__test_errors = vlSelfRef.Controller_tb__DOT__errors;
    vlSelfRef.Controller_tb__DOT__push0 = 1U;
    vlSelfRef.Controller_tb__DOT__push1 = 1U;
    Controller_tb__DOT__unnamedblk8__DOT__t = 0U;
    while (VL_GTS_III(32, 0x0000000eU, Controller_tb__DOT__unnamedblk8__DOT__t)) {
        VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                             "@(negedge Controller_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge Controller_tb.clk)", 
                                                             "Controller_tb.sv", 
                                                             208);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if ((0x0dU >= (0x0000000fU & Controller_tb__DOT__unnamedblk8__DOT__t))) {
            __Vtask_Controller_tb__DOT__check_ctrl__0__est 
                = vlSelfRef.Controller_tb__DOT__e_state
                [(0x0000000fU & Controller_tb__DOT__unnamedblk8__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__0__edn 
                = vlSelfRef.Controller_tb__DOT__e_done
                [(0x0000000fU & Controller_tb__DOT__unnamedblk8__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__0__eri 
                = vlSelfRef.Controller_tb__DOT__e_row_idx
                [(0x0000000fU & Controller_tb__DOT__unnamedblk8__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__0__ers 
                = vlSelfRef.Controller_tb__DOT__e_row_slot
                [(0x0000000fU & Controller_tb__DOT__unnamedblk8__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__0__efd 
                = vlSelfRef.Controller_tb__DOT__e_feed
                [(0x0000000fU & Controller_tb__DOT__unnamedblk8__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__0__een 
                = vlSelfRef.Controller_tb__DOT__e_en
                [(0x0000000fU & Controller_tb__DOT__unnamedblk8__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__0__els 
                = vlSelfRef.Controller_tb__DOT__e_load_slot
                [(0x0000000fU & Controller_tb__DOT__unnamedblk8__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__0__ew 
                = vlSelfRef.Controller_tb__DOT__e_w_load
                [(0x0000000fU & Controller_tb__DOT__unnamedblk8__DOT__t)];
        } else {
            __Vtask_Controller_tb__DOT__check_ctrl__0__est = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__0__edn = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__0__eri = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__0__ers = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__0__efd = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__0__een = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__0__els = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__0__ew = 0U;
        }
        __Vtask_Controller_tb__DOT__check_ctrl__0__t 
            = Controller_tb__DOT__unnamedblk8__DOT__t;
        vlSelfRef.Controller_tb__DOT__checks = ((IData)(1U) 
                                                + vlSelfRef.Controller_tb__DOT__checks);
        if (VL_UNLIKELY(((((((VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (1U & __Vtask_Controller_tb__DOT__check_ctrl__0__ew)) 
                             | (VController_tb__ConstPool__TABLE_h028f018c_0
                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                != (1U & __Vtask_Controller_tb__DOT__check_ctrl__0__een))) 
                            | (VController_tb__ConstPool__TABLE_hbabea407_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                               != (1U & __Vtask_Controller_tb__DOT__check_ctrl__0__efd))) 
                           | (VController_tb__ConstPool__TABLE_h757529b2_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (1U & __Vtask_Controller_tb__DOT__check_ctrl__0__ers))) 
                          | (VController_tb__ConstPool__TABLE_h0c797d14_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                             != (1U & __Vtask_Controller_tb__DOT__check_ctrl__0__edn)))))) {
            vlSelfRef.Controller_tb__DOT__errors = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:119: Assertion failed in %m: [%0t] t=%0d: w_load=%0d en=%0d feed=%0d row_slot=%0d done=%0d, expected %0d %0d %0d %0d %0d\n",15, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__t
                         , '#',1,VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_h028f018c_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_hbabea407_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_h757529b2_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_h0c797d14_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__ew
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__een
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__efd
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__ers
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__edn);
            VL_STOP_MT("Controller_tb.sv", 119, "");
        }
        if (VController_tb__ConstPool__TABLE_h0cc0fcf8_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((VController_tb__ConstPool__TABLE_hb7eea91c_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (1U & __Vtask_Controller_tb__DOT__check_ctrl__0__els))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:127: Assertion failed in %m: [%0t] t=%0d: load_slot=%0d, expected %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__t
                             , '#',1,VController_tb__ConstPool__TABLE_hb7eea91c_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__els);
                VL_STOP_MT("Controller_tb.sv", 127, "");
            }
        }
        if (VController_tb__ConstPool__TABLE_hbabea407_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((VController_tb__ConstPool__TABLE_h35b5d552_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (3U & __Vtask_Controller_tb__DOT__check_ctrl__0__eri))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:135: Assertion failed in %m: [%0t] t=%0d: row_idx=%0d, expected %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__t
                             , '#',2,VController_tb__ConstPool__TABLE_h35b5d552_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__eri);
                VL_STOP_MT("Controller_tb.sv", 135, "");
            }
        }
        vlSelfRef.Controller_tb__DOT__checks = ((IData)(1U) 
                                                + vlSelfRef.Controller_tb__DOT__checks);
        if (VL_UNLIKELY((((IData)(vlSelfRef.Controller_tb__DOT__ctrl__DOT__state) 
                          != __Vtask_Controller_tb__DOT__check_ctrl__0__est)))) {
            vlSelfRef.Controller_tb__DOT__errors = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
            __Vtemp_55 = VController_tb___024unit::__Venumtab_enum_name15
                [vlSelfRef.Controller_tb__DOT__ctrl__DOT__state];
            VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:142: Assertion failed in %m: [%0t] t=%0d: state=%s, expected %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__t
                         , 'S',&(__Vtemp_55), '~',32,__Vtask_Controller_tb__DOT__check_ctrl__0__est);
            VL_STOP_MT("Controller_tb.sv", 142, "");
        }
        __Vtask_Controller_tb__DOT__check_results__1__two_jobs = 1U;
        __Vtask_Controller_tb__DOT__check_results__1__t 
            = Controller_tb__DOT__unnamedblk8__DOT__t;
        __Vtask_Controller_tb__DOT__check_results__1__m = 0U;
        __Vtask_Controller_tb__DOT__check_results__1__m 
            = (__Vtask_Controller_tb__DOT__check_results__1__t 
               - (IData)(5U));
        if ((VL_LTES_III(32, 0U, __Vtask_Controller_tb__DOT__check_results__1__m) 
             & VL_GTS_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__1__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp
                                  [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__1__m))
                                     ? (3U & __Vtask_Controller_tb__DOT__check_results__1__m)
                                     : 0U)][0U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:155: Assertion failed in %m: [%0t] A C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_results__1__m
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp
                             [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__1__m))
                                ? (3U & __Vtask_Controller_tb__DOT__check_results__1__m)
                                : 0U)][0U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("Controller_tb.sv", 155, "");
            }
        } else if ((((IData)(__Vtask_Controller_tb__DOT__check_results__1__two_jobs) 
                     & VL_LTES_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__1__m)) 
                    & VL_GTS_III(32, 6U, __Vtask_Controller_tb__DOT__check_results__1__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp2
                                  [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                                  - (IData)(3U))))
                                     ? (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                              - (IData)(3U)))
                                     : 0U)][0U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:162: Assertion failed in %m: [%0t] A2 C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(__Vtask_Controller_tb__DOT__check_results__1__m 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp2
                             [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                             - (IData)(3U))))
                                ? (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                         - (IData)(3U)))
                                : 0U)][0U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("Controller_tb.sv", 162, "");
            }
        }
        __Vtask_Controller_tb__DOT__check_results__1__m 
            = ((__Vtask_Controller_tb__DOT__check_results__1__t 
                - (IData)(5U)) - (IData)(1U));
        if ((VL_LTES_III(32, 0U, __Vtask_Controller_tb__DOT__check_results__1__m) 
             & VL_GTS_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__1__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp
                                  [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__1__m))
                                     ? (3U & __Vtask_Controller_tb__DOT__check_results__1__m)
                                     : 0U)][1U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:155: Assertion failed in %m: [%0t] A C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_results__1__m
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp
                             [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__1__m))
                                ? (3U & __Vtask_Controller_tb__DOT__check_results__1__m)
                                : 0U)][1U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("Controller_tb.sv", 155, "");
            }
        } else if ((((IData)(__Vtask_Controller_tb__DOT__check_results__1__two_jobs) 
                     & VL_LTES_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__1__m)) 
                    & VL_GTS_III(32, 6U, __Vtask_Controller_tb__DOT__check_results__1__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp2
                                  [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                                  - (IData)(3U))))
                                     ? (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                              - (IData)(3U)))
                                     : 0U)][1U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:162: Assertion failed in %m: [%0t] A2 C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(__Vtask_Controller_tb__DOT__check_results__1__m 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp2
                             [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                             - (IData)(3U))))
                                ? (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                         - (IData)(3U)))
                                : 0U)][1U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("Controller_tb.sv", 162, "");
            }
        }
        __Vtask_Controller_tb__DOT__check_results__1__m 
            = ((__Vtask_Controller_tb__DOT__check_results__1__t 
                - (IData)(5U)) - (IData)(2U));
        if ((VL_LTES_III(32, 0U, __Vtask_Controller_tb__DOT__check_results__1__m) 
             & VL_GTS_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__1__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp
                                  [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__1__m))
                                     ? (3U & __Vtask_Controller_tb__DOT__check_results__1__m)
                                     : 0U)][2U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:155: Assertion failed in %m: [%0t] A C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_results__1__m
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp
                             [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__1__m))
                                ? (3U & __Vtask_Controller_tb__DOT__check_results__1__m)
                                : 0U)][2U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("Controller_tb.sv", 155, "");
            }
        } else if ((((IData)(__Vtask_Controller_tb__DOT__check_results__1__two_jobs) 
                     & VL_LTES_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__1__m)) 
                    & VL_GTS_III(32, 6U, __Vtask_Controller_tb__DOT__check_results__1__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp2
                                  [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                                  - (IData)(3U))))
                                     ? (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                              - (IData)(3U)))
                                     : 0U)][2U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:162: Assertion failed in %m: [%0t] A2 C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(__Vtask_Controller_tb__DOT__check_results__1__m 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp2
                             [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                             - (IData)(3U))))
                                ? (3U & (__Vtask_Controller_tb__DOT__check_results__1__m 
                                         - (IData)(3U)))
                                : 0U)][2U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("Controller_tb.sv", 162, "");
            }
        }
        vlSelfRef.Controller_tb__DOT__push0 = 0U;
        vlSelfRef.Controller_tb__DOT__push1 = 0U;
        Controller_tb__DOT__unnamedblk8__DOT__t = ((IData)(1U) 
                                                   + Controller_tb__DOT__unnamedblk8__DOT__t);
    }
    vlSelfRef.Controller_tb__DOT__rst_n = 0U;
    Controller_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    if ((vlSelfRef.Controller_tb__DOT__errors == vlSelfRef.Controller_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 1 passed: two jobs back to back\n",0);
    } else {
        VL_WRITEF_NX("Test 1 FAILED: two jobs back to back\n",0);
    }
    while (VL_LTS_III(32, 0U, Controller_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                             "@(negedge Controller_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge Controller_tb.clk)", 
                                                             "Controller_tb.sv", 
                                                             221);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Controller_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (Controller_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.Controller_tb__DOT__rst_n = 1U;
    vlSelfRef.Controller_tb__DOT__test_errors = vlSelfRef.Controller_tb__DOT__errors;
    vlSelfRef.Controller_tb__DOT__push0 = 1U;
    Controller_tb__DOT__unnamedblk9__DOT__t = 0U;
    while (VL_GTS_III(32, 0x0000000bU, Controller_tb__DOT__unnamedblk9__DOT__t)) {
        VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                             "@(negedge Controller_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge Controller_tb.clk)", 
                                                             "Controller_tb.sv", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if ((0x0aU >= (0x0000000fU & Controller_tb__DOT__unnamedblk9__DOT__t))) {
            __Vtask_Controller_tb__DOT__check_ctrl__2__est 
                = vlSelfRef.Controller_tb__DOT__s_state
                [(0x0000000fU & Controller_tb__DOT__unnamedblk9__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__2__edn 
                = vlSelfRef.Controller_tb__DOT__s_done
                [(0x0000000fU & Controller_tb__DOT__unnamedblk9__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__2__eri 
                = vlSelfRef.Controller_tb__DOT__s_row_idx
                [(0x0000000fU & Controller_tb__DOT__unnamedblk9__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__2__ers 
                = vlSelfRef.Controller_tb__DOT__s_row_slot
                [(0x0000000fU & Controller_tb__DOT__unnamedblk9__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__2__efd 
                = vlSelfRef.Controller_tb__DOT__s_feed
                [(0x0000000fU & Controller_tb__DOT__unnamedblk9__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__2__een 
                = vlSelfRef.Controller_tb__DOT__s_en
                [(0x0000000fU & Controller_tb__DOT__unnamedblk9__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__2__els 
                = vlSelfRef.Controller_tb__DOT__s_load_slot
                [(0x0000000fU & Controller_tb__DOT__unnamedblk9__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__2__ew 
                = vlSelfRef.Controller_tb__DOT__s_w_load
                [(0x0000000fU & Controller_tb__DOT__unnamedblk9__DOT__t)];
        } else {
            __Vtask_Controller_tb__DOT__check_ctrl__2__est = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__2__edn = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__2__eri = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__2__ers = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__2__efd = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__2__een = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__2__els = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__2__ew = 0U;
        }
        __Vtask_Controller_tb__DOT__check_ctrl__2__t 
            = Controller_tb__DOT__unnamedblk9__DOT__t;
        vlSelfRef.Controller_tb__DOT__checks = ((IData)(1U) 
                                                + vlSelfRef.Controller_tb__DOT__checks);
        if (VL_UNLIKELY(((((((VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (1U & __Vtask_Controller_tb__DOT__check_ctrl__2__ew)) 
                             | (VController_tb__ConstPool__TABLE_h028f018c_0
                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                != (1U & __Vtask_Controller_tb__DOT__check_ctrl__2__een))) 
                            | (VController_tb__ConstPool__TABLE_hbabea407_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                               != (1U & __Vtask_Controller_tb__DOT__check_ctrl__2__efd))) 
                           | (VController_tb__ConstPool__TABLE_h757529b2_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (1U & __Vtask_Controller_tb__DOT__check_ctrl__2__ers))) 
                          | (VController_tb__ConstPool__TABLE_h0c797d14_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                             != (1U & __Vtask_Controller_tb__DOT__check_ctrl__2__edn)))))) {
            vlSelfRef.Controller_tb__DOT__errors = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:119: Assertion failed in %m: [%0t] t=%0d: w_load=%0d en=%0d feed=%0d row_slot=%0d done=%0d, expected %0d %0d %0d %0d %0d\n",15, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__t
                         , '#',1,VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_h028f018c_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_hbabea407_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_h757529b2_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_h0c797d14_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__ew
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__een
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__efd
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__ers
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__edn);
            VL_STOP_MT("Controller_tb.sv", 119, "");
        }
        if (VController_tb__ConstPool__TABLE_h0cc0fcf8_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((VController_tb__ConstPool__TABLE_hb7eea91c_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (1U & __Vtask_Controller_tb__DOT__check_ctrl__2__els))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:127: Assertion failed in %m: [%0t] t=%0d: load_slot=%0d, expected %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__t
                             , '#',1,VController_tb__ConstPool__TABLE_hb7eea91c_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__els);
                VL_STOP_MT("Controller_tb.sv", 127, "");
            }
        }
        if (VController_tb__ConstPool__TABLE_hbabea407_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((VController_tb__ConstPool__TABLE_h35b5d552_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (3U & __Vtask_Controller_tb__DOT__check_ctrl__2__eri))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:135: Assertion failed in %m: [%0t] t=%0d: row_idx=%0d, expected %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__t
                             , '#',2,VController_tb__ConstPool__TABLE_h35b5d552_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__eri);
                VL_STOP_MT("Controller_tb.sv", 135, "");
            }
        }
        vlSelfRef.Controller_tb__DOT__checks = ((IData)(1U) 
                                                + vlSelfRef.Controller_tb__DOT__checks);
        if (VL_UNLIKELY((((IData)(vlSelfRef.Controller_tb__DOT__ctrl__DOT__state) 
                          != __Vtask_Controller_tb__DOT__check_ctrl__2__est)))) {
            vlSelfRef.Controller_tb__DOT__errors = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
            __Vtemp_56 = VController_tb___024unit::__Venumtab_enum_name15
                [vlSelfRef.Controller_tb__DOT__ctrl__DOT__state];
            VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:142: Assertion failed in %m: [%0t] t=%0d: state=%s, expected %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__t
                         , 'S',&(__Vtemp_56), '~',32,__Vtask_Controller_tb__DOT__check_ctrl__2__est);
            VL_STOP_MT("Controller_tb.sv", 142, "");
        }
        __Vtask_Controller_tb__DOT__check_results__3__two_jobs = 0U;
        __Vtask_Controller_tb__DOT__check_results__3__t 
            = Controller_tb__DOT__unnamedblk9__DOT__t;
        __Vtask_Controller_tb__DOT__check_results__3__m = 0U;
        __Vtask_Controller_tb__DOT__check_results__3__m 
            = (__Vtask_Controller_tb__DOT__check_results__3__t 
               - (IData)(5U));
        if ((VL_LTES_III(32, 0U, __Vtask_Controller_tb__DOT__check_results__3__m) 
             & VL_GTS_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__3__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp
                                  [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__3__m))
                                     ? (3U & __Vtask_Controller_tb__DOT__check_results__3__m)
                                     : 0U)][0U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:155: Assertion failed in %m: [%0t] A C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_results__3__m
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp
                             [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__3__m))
                                ? (3U & __Vtask_Controller_tb__DOT__check_results__3__m)
                                : 0U)][0U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("Controller_tb.sv", 155, "");
            }
        } else if ((((IData)(__Vtask_Controller_tb__DOT__check_results__3__two_jobs) 
                     & VL_LTES_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__3__m)) 
                    & VL_GTS_III(32, 6U, __Vtask_Controller_tb__DOT__check_results__3__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp2
                                  [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                                  - (IData)(3U))))
                                     ? (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                              - (IData)(3U)))
                                     : 0U)][0U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:162: Assertion failed in %m: [%0t] A2 C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(__Vtask_Controller_tb__DOT__check_results__3__m 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp2
                             [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                             - (IData)(3U))))
                                ? (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                         - (IData)(3U)))
                                : 0U)][0U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("Controller_tb.sv", 162, "");
            }
        }
        __Vtask_Controller_tb__DOT__check_results__3__m 
            = ((__Vtask_Controller_tb__DOT__check_results__3__t 
                - (IData)(5U)) - (IData)(1U));
        if ((VL_LTES_III(32, 0U, __Vtask_Controller_tb__DOT__check_results__3__m) 
             & VL_GTS_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__3__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp
                                  [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__3__m))
                                     ? (3U & __Vtask_Controller_tb__DOT__check_results__3__m)
                                     : 0U)][1U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:155: Assertion failed in %m: [%0t] A C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_results__3__m
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp
                             [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__3__m))
                                ? (3U & __Vtask_Controller_tb__DOT__check_results__3__m)
                                : 0U)][1U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("Controller_tb.sv", 155, "");
            }
        } else if ((((IData)(__Vtask_Controller_tb__DOT__check_results__3__two_jobs) 
                     & VL_LTES_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__3__m)) 
                    & VL_GTS_III(32, 6U, __Vtask_Controller_tb__DOT__check_results__3__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp2
                                  [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                                  - (IData)(3U))))
                                     ? (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                              - (IData)(3U)))
                                     : 0U)][1U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:162: Assertion failed in %m: [%0t] A2 C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(__Vtask_Controller_tb__DOT__check_results__3__m 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp2
                             [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                             - (IData)(3U))))
                                ? (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                         - (IData)(3U)))
                                : 0U)][1U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("Controller_tb.sv", 162, "");
            }
        }
        __Vtask_Controller_tb__DOT__check_results__3__m 
            = ((__Vtask_Controller_tb__DOT__check_results__3__t 
                - (IData)(5U)) - (IData)(2U));
        if ((VL_LTES_III(32, 0U, __Vtask_Controller_tb__DOT__check_results__3__m) 
             & VL_GTS_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__3__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp
                                  [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__3__m))
                                     ? (3U & __Vtask_Controller_tb__DOT__check_results__3__m)
                                     : 0U)][2U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:155: Assertion failed in %m: [%0t] A C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_results__3__m
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp
                             [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__3__m))
                                ? (3U & __Vtask_Controller_tb__DOT__check_results__3__m)
                                : 0U)][2U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("Controller_tb.sv", 155, "");
            }
        } else if ((((IData)(__Vtask_Controller_tb__DOT__check_results__3__two_jobs) 
                     & VL_LTES_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__3__m)) 
                    & VL_GTS_III(32, 6U, __Vtask_Controller_tb__DOT__check_results__3__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp2
                                  [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                                  - (IData)(3U))))
                                     ? (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                              - (IData)(3U)))
                                     : 0U)][2U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:162: Assertion failed in %m: [%0t] A2 C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(__Vtask_Controller_tb__DOT__check_results__3__m 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp2
                             [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                             - (IData)(3U))))
                                ? (3U & (__Vtask_Controller_tb__DOT__check_results__3__m 
                                         - (IData)(3U)))
                                : 0U)][2U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("Controller_tb.sv", 162, "");
            }
        }
        vlSelfRef.Controller_tb__DOT__push0 = 0U;
        Controller_tb__DOT__unnamedblk9__DOT__t = ((IData)(1U) 
                                                   + Controller_tb__DOT__unnamedblk9__DOT__t);
    }
    vlSelfRef.Controller_tb__DOT__rst_n = 0U;
    Controller_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    if ((vlSelfRef.Controller_tb__DOT__errors == vlSelfRef.Controller_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 2 passed: single job\n",0);
    } else {
        VL_WRITEF_NX("Test 2 FAILED: single job\n",0);
    }
    while (VL_LTS_III(32, 0U, Controller_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                             "@(negedge Controller_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge Controller_tb.clk)", 
                                                             "Controller_tb.sv", 
                                                             241);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Controller_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (Controller_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.Controller_tb__DOT__rst_n = 1U;
    vlSelfRef.Controller_tb__DOT__test_errors = vlSelfRef.Controller_tb__DOT__errors;
    vlSelfRef.Controller_tb__DOT__push0 = 1U;
    Controller_tb__DOT__unnamedblk10__DOT__t = 0U;
    while (VL_GTS_III(32, 0x0000000eU, Controller_tb__DOT__unnamedblk10__DOT__t)) {
        VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                             "@(negedge Controller_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge Controller_tb.clk)", 
                                                             "Controller_tb.sv", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if ((0x0dU >= (0x0000000fU & Controller_tb__DOT__unnamedblk10__DOT__t))) {
            __Vtask_Controller_tb__DOT__check_ctrl__4__est 
                = vlSelfRef.Controller_tb__DOT__e_state
                [(0x0000000fU & Controller_tb__DOT__unnamedblk10__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__4__edn 
                = vlSelfRef.Controller_tb__DOT__e_done
                [(0x0000000fU & Controller_tb__DOT__unnamedblk10__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__4__eri 
                = vlSelfRef.Controller_tb__DOT__e_row_idx
                [(0x0000000fU & Controller_tb__DOT__unnamedblk10__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__4__ers 
                = vlSelfRef.Controller_tb__DOT__e_row_slot
                [(0x0000000fU & Controller_tb__DOT__unnamedblk10__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__4__efd 
                = vlSelfRef.Controller_tb__DOT__e_feed
                [(0x0000000fU & Controller_tb__DOT__unnamedblk10__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__4__een 
                = vlSelfRef.Controller_tb__DOT__e_en
                [(0x0000000fU & Controller_tb__DOT__unnamedblk10__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__4__els 
                = vlSelfRef.Controller_tb__DOT__l_load_slot
                [(0x0000000fU & Controller_tb__DOT__unnamedblk10__DOT__t)];
            __Vtask_Controller_tb__DOT__check_ctrl__4__ew 
                = vlSelfRef.Controller_tb__DOT__l_w_load
                [(0x0000000fU & Controller_tb__DOT__unnamedblk10__DOT__t)];
        } else {
            __Vtask_Controller_tb__DOT__check_ctrl__4__est = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__4__edn = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__4__eri = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__4__ers = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__4__efd = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__4__een = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__4__els = 0U;
            __Vtask_Controller_tb__DOT__check_ctrl__4__ew = 0U;
        }
        __Vtask_Controller_tb__DOT__check_ctrl__4__t 
            = Controller_tb__DOT__unnamedblk10__DOT__t;
        vlSelfRef.Controller_tb__DOT__checks = ((IData)(1U) 
                                                + vlSelfRef.Controller_tb__DOT__checks);
        if (VL_UNLIKELY(((((((VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (1U & __Vtask_Controller_tb__DOT__check_ctrl__4__ew)) 
                             | (VController_tb__ConstPool__TABLE_h028f018c_0
                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                != (1U & __Vtask_Controller_tb__DOT__check_ctrl__4__een))) 
                            | (VController_tb__ConstPool__TABLE_hbabea407_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                               != (1U & __Vtask_Controller_tb__DOT__check_ctrl__4__efd))) 
                           | (VController_tb__ConstPool__TABLE_h757529b2_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (1U & __Vtask_Controller_tb__DOT__check_ctrl__4__ers))) 
                          | (VController_tb__ConstPool__TABLE_h0c797d14_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                             != (1U & __Vtask_Controller_tb__DOT__check_ctrl__4__edn)))))) {
            vlSelfRef.Controller_tb__DOT__errors = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:119: Assertion failed in %m: [%0t] t=%0d: w_load=%0d en=%0d feed=%0d row_slot=%0d done=%0d, expected %0d %0d %0d %0d %0d\n",15, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__t
                         , '#',1,VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_h028f018c_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_hbabea407_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_h757529b2_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '#',1,VController_tb__ConstPool__TABLE_h0c797d14_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__ew
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__een
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__efd
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__ers
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__edn);
            VL_STOP_MT("Controller_tb.sv", 119, "");
        }
        if (VController_tb__ConstPool__TABLE_h0cc0fcf8_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((VController_tb__ConstPool__TABLE_hb7eea91c_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (1U & __Vtask_Controller_tb__DOT__check_ctrl__4__els))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:127: Assertion failed in %m: [%0t] t=%0d: load_slot=%0d, expected %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__t
                             , '#',1,VController_tb__ConstPool__TABLE_hb7eea91c_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__els);
                VL_STOP_MT("Controller_tb.sv", 127, "");
            }
        }
        if (VController_tb__ConstPool__TABLE_hbabea407_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((VController_tb__ConstPool__TABLE_h35b5d552_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                              != (3U & __Vtask_Controller_tb__DOT__check_ctrl__4__eri))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:135: Assertion failed in %m: [%0t] t=%0d: row_idx=%0d, expected %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__t
                             , '#',2,VController_tb__ConstPool__TABLE_h35b5d552_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                             , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__eri);
                VL_STOP_MT("Controller_tb.sv", 135, "");
            }
        }
        vlSelfRef.Controller_tb__DOT__checks = ((IData)(1U) 
                                                + vlSelfRef.Controller_tb__DOT__checks);
        if (VL_UNLIKELY((((IData)(vlSelfRef.Controller_tb__DOT__ctrl__DOT__state) 
                          != __Vtask_Controller_tb__DOT__check_ctrl__4__est)))) {
            vlSelfRef.Controller_tb__DOT__errors = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
            __Vtemp_57 = VController_tb___024unit::__Venumtab_enum_name15
                [vlSelfRef.Controller_tb__DOT__ctrl__DOT__state];
            VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:142: Assertion failed in %m: [%0t] t=%0d: state=%s, expected %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_ctrl", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__t
                         , 'S',&(__Vtemp_57), '~',32,__Vtask_Controller_tb__DOT__check_ctrl__4__est);
            VL_STOP_MT("Controller_tb.sv", 142, "");
        }
        __Vtask_Controller_tb__DOT__check_results__5__two_jobs = 1U;
        __Vtask_Controller_tb__DOT__check_results__5__t 
            = Controller_tb__DOT__unnamedblk10__DOT__t;
        __Vtask_Controller_tb__DOT__check_results__5__m = 0U;
        __Vtask_Controller_tb__DOT__check_results__5__m 
            = (__Vtask_Controller_tb__DOT__check_results__5__t 
               - (IData)(5U));
        if ((VL_LTES_III(32, 0U, __Vtask_Controller_tb__DOT__check_results__5__m) 
             & VL_GTS_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__5__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp
                                  [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__5__m))
                                     ? (3U & __Vtask_Controller_tb__DOT__check_results__5__m)
                                     : 0U)][0U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:155: Assertion failed in %m: [%0t] A C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_results__5__m
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp
                             [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__5__m))
                                ? (3U & __Vtask_Controller_tb__DOT__check_results__5__m)
                                : 0U)][0U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("Controller_tb.sv", 155, "");
            }
        } else if ((((IData)(__Vtask_Controller_tb__DOT__check_results__5__two_jobs) 
                     & VL_LTES_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__5__m)) 
                    & VL_GTS_III(32, 6U, __Vtask_Controller_tb__DOT__check_results__5__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp2
                                  [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                                  - (IData)(3U))))
                                     ? (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                              - (IData)(3U)))
                                     : 0U)][0U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:162: Assertion failed in %m: [%0t] A2 C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(__Vtask_Controller_tb__DOT__check_results__5__m 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp2
                             [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                             - (IData)(3U))))
                                ? (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                         - (IData)(3U)))
                                : 0U)][0U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("Controller_tb.sv", 162, "");
            }
        }
        __Vtask_Controller_tb__DOT__check_results__5__m 
            = ((__Vtask_Controller_tb__DOT__check_results__5__t 
                - (IData)(5U)) - (IData)(1U));
        if ((VL_LTES_III(32, 0U, __Vtask_Controller_tb__DOT__check_results__5__m) 
             & VL_GTS_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__5__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp
                                  [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__5__m))
                                     ? (3U & __Vtask_Controller_tb__DOT__check_results__5__m)
                                     : 0U)][1U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:155: Assertion failed in %m: [%0t] A C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_results__5__m
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp
                             [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__5__m))
                                ? (3U & __Vtask_Controller_tb__DOT__check_results__5__m)
                                : 0U)][1U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("Controller_tb.sv", 155, "");
            }
        } else if ((((IData)(__Vtask_Controller_tb__DOT__check_results__5__two_jobs) 
                     & VL_LTES_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__5__m)) 
                    & VL_GTS_III(32, 6U, __Vtask_Controller_tb__DOT__check_results__5__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp2
                                  [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                                  - (IData)(3U))))
                                     ? (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                              - (IData)(3U)))
                                     : 0U)][1U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:162: Assertion failed in %m: [%0t] A2 C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(__Vtask_Controller_tb__DOT__check_results__5__m 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp2
                             [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                             - (IData)(3U))))
                                ? (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                         - (IData)(3U)))
                                : 0U)][1U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("Controller_tb.sv", 162, "");
            }
        }
        __Vtask_Controller_tb__DOT__check_results__5__m 
            = ((__Vtask_Controller_tb__DOT__check_results__5__t 
                - (IData)(5U)) - (IData)(2U));
        if ((VL_LTES_III(32, 0U, __Vtask_Controller_tb__DOT__check_results__5__m) 
             & VL_GTS_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__5__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp
                                  [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__5__m))
                                     ? (3U & __Vtask_Controller_tb__DOT__check_results__5__m)
                                     : 0U)][2U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:155: Assertion failed in %m: [%0t] A C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_Controller_tb__DOT__check_results__5__m
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp
                             [((2U >= (3U & __Vtask_Controller_tb__DOT__check_results__5__m))
                                ? (3U & __Vtask_Controller_tb__DOT__check_results__5__m)
                                : 0U)][2U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("Controller_tb.sv", 155, "");
            }
        } else if ((((IData)(__Vtask_Controller_tb__DOT__check_results__5__two_jobs) 
                     & VL_LTES_III(32, 3U, __Vtask_Controller_tb__DOT__check_results__5__m)) 
                    & VL_GTS_III(32, 6U, __Vtask_Controller_tb__DOT__check_results__5__m))) {
            vlSelfRef.Controller_tb__DOT__checks = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.Controller_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.Controller_tb__DOT__C_exp2
                                  [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                                  - (IData)(3U))))
                                     ? (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                              - (IData)(3U)))
                                     : 0U)][2U]))))) {
                vlSelfRef.Controller_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:162: Assertion failed in %m: [%0t] A2 C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"Controller_tb.check_results.unnamedblk4", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(__Vtask_Controller_tb__DOT__check_results__5__m 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.Controller_tb__DOT__C_exp2
                             [((2U >= (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                             - (IData)(3U))))
                                ? (3U & (__Vtask_Controller_tb__DOT__check_results__5__m 
                                         - (IData)(3U)))
                                : 0U)][2U], '#',10,vlSelfRef.Controller_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("Controller_tb.sv", 162, "");
            }
        }
        vlSelfRef.Controller_tb__DOT__push0 = 0U;
        vlSelfRef.Controller_tb__DOT__push1 = (3U == Controller_tb__DOT__unnamedblk10__DOT__t);
        Controller_tb__DOT__unnamedblk10__DOT__t = 
            ((IData)(1U) + Controller_tb__DOT__unnamedblk10__DOT__t);
    }
    vlSelfRef.Controller_tb__DOT__push1 = 0U;
    vlSelfRef.Controller_tb__DOT__rst_n = 0U;
    Controller_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 2U;
    if ((vlSelfRef.Controller_tb__DOT__errors == vlSelfRef.Controller_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 3 passed: second job arrives late in feed_0\n",0);
    } else {
        VL_WRITEF_NX("Test 3 FAILED: second job arrives late\n",0);
    }
    while (VL_LTS_III(32, 0U, Controller_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                             "@(negedge Controller_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge Controller_tb.clk)", 
                                                             "Controller_tb.sv", 
                                                             263);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Controller_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (Controller_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.Controller_tb__DOT__rst_n = 1U;
    vlSelfRef.Controller_tb__DOT__test_errors = vlSelfRef.Controller_tb__DOT__errors;
    vlSelfRef.Controller_tb__DOT__push0 = 1U;
    vlSelfRef.Controller_tb__DOT__push1 = 1U;
    VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                         "@(negedge Controller_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge Controller_tb.clk)", 
                                                         "Controller_tb.sv", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__push0 = 0U;
    vlSelfRef.Controller_tb__DOT__push1 = 0U;
    Controller_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 5U;
    while (VL_LTS_III(32, 0U, Controller_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                             "@(negedge Controller_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge Controller_tb.clk)", 
                                                             "Controller_tb.sv", 
                                                             274);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Controller_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (Controller_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.Controller_tb__DOT__rst_n = 0U;
    VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                         "@(negedge Controller_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge Controller_tb.clk)", 
                                                         "Controller_tb.sv", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.Controller_tb__DOT__checks);
    if (VL_UNLIKELY((((((VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                         | VController_tb__ConstPool__TABLE_h028f018c_0
                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                        | VController_tb__ConstPool__TABLE_hbabea407_0
                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                       | VController_tb__ConstPool__TABLE_h0c797d14_0
                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                      | (0U != (IData)(vlSelfRef.Controller_tb__DOT__entry_valid)))))) {
        vlSelfRef.Controller_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.Controller_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:281: Assertion failed in %m: [%0t] reset didn't clear: w_load=%0d en=%0d feed=%0d done=%0d entry_valid=%b\n",9, 'M',vlSymsp->name(),"Controller_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                     , '#',1,VController_tb__ConstPool__TABLE_h028f018c_0
                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                     , '#',1,VController_tb__ConstPool__TABLE_hbabea407_0
                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                     , '#',1,VController_tb__ConstPool__TABLE_h0c797d14_0
                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                     , '#',2,vlSelfRef.Controller_tb__DOT__entry_valid);
        VL_STOP_MT("Controller_tb.sv", 281, "");
    }
    vlSelfRef.Controller_tb__DOT__rst_n = 1U;
    Controller_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 3U;
    while (VL_LTS_III(32, 0U, Controller_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(vlSelf, 
                                                             "@(negedge Controller_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb8a3c5d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge Controller_tb.clk)", 
                                                             "Controller_tb.sv", 
                                                             288);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.Controller_tb__DOT__checks = ((IData)(1U) 
                                                + vlSelfRef.Controller_tb__DOT__checks);
        if (VL_UNLIKELY(((((VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                            | VController_tb__ConstPool__TABLE_h028f018c_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                           | VController_tb__ConstPool__TABLE_hbabea407_0
                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                          | VController_tb__ConstPool__TABLE_h0c797d14_0
                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])))) {
            vlSelfRef.Controller_tb__DOT__errors = 
                ((IData)(1U) + vlSelfRef.Controller_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: Controller_tb.sv:292: Assertion failed in %m: [%0t] controller left idle with an empty buffer\n",4, 'M',vlSymsp->name(),"Controller_tb.unnamedblk1_6", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("Controller_tb.sv", 292, "");
        }
        Controller_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (Controller_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    if ((vlSelfRef.Controller_tb__DOT__errors == vlSelfRef.Controller_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 4 passed: reset mid run\n",0);
    } else {
        VL_WRITEF_NX("Test 4 FAILED: reset mid run\n",0);
    }
    if ((0U == vlSelfRef.Controller_tb__DOT__errors)) {
        VL_WRITEF_NX("PASS: %0d checks\n",1, '~',32,vlSelfRef.Controller_tb__DOT__checks);
    } else {
        VL_WRITEF_NX("FAIL: %0d errors in %0d checks\n",2
                     , '~',32,vlSelfRef.Controller_tb__DOT__errors
                     , '~',32,vlSelfRef.Controller_tb__DOT__checks);
    }
    VL_FINISH_MT("Controller_tb.sv", 302, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_return;
}

bool VController_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___trigger_anySet__ico\n"); );
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

bool VController_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___trigger_anySet__act\n"); );
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

void VController_tb___024root___act_sequent__TOP__0(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___act_sequent__TOP__0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VController_tb__ConstPool__TABLE_hb7eea91c_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
        vlSelfRef.Controller_tb__DOT__b_in[0U][0U] 
            = vlSelfRef.Controller_tb__DOT__W2[0U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[0U][1U] 
            = vlSelfRef.Controller_tb__DOT__W2[0U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[0U][2U] 
            = vlSelfRef.Controller_tb__DOT__W2[0U][2U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][0U] 
            = vlSelfRef.Controller_tb__DOT__W2[1U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][1U] 
            = vlSelfRef.Controller_tb__DOT__W2[1U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][2U] 
            = vlSelfRef.Controller_tb__DOT__W2[1U][2U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][0U] 
            = vlSelfRef.Controller_tb__DOT__W2[2U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][1U] 
            = vlSelfRef.Controller_tb__DOT__W2[2U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][2U] 
            = vlSelfRef.Controller_tb__DOT__W2[2U][2U];
    } else {
        vlSelfRef.Controller_tb__DOT__b_in[0U][0U] 
            = vlSelfRef.Controller_tb__DOT__W[0U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[0U][1U] 
            = vlSelfRef.Controller_tb__DOT__W[0U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[0U][2U] 
            = vlSelfRef.Controller_tb__DOT__W[0U][2U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][0U] 
            = vlSelfRef.Controller_tb__DOT__W[1U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][1U] 
            = vlSelfRef.Controller_tb__DOT__W[1U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][2U] 
            = vlSelfRef.Controller_tb__DOT__W[1U][2U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][0U] 
            = vlSelfRef.Controller_tb__DOT__W[2U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][1U] 
            = vlSelfRef.Controller_tb__DOT__W[2U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][2U] 
            = vlSelfRef.Controller_tb__DOT__W[2U][2U];
    }
    if (VController_tb__ConstPool__TABLE_hbabea407_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
        if (VController_tb__ConstPool__TABLE_h757529b2_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            vlSelfRef.Controller_tb__DOT__cur_a[0U] 
                = vlSelfRef.Controller_tb__DOT__A2[
                ((2U >= VController_tb__ConstPool__TABLE_h35b5d552_0
                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                  ? VController_tb__ConstPool__TABLE_h35b5d552_0
                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                  : 0U)][0U];
            vlSelfRef.Controller_tb__DOT__cur_a[1U] 
                = vlSelfRef.Controller_tb__DOT__A2[
                ((2U >= VController_tb__ConstPool__TABLE_h35b5d552_0
                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                  ? VController_tb__ConstPool__TABLE_h35b5d552_0
                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                  : 0U)][1U];
            vlSelfRef.Controller_tb__DOT__cur_a[2U] 
                = vlSelfRef.Controller_tb__DOT__A2[
                ((2U >= VController_tb__ConstPool__TABLE_h35b5d552_0
                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                  ? VController_tb__ConstPool__TABLE_h35b5d552_0
                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                  : 0U)][2U];
        } else {
            vlSelfRef.Controller_tb__DOT__cur_a[0U] 
                = vlSelfRef.Controller_tb__DOT__A[(
                                                   (2U 
                                                    >= VController_tb__ConstPool__TABLE_h35b5d552_0
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                                                    ? VController_tb__ConstPool__TABLE_h35b5d552_0
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                                                    : 0U)][0U];
            vlSelfRef.Controller_tb__DOT__cur_a[1U] 
                = vlSelfRef.Controller_tb__DOT__A[(
                                                   (2U 
                                                    >= VController_tb__ConstPool__TABLE_h35b5d552_0
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                                                    ? VController_tb__ConstPool__TABLE_h35b5d552_0
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                                                    : 0U)][1U];
            vlSelfRef.Controller_tb__DOT__cur_a[2U] 
                = vlSelfRef.Controller_tb__DOT__A[(
                                                   (2U 
                                                    >= VController_tb__ConstPool__TABLE_h35b5d552_0
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                                                    ? VController_tb__ConstPool__TABLE_h35b5d552_0
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                                                    : 0U)][2U];
        }
    } else {
        vlSelfRef.Controller_tb__DOT__cur_a[0U] = 0U;
        vlSelfRef.Controller_tb__DOT__cur_a[1U] = 0U;
        vlSelfRef.Controller_tb__DOT__cur_a[2U] = 0U;
    }
    vlSelfRef.Controller_tb__DOT__a_in[0U] = vlSelfRef.Controller_tb__DOT__cur_a[0U];
    vlSelfRef.Controller_tb__DOT__a_in[1U] = vlSelfRef.Controller_tb__DOT__dly_a[0U][1U];
    vlSelfRef.Controller_tb__DOT__a_in[2U] = vlSelfRef.Controller_tb__DOT__dly_a[1U][2U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][0U] 
        = vlSelfRef.Controller_tb__DOT__b_in[0U][0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][1U] 
        = vlSelfRef.Controller_tb__DOT__b_in[0U][1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][2U] 
        = vlSelfRef.Controller_tb__DOT__b_in[0U][2U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][0U] 
        = vlSelfRef.Controller_tb__DOT__b_in[1U][0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][1U] 
        = vlSelfRef.Controller_tb__DOT__b_in[1U][1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][2U] 
        = vlSelfRef.Controller_tb__DOT__b_in[1U][2U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][0U] 
        = vlSelfRef.Controller_tb__DOT__b_in[2U][0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][1U] 
        = vlSelfRef.Controller_tb__DOT__b_in[2U][1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][2U] 
        = vlSelfRef.Controller_tb__DOT__b_in[2U][2U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0U] 
        = vlSelfRef.Controller_tb__DOT__a_in[0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1U] 
        = vlSelfRef.Controller_tb__DOT__a_in[1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2U] 
        = vlSelfRef.Controller_tb__DOT__a_in[2U];
}

extern const VlUnpacked<CData/*2:0*/, 128> VController_tb__ConstPool__TABLE_hf261e1ac_0;

void VController_tb___024root___nba_sequent__TOP__0(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___nba_sequent__TOP__0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __VdlyVal__Controller_tb__DOT__dly_a__v0;
    __VdlyVal__Controller_tb__DOT__dly_a__v0 = 0;
    CData/*0:0*/ __VdlySet__Controller_tb__DOT__dly_a__v0;
    __VdlySet__Controller_tb__DOT__dly_a__v0 = 0;
    CData/*3:0*/ __VdlyVal__Controller_tb__DOT__dly_a__v1;
    __VdlyVal__Controller_tb__DOT__dly_a__v1 = 0;
    CData/*3:0*/ __VdlyVal__Controller_tb__DOT__dly_a__v2;
    __VdlyVal__Controller_tb__DOT__dly_a__v2 = 0;
    CData/*3:0*/ __VdlyVal__Controller_tb__DOT__dly_a__v3;
    __VdlyVal__Controller_tb__DOT__dly_a__v3 = 0;
    CData/*3:0*/ __VdlyVal__Controller_tb__DOT__dly_a__v4;
    __VdlyVal__Controller_tb__DOT__dly_a__v4 = 0;
    CData/*3:0*/ __VdlyVal__Controller_tb__DOT__dly_a__v5;
    __VdlyVal__Controller_tb__DOT__dly_a__v5 = 0;
    CData/*0:0*/ __VdlySet__Controller_tb__DOT__dly_a__v6;
    __VdlySet__Controller_tb__DOT__dly_a__v6 = 0;
    CData/*0:0*/ __VdlyVal__Controller_tb__DOT__dly_s__v0;
    __VdlyVal__Controller_tb__DOT__dly_s__v0 = 0;
    CData/*0:0*/ __VdlySet__Controller_tb__DOT__dly_s__v0;
    __VdlySet__Controller_tb__DOT__dly_s__v0 = 0;
    CData/*0:0*/ __VdlyVal__Controller_tb__DOT__dly_s__v1;
    __VdlyVal__Controller_tb__DOT__dly_s__v1 = 0;
    CData/*0:0*/ __VdlySet__Controller_tb__DOT__dly_s__v2;
    __VdlySet__Controller_tb__DOT__dly_s__v2 = 0;
    // Body
    __VdlySet__Controller_tb__DOT__dly_s__v0 = 0U;
    __VdlySet__Controller_tb__DOT__dly_s__v2 = 0U;
    __VdlySet__Controller_tb__DOT__dly_a__v0 = 0U;
    __VdlySet__Controller_tb__DOT__dly_a__v6 = 0U;
    if (vlSelfRef.Controller_tb__DOT__rst_n) {
        if (VController_tb__ConstPool__TABLE_h028f018c_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            __VdlyVal__Controller_tb__DOT__dly_s__v0 
                = vlSelfRef.Controller_tb__DOT__dly_s[0U];
            __VdlySet__Controller_tb__DOT__dly_s__v0 = 1U;
            __VdlyVal__Controller_tb__DOT__dly_s__v1 
                = vlSelfRef.Controller_tb__DOT__cur_s;
            __VdlyVal__Controller_tb__DOT__dly_a__v0 
                = vlSelfRef.Controller_tb__DOT__dly_a[0U][0U];
            __VdlySet__Controller_tb__DOT__dly_a__v0 = 1U;
            __VdlyVal__Controller_tb__DOT__dly_a__v1 
                = vlSelfRef.Controller_tb__DOT__dly_a[0U][1U];
            __VdlyVal__Controller_tb__DOT__dly_a__v2 
                = vlSelfRef.Controller_tb__DOT__dly_a[0U][2U];
            __VdlyVal__Controller_tb__DOT__dly_a__v3 
                = vlSelfRef.Controller_tb__DOT__cur_a[0U];
            __VdlyVal__Controller_tb__DOT__dly_a__v4 
                = vlSelfRef.Controller_tb__DOT__cur_a[1U];
            __VdlyVal__Controller_tb__DOT__dly_a__v5 
                = vlSelfRef.Controller_tb__DOT__cur_a[2U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out 
                = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out 
                = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out 
                = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result 
                = (((0U == vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0U]) 
                    | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))
                    ? 0U : (0x000003ffU & (vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0U] 
                                           * (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w))));
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out 
                = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[2U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out 
                = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[1U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out 
                = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[0U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result 
                = (((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U]) 
                    | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))
                    ? 0U : (0x000003ffU & (vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U] 
                                           * (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w))));
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result 
                = (((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U]) 
                    | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))
                    ? 0U : (0x000003ffU & (vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U] 
                                           * (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w))));
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2U]) 
                                   | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][0U]
                                   : ((IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][0U]) 
                                      + (vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2U] 
                                         * (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1U]) 
                                   | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][0U]
                                   : ((IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][0U]) 
                                      + (vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1U] 
                                         * (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][1U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][0U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][1U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][0U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][1U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out 
                = vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][0U];
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U]) 
                                   | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][2U]
                                   : ((IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][2U]) 
                                      + (vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U] 
                                         * (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U]) 
                                   | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][1U]
                                   : ((IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][1U]) 
                                      + (vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U] 
                                         * (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U]) 
                                   | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][2U]
                                   : ((IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][2U]) 
                                      + (vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U] 
                                         * (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
            vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U]) 
                                   | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][1U]
                                   : ((IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][1U]) 
                                      + (vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U] 
                                         * (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        }
        vlSelfRef.Controller_tb__DOT__ctrl__DOT__cycle_count 
            = ((VController_tb__ConstPool__TABLE_hf261e1ac_0
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                != (IData)(vlSelfRef.Controller_tb__DOT__ctrl__DOT__state))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.Controller_tb__DOT__ctrl__DOT__cycle_count))));
        if (VController_tb__ConstPool__TABLE_h0cc0fcf8_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            if ((1U & (~ (IData)(VController_tb__ConstPool__TABLE_hb7eea91c_0
                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])))) {
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][2U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][1U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][0U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][2U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][1U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][0U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][2U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][1U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][0U];
            }
            if (VController_tb__ConstPool__TABLE_hb7eea91c_0
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][2U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][1U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][0U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][2U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][1U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][0U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][2U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][1U];
                vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][0U];
            }
        }
        vlSelfRef.Controller_tb__DOT__ctrl__DOT__state 
            = VController_tb__ConstPool__TABLE_hf261e1ac_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
    } else {
        __VdlySet__Controller_tb__DOT__dly_s__v2 = 1U;
        __VdlySet__Controller_tb__DOT__dly_a__v6 = 1U;
        vlSelfRef.Controller_tb__DOT__ctrl__DOT__cycle_count = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0U;
        vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0U;
        vlSelfRef.Controller_tb__DOT__ctrl__DOT__state = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.Controller_tb__DOT__rst_n)) 
               | VController_tb__ConstPool__TABLE_h0c797d14_0
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) {
        vlSelfRef.Controller_tb__DOT__entry_valid = 0U;
    } else {
        if (vlSelfRef.Controller_tb__DOT__push0) {
            vlSelfRef.Controller_tb__DOT__entry_valid 
                = (1U | (IData)(vlSelfRef.Controller_tb__DOT__entry_valid));
        }
        if (vlSelfRef.Controller_tb__DOT__push1) {
            vlSelfRef.Controller_tb__DOT__entry_valid 
                = (2U | (IData)(vlSelfRef.Controller_tb__DOT__entry_valid));
        }
    }
    if (__VdlySet__Controller_tb__DOT__dly_s__v0) {
        vlSelfRef.Controller_tb__DOT__dly_s[1U] = __VdlyVal__Controller_tb__DOT__dly_s__v0;
        vlSelfRef.Controller_tb__DOT__dly_s[0U] = __VdlyVal__Controller_tb__DOT__dly_s__v1;
    }
    if (__VdlySet__Controller_tb__DOT__dly_s__v2) {
        vlSelfRef.Controller_tb__DOT__dly_s[0U] = 0U;
        vlSelfRef.Controller_tb__DOT__dly_s[1U] = 0U;
    }
    if (__VdlySet__Controller_tb__DOT__dly_a__v0) {
        vlSelfRef.Controller_tb__DOT__dly_a[1U][0U] 
            = __VdlyVal__Controller_tb__DOT__dly_a__v0;
        vlSelfRef.Controller_tb__DOT__dly_a[1U][1U] 
            = __VdlyVal__Controller_tb__DOT__dly_a__v1;
        vlSelfRef.Controller_tb__DOT__dly_a[1U][2U] 
            = __VdlyVal__Controller_tb__DOT__dly_a__v2;
        vlSelfRef.Controller_tb__DOT__dly_a[0U][0U] 
            = __VdlyVal__Controller_tb__DOT__dly_a__v3;
        vlSelfRef.Controller_tb__DOT__dly_a[0U][1U] 
            = __VdlyVal__Controller_tb__DOT__dly_a__v4;
        vlSelfRef.Controller_tb__DOT__dly_a[0U][2U] 
            = __VdlyVal__Controller_tb__DOT__dly_a__v5;
    }
    if (__VdlySet__Controller_tb__DOT__dly_a__v6) {
        vlSelfRef.Controller_tb__DOT__dly_a[0U][0U] = 0U;
        vlSelfRef.Controller_tb__DOT__dly_a[0U][1U] = 0U;
        vlSelfRef.Controller_tb__DOT__dly_a[0U][2U] = 0U;
        vlSelfRef.Controller_tb__DOT__dly_a[1U][0U] = 0U;
        vlSelfRef.Controller_tb__DOT__dly_a[1U][1U] = 0U;
        vlSelfRef.Controller_tb__DOT__dly_a[1U][2U] = 0U;
    }
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][1U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][0U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][1U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][0U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][1U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][0U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][0U];
    vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][1U];
    vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][2U];
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (((IData)(vlSelfRef.Controller_tb__DOT__entry_valid) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.Controller_tb__DOT__ctrl__DOT__cycle_count) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.Controller_tb__DOT__ctrl__DOT__state)));
    vlSelfRef.Controller_tb__DOT__result_matrix[0U] 
        = vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[0U];
    vlSelfRef.Controller_tb__DOT__result_matrix[1U] 
        = vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[1U];
    vlSelfRef.Controller_tb__DOT__result_matrix[2U] 
        = vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[2U];
    vlSelfRef.Controller_tb__DOT__cur_s = VController_tb__ConstPool__TABLE_h757529b2_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
    vlSelfRef.Controller_tb__DOT__slot_in[0U] = vlSelfRef.Controller_tb__DOT__cur_s;
    vlSelfRef.Controller_tb__DOT__slot_in[1U] = vlSelfRef.Controller_tb__DOT__dly_s[0U];
    vlSelfRef.Controller_tb__DOT__slot_in[2U] = vlSelfRef.Controller_tb__DOT__dly_s[1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[0U] 
        = vlSelfRef.Controller_tb__DOT__slot_in[0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[1U] 
        = vlSelfRef.Controller_tb__DOT__slot_in[1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[2U] 
        = vlSelfRef.Controller_tb__DOT__slot_in[2U];
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[2U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[1U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[0U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
}

void VController_tb___024root___timing_ready(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___timing_ready\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready("@(negedge Controller_tb.clk)");
    }
}

void VController_tb___024root___timing_resume(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___timing_resume\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hb8a3c5d6__0.moveToResumeQueue(
                                                          "@(negedge Controller_tb.clk)");
    vlSelfRef.__VtrigSched_hb8a3c5d6__0.resume("@(negedge Controller_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VController_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void VController_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void VController_tb___024root____VbeforeTrig_hb8a3c5d6__0(VController_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root____VbeforeTrig_hb8a3c5d6__0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.Controller_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Controller_tb__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__Controller_tb__DOT__clk__0 
        = vlSelfRef.Controller_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb8a3c5d6__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VController_tb___024root___eval_debug_assertions(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_debug_assertions\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

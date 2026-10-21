// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VPE_tb__Syms.h"


void VPE_tb___024root__trace_chg_0_sub_0(VPE_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPE_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root__trace_chg_0\n"); );
    // Body
    VPE_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE_tb___024root*>(voidSelf);
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VPE_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VPE_tb___024root__trace_chg_0_sub_0(VPE_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root__trace_chg_0_sub_0\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.PE_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.PE_tb__DOT__in_valid));
        bufp->chgBit(oldp+2,(vlSelfRef.PE_tb__DOT__load_slot));
        bufp->chgBit(oldp+3,(vlSelfRef.PE_tb__DOT__compute_slot));
        bufp->chgBit(oldp+4,(vlSelfRef.PE_tb__DOT__en));
        bufp->chgCData(oldp+5,(vlSelfRef.PE_tb__DOT__a),4);
        bufp->chgCData(oldp+6,(vlSelfRef.PE_tb__DOT__b),4);
        bufp->chgIData(oldp+7,(vlSelfRef.PE_tb__DOT__test_errors),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+8,(vlSelfRef.PE_tb__DOT__a_out),4);
        bufp->chgSData(oldp+9,(vlSelfRef.PE_tb__DOT__result),10);
        bufp->chgCData(oldp+10,(vlSelfRef.PE_tb__DOT__dut__DOT__b1),4);
        bufp->chgCData(oldp+11,(vlSelfRef.PE_tb__DOT__dut__DOT__b2),4);
    }
    bufp->chgBit(oldp+12,(vlSelfRef.PE_tb__DOT__clk));
    bufp->chgCData(oldp+13,(((IData)(vlSelfRef.PE_tb__DOT__load_slot)
                              ? (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2)
                              : (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1))),4);
    bufp->chgIData(oldp+14,(vlSelfRef.PE_tb__DOT__errors),32);
    bufp->chgIData(oldp+15,(vlSelfRef.PE_tb__DOT__checks),32);
    bufp->chgCData(oldp+16,(vlSelfRef.PE_tb__DOT__dut__DOT__w),4);
    bufp->chgBit(oldp+17,(((0U == (IData)(vlSelfRef.PE_tb__DOT__a)) 
                           | (0U == (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__w)))));
}

void VPE_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root__trace_cleanup\n"); );
    // Body
    VPE_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE_tb___024root*>(voidSelf);
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VMem_interface_tb__Syms.h"


void VMem_interface_tb___024root__trace_chg_0_sub_0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMem_interface_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_0\n"); );
    // Body
    VMem_interface_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMem_interface_tb___024root*>(voidSelf);
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VMem_interface_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMem_interface_tb___024root__trace_chg_dtype____0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar);
void VMem_interface_tb___024root__trace_chg_dtype____1(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar);
void VMem_interface_tb___024root__trace_chg_dtype____2(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3>& __VdtypeVar);
void VMem_interface_tb___024root__trace_chg_dtype____3(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar);
void VMem_interface_tb___024root__trace_chg_dtype____4(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 1>& __VdtypeVar);
void VMem_interface_tb___024root__trace_chg_dtype____5(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar);
void VMem_interface_tb___024root__trace_chg_dtype____6(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 2>& __VdtypeVar);
void VMem_interface_tb___024root__trace_chg_dtype____7(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void VMem_interface_tb___024root__trace_chg_dtype____8(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 2>& __VdtypeVar);
void VMem_interface_tb___024root__trace_chg_dtype____9(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 1>& __VdtypeVar);

void VMem_interface_tb___024root__trace_chg_0_sub_0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_0_sub_0\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Mem_interface_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.Mem_interface_tb__DOT__load_slot));
        bufp->chgBit(oldp+2,(vlSelfRef.Mem_interface_tb__DOT__feed));
        bufp->chgBit(oldp+3,(vlSelfRef.Mem_interface_tb__DOT__row_slot));
        bufp->chgBit(oldp+4,(vlSelfRef.Mem_interface_tb__DOT__en));
        bufp->chgBit(oldp+5,(vlSelfRef.Mem_interface_tb__DOT__done));
        bufp->chgCData(oldp+6,(vlSelfRef.Mem_interface_tb__DOT__row_idx),2);
        bufp->chgBit(oldp+7,(vlSelfRef.Mem_interface_tb__DOT__in_valid));
        bufp->chgQData(oldp+8,(vlSelfRef.Mem_interface_tb__DOT__a_packed),36);
        bufp->chgQData(oldp+10,(vlSelfRef.Mem_interface_tb__DOT__b_packed),36);
        bufp->chgSData(oldp+12,(vlSelfRef.Mem_interface_tb__DOT__results_in[0]),10);
        bufp->chgSData(oldp+13,(vlSelfRef.Mem_interface_tb__DOT__results_in[1]),10);
        bufp->chgSData(oldp+14,(vlSelfRef.Mem_interface_tb__DOT__results_in[2]),10);
        bufp->chgIData(oldp+15,(vlSelfRef.Mem_interface_tb__DOT__m),32);
        bufp->chgCData(oldp+16,(vlSelfRef.Mem_interface_tb__DOT__A[0U][0U]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.Mem_interface_tb__DOT__A[0U][1U]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.Mem_interface_tb__DOT__A[0U][2U]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.Mem_interface_tb__DOT__A[1U][0U]),4);
        bufp->chgCData(oldp+20,(vlSelfRef.Mem_interface_tb__DOT__A[1U][1U]),4);
        bufp->chgCData(oldp+21,(vlSelfRef.Mem_interface_tb__DOT__A[1U][2U]),4);
        bufp->chgCData(oldp+22,(vlSelfRef.Mem_interface_tb__DOT__A[2U][0U]),4);
        bufp->chgCData(oldp+23,(vlSelfRef.Mem_interface_tb__DOT__A[2U][1U]),4);
        bufp->chgCData(oldp+24,(vlSelfRef.Mem_interface_tb__DOT__A[2U][2U]),4);
        bufp->chgCData(oldp+25,(vlSelfRef.Mem_interface_tb__DOT__A2[0U][0U]),4);
        bufp->chgCData(oldp+26,(vlSelfRef.Mem_interface_tb__DOT__A2[0U][1U]),4);
        bufp->chgCData(oldp+27,(vlSelfRef.Mem_interface_tb__DOT__A2[0U][2U]),4);
        bufp->chgCData(oldp+28,(vlSelfRef.Mem_interface_tb__DOT__A2[1U][0U]),4);
        bufp->chgCData(oldp+29,(vlSelfRef.Mem_interface_tb__DOT__A2[1U][1U]),4);
        bufp->chgCData(oldp+30,(vlSelfRef.Mem_interface_tb__DOT__A2[1U][2U]),4);
        bufp->chgCData(oldp+31,(vlSelfRef.Mem_interface_tb__DOT__A2[2U][0U]),4);
        bufp->chgCData(oldp+32,(vlSelfRef.Mem_interface_tb__DOT__A2[2U][1U]),4);
        bufp->chgCData(oldp+33,(vlSelfRef.Mem_interface_tb__DOT__A2[2U][2U]),4);
        bufp->chgCData(oldp+34,(vlSelfRef.Mem_interface_tb__DOT__B[0U][0U]),4);
        bufp->chgCData(oldp+35,(vlSelfRef.Mem_interface_tb__DOT__B[0U][1U]),4);
        bufp->chgCData(oldp+36,(vlSelfRef.Mem_interface_tb__DOT__B[0U][2U]),4);
        bufp->chgCData(oldp+37,(vlSelfRef.Mem_interface_tb__DOT__B[1U][0U]),4);
        bufp->chgCData(oldp+38,(vlSelfRef.Mem_interface_tb__DOT__B[1U][1U]),4);
        bufp->chgCData(oldp+39,(vlSelfRef.Mem_interface_tb__DOT__B[1U][2U]),4);
        bufp->chgCData(oldp+40,(vlSelfRef.Mem_interface_tb__DOT__B[2U][0U]),4);
        bufp->chgCData(oldp+41,(vlSelfRef.Mem_interface_tb__DOT__B[2U][1U]),4);
        bufp->chgCData(oldp+42,(vlSelfRef.Mem_interface_tb__DOT__B[2U][2U]),4);
        bufp->chgCData(oldp+43,(vlSelfRef.Mem_interface_tb__DOT__B2[0U][0U]),4);
        bufp->chgCData(oldp+44,(vlSelfRef.Mem_interface_tb__DOT__B2[0U][1U]),4);
        bufp->chgCData(oldp+45,(vlSelfRef.Mem_interface_tb__DOT__B2[0U][2U]),4);
        bufp->chgCData(oldp+46,(vlSelfRef.Mem_interface_tb__DOT__B2[1U][0U]),4);
        bufp->chgCData(oldp+47,(vlSelfRef.Mem_interface_tb__DOT__B2[1U][1U]),4);
        bufp->chgCData(oldp+48,(vlSelfRef.Mem_interface_tb__DOT__B2[1U][2U]),4);
        bufp->chgCData(oldp+49,(vlSelfRef.Mem_interface_tb__DOT__B2[2U][0U]),4);
        bufp->chgCData(oldp+50,(vlSelfRef.Mem_interface_tb__DOT__B2[2U][1U]),4);
        bufp->chgCData(oldp+51,(vlSelfRef.Mem_interface_tb__DOT__B2[2U][2U]),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgSData(oldp+52,(vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[0]),10);
        bufp->chgSData(oldp+53,(vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[1]),10);
        bufp->chgSData(oldp+54,(vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[2]),10);
        bufp->chgCData(oldp+55,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[0U][0U]),4);
        bufp->chgCData(oldp+56,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[0U][1U]),4);
        bufp->chgCData(oldp+57,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[0U][2U]),4);
        bufp->chgCData(oldp+58,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[1U][0U]),4);
        bufp->chgCData(oldp+59,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[1U][1U]),4);
        bufp->chgCData(oldp+60,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[1U][2U]),4);
        bufp->chgCData(oldp+61,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[2U][0U]),4);
        bufp->chgCData(oldp+62,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[2U][1U]),4);
        bufp->chgCData(oldp+63,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[2U][2U]),4);
        bufp->chgCData(oldp+64,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[0U][0U]),4);
        bufp->chgCData(oldp+65,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[0U][1U]),4);
        bufp->chgCData(oldp+66,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[0U][2U]),4);
        bufp->chgCData(oldp+67,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[1U][0U]),4);
        bufp->chgCData(oldp+68,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[1U][1U]),4);
        bufp->chgCData(oldp+69,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[1U][2U]),4);
        bufp->chgCData(oldp+70,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[2U][0U]),4);
        bufp->chgCData(oldp+71,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[2U][1U]),4);
        bufp->chgCData(oldp+72,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[2U][2U]),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[6U])))) {
        bufp->chgCData(oldp+73,(vlSelfRef.Mem_interface_tb__DOT__a_skewed[0]),4);
        bufp->chgCData(oldp+74,(vlSelfRef.Mem_interface_tb__DOT__a_skewed[1]),4);
        bufp->chgCData(oldp+75,(vlSelfRef.Mem_interface_tb__DOT__a_skewed[2]),4);
        bufp->chgBit(oldp+76,(vlSelfRef.Mem_interface_tb__DOT__skewed_slot[0]));
        bufp->chgBit(oldp+77,(vlSelfRef.Mem_interface_tb__DOT__skewed_slot[1]));
        bufp->chgBit(oldp+78,(vlSelfRef.Mem_interface_tb__DOT__skewed_slot[2]));
        bufp->chgCData(oldp+79,(vlSelfRef.Mem_interface_tb__DOT__b_out[0U][0U]),4);
        bufp->chgCData(oldp+80,(vlSelfRef.Mem_interface_tb__DOT__b_out[0U][1U]),4);
        bufp->chgCData(oldp+81,(vlSelfRef.Mem_interface_tb__DOT__b_out[0U][2U]),4);
        bufp->chgCData(oldp+82,(vlSelfRef.Mem_interface_tb__DOT__b_out[1U][0U]),4);
        bufp->chgCData(oldp+83,(vlSelfRef.Mem_interface_tb__DOT__b_out[1U][1U]),4);
        bufp->chgCData(oldp+84,(vlSelfRef.Mem_interface_tb__DOT__b_out[1U][2U]),4);
        bufp->chgCData(oldp+85,(vlSelfRef.Mem_interface_tb__DOT__b_out[2U][0U]),4);
        bufp->chgCData(oldp+86,(vlSelfRef.Mem_interface_tb__DOT__b_out[2U][1U]),4);
        bufp->chgCData(oldp+87,(vlSelfRef.Mem_interface_tb__DOT__b_out[2U][2U]),4);
        bufp->chgCData(oldp+88,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][0U]),4);
        bufp->chgCData(oldp+89,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][1U]),4);
        bufp->chgCData(oldp+90,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][2U]),4);
        bufp->chgCData(oldp+91,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][0U]),4);
        bufp->chgCData(oldp+92,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][1U]),4);
        bufp->chgCData(oldp+93,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][2U]),4);
        bufp->chgCData(oldp+94,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][0U]),4);
        bufp->chgCData(oldp+95,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][1U]),4);
        bufp->chgCData(oldp+96,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][2U]),4);
        bufp->chgCData(oldp+97,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[0]),4);
        bufp->chgCData(oldp+98,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[1]),4);
        bufp->chgCData(oldp+99,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[2]),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+100,(vlSelfRef.Mem_interface_tb__DOT__entry_valid),2);
        bufp->chgWData(oldp+101,(vlSelfRef.Mem_interface_tb__DOT__results_packed),90);
        bufp->chgBit(oldp+104,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__mark[5U]));
        VMem_interface_tb___024root__trace_chg_dtype____0(vlSelf, bufp, 105, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__A_buf);
        VMem_interface_tb___024root__trace_chg_dtype____1(vlSelf, bufp, 123, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf);
        bufp->chgBit(oldp+141,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__wr_ptr));
        VMem_interface_tb___024root__trace_chg_dtype____2(vlSelf, bufp, 142, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal);
        VMem_interface_tb___024root__trace_chg_dtype____3(vlSelf, bufp, 151, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__mark);
        VMem_interface_tb___024root__trace_chg_dtype____4(vlSelf, bufp, 157, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly);
        VMem_interface_tb___024root__trace_chg_dtype____5(vlSelf, bufp, 158, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly);
        VMem_interface_tb___024root__trace_chg_dtype____6(vlSelf, bufp, 159, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly);
        VMem_interface_tb___024root__trace_chg_dtype____7(vlSelf, bufp, 161, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly);
        VMem_interface_tb___024root__trace_chg_dtype____8(vlSelf, bufp, 163, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly);
        VMem_interface_tb___024root__trace_chg_dtype____9(vlSelf, bufp, 165, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly);
    }
    bufp->chgBit(oldp+166,(vlSelfRef.Mem_interface_tb__DOT__clk));
    bufp->chgIData(oldp+167,(vlSelfRef.Mem_interface_tb__DOT__checks),32);
    bufp->chgIData(oldp+168,(vlSelfRef.Mem_interface_tb__DOT__errors),32);
    bufp->chgIData(oldp+169,(vlSelfRef.Mem_interface_tb__DOT__test_errors),32);
    bufp->chgCData(oldp+170,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[0]),4);
    bufp->chgCData(oldp+171,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[1]),4);
    bufp->chgCData(oldp+172,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[2]),4);
    bufp->chgBit(oldp+173,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[0]));
    bufp->chgBit(oldp+174,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[1]));
    bufp->chgBit(oldp+175,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[2]));
    bufp->chgSData(oldp+176,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__deskewed[0]),10);
    bufp->chgSData(oldp+177,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__deskewed[1]),10);
    bufp->chgSData(oldp+178,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__deskewed[2]),10);
}

void VMem_interface_tb___024root__trace_chg_dtype____0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____0\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0U][0U][0U]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[0U][0U][1U]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[0U][0U][2U]),4);
    bufp->chgCData(oldp+3,(__VdtypeVar[0U][1U][0U]),4);
    bufp->chgCData(oldp+4,(__VdtypeVar[0U][1U][1U]),4);
    bufp->chgCData(oldp+5,(__VdtypeVar[0U][1U][2U]),4);
    bufp->chgCData(oldp+6,(__VdtypeVar[0U][2U][0U]),4);
    bufp->chgCData(oldp+7,(__VdtypeVar[0U][2U][1U]),4);
    bufp->chgCData(oldp+8,(__VdtypeVar[0U][2U][2U]),4);
    bufp->chgCData(oldp+9,(__VdtypeVar[1U][0U][0U]),4);
    bufp->chgCData(oldp+10,(__VdtypeVar[1U][0U][1U]),4);
    bufp->chgCData(oldp+11,(__VdtypeVar[1U][0U][2U]),4);
    bufp->chgCData(oldp+12,(__VdtypeVar[1U][1U][0U]),4);
    bufp->chgCData(oldp+13,(__VdtypeVar[1U][1U][1U]),4);
    bufp->chgCData(oldp+14,(__VdtypeVar[1U][1U][2U]),4);
    bufp->chgCData(oldp+15,(__VdtypeVar[1U][2U][0U]),4);
    bufp->chgCData(oldp+16,(__VdtypeVar[1U][2U][1U]),4);
    bufp->chgCData(oldp+17,(__VdtypeVar[1U][2U][2U]),4);
}

void VMem_interface_tb___024root__trace_chg_dtype____1(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____1\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0U][0U][0U]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[0U][0U][1U]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[0U][0U][2U]),4);
    bufp->chgCData(oldp+3,(__VdtypeVar[0U][1U][0U]),4);
    bufp->chgCData(oldp+4,(__VdtypeVar[0U][1U][1U]),4);
    bufp->chgCData(oldp+5,(__VdtypeVar[0U][1U][2U]),4);
    bufp->chgCData(oldp+6,(__VdtypeVar[0U][2U][0U]),4);
    bufp->chgCData(oldp+7,(__VdtypeVar[0U][2U][1U]),4);
    bufp->chgCData(oldp+8,(__VdtypeVar[0U][2U][2U]),4);
    bufp->chgCData(oldp+9,(__VdtypeVar[1U][0U][0U]),4);
    bufp->chgCData(oldp+10,(__VdtypeVar[1U][0U][1U]),4);
    bufp->chgCData(oldp+11,(__VdtypeVar[1U][0U][2U]),4);
    bufp->chgCData(oldp+12,(__VdtypeVar[1U][1U][0U]),4);
    bufp->chgCData(oldp+13,(__VdtypeVar[1U][1U][1U]),4);
    bufp->chgCData(oldp+14,(__VdtypeVar[1U][1U][2U]),4);
    bufp->chgCData(oldp+15,(__VdtypeVar[1U][2U][0U]),4);
    bufp->chgCData(oldp+16,(__VdtypeVar[1U][2U][1U]),4);
    bufp->chgCData(oldp+17,(__VdtypeVar[1U][2U][2U]),4);
}

void VMem_interface_tb___024root__trace_chg_dtype____2(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____2\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0U][0U]),10);
    bufp->chgSData(oldp+1,(__VdtypeVar[0U][1U]),10);
    bufp->chgSData(oldp+2,(__VdtypeVar[0U][2U]),10);
    bufp->chgSData(oldp+3,(__VdtypeVar[1U][0U]),10);
    bufp->chgSData(oldp+4,(__VdtypeVar[1U][1U]),10);
    bufp->chgSData(oldp+5,(__VdtypeVar[1U][2U]),10);
    bufp->chgSData(oldp+6,(__VdtypeVar[2U][0U]),10);
    bufp->chgSData(oldp+7,(__VdtypeVar[2U][1U]),10);
    bufp->chgSData(oldp+8,(__VdtypeVar[2U][2U]),10);
}

void VMem_interface_tb___024root__trace_chg_dtype____3(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____3\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
    bufp->chgBit(oldp+4,(__VdtypeVar[4]));
    bufp->chgBit(oldp+5,(__VdtypeVar[5]));
}

void VMem_interface_tb___024root__trace_chg_dtype____4(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____4\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),4);
}

void VMem_interface_tb___024root__trace_chg_dtype____5(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____5\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
}

void VMem_interface_tb___024root__trace_chg_dtype____6(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____6\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),4);
}

void VMem_interface_tb___024root__trace_chg_dtype____7(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____7\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
}

void VMem_interface_tb___024root__trace_chg_dtype____8(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____8\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),10);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),10);
}

void VMem_interface_tb___024root__trace_chg_dtype____9(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_chg_dtype____9\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),10);
}

void VMem_interface_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_cleanup\n"); );
    // Body
    VMem_interface_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMem_interface_tb___024root*>(voidSelf);
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}

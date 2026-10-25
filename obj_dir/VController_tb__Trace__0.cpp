// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VController_tb__Syms.h"


void VController_tb___024root__trace_chg_0_sub_0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VController_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_0\n"); );
    // Body
    VController_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VController_tb___024root*>(voidSelf);
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VController_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VController_tb___024root__trace_chg_dtype____0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
void VController_tb___024root__trace_chg_dtype____1(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
void VController_tb___024root__trace_chg_dtype____2(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
void VController_tb___024root__trace_chg_dtype____3(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
void VController_tb___024root__trace_chg_dtype____4(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
void VController_tb___024root__trace_chg_dtype____5(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
void VController_tb___024root__trace_chg_dtype____6(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
void VController_tb___024root__trace_chg_dtype____7(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h0cc0fcf8_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h028f018c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_hb7eea91c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h757529b2_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h0c797d14_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_hbabea407_0;
extern const VlUnpacked<CData/*1:0*/, 128> VController_tb__ConstPool__TABLE_h35b5d552_0;
void VController_tb___024root__trace_chg_dtype____8(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 2>& __VdtypeVar);
void VController_tb___024root__trace_chg_dtype____9(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
extern const VlUnpacked<CData/*2:0*/, 128> VController_tb__ConstPool__TABLE_hf261e1ac_0;

void VController_tb___024root__trace_chg_0_sub_0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_0_sub_0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        VController_tb___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSelfRef.Controller_tb__DOT__e_w_load);
        VController_tb___024root__trace_chg_dtype____1(vlSelf, bufp, 14, vlSelfRef.Controller_tb__DOT__e_load_slot);
        VController_tb___024root__trace_chg_dtype____2(vlSelf, bufp, 28, vlSelfRef.Controller_tb__DOT__e_en);
        VController_tb___024root__trace_chg_dtype____3(vlSelf, bufp, 42, vlSelfRef.Controller_tb__DOT__e_feed);
        VController_tb___024root__trace_chg_dtype____4(vlSelf, bufp, 56, vlSelfRef.Controller_tb__DOT__e_row_slot);
        VController_tb___024root__trace_chg_dtype____5(vlSelf, bufp, 70, vlSelfRef.Controller_tb__DOT__e_row_idx);
        VController_tb___024root__trace_chg_dtype____6(vlSelf, bufp, 84, vlSelfRef.Controller_tb__DOT__e_done);
        VController_tb___024root__trace_chg_dtype____7(vlSelf, bufp, 98, vlSelfRef.Controller_tb__DOT__e_state);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+112,(vlSelfRef.Controller_tb__DOT__rst_n));
        bufp->chgBit(oldp+113,(vlSelfRef.Controller_tb__DOT__start));
        bufp->chgIData(oldp+114,(vlSelfRef.Controller_tb__DOT__test_errors),32);
        bufp->chgIData(oldp+115,(vlSelfRef.Controller_tb__DOT__m),32);
        bufp->chgCData(oldp+116,(vlSelfRef.Controller_tb__DOT__A[0U][0U]),4);
        bufp->chgCData(oldp+117,(vlSelfRef.Controller_tb__DOT__A[0U][1U]),4);
        bufp->chgCData(oldp+118,(vlSelfRef.Controller_tb__DOT__A[0U][2U]),4);
        bufp->chgCData(oldp+119,(vlSelfRef.Controller_tb__DOT__A[1U][0U]),4);
        bufp->chgCData(oldp+120,(vlSelfRef.Controller_tb__DOT__A[1U][1U]),4);
        bufp->chgCData(oldp+121,(vlSelfRef.Controller_tb__DOT__A[1U][2U]),4);
        bufp->chgCData(oldp+122,(vlSelfRef.Controller_tb__DOT__A[2U][0U]),4);
        bufp->chgCData(oldp+123,(vlSelfRef.Controller_tb__DOT__A[2U][1U]),4);
        bufp->chgCData(oldp+124,(vlSelfRef.Controller_tb__DOT__A[2U][2U]),4);
        bufp->chgCData(oldp+125,(vlSelfRef.Controller_tb__DOT__A2[0U][0U]),4);
        bufp->chgCData(oldp+126,(vlSelfRef.Controller_tb__DOT__A2[0U][1U]),4);
        bufp->chgCData(oldp+127,(vlSelfRef.Controller_tb__DOT__A2[0U][2U]),4);
        bufp->chgCData(oldp+128,(vlSelfRef.Controller_tb__DOT__A2[1U][0U]),4);
        bufp->chgCData(oldp+129,(vlSelfRef.Controller_tb__DOT__A2[1U][1U]),4);
        bufp->chgCData(oldp+130,(vlSelfRef.Controller_tb__DOT__A2[1U][2U]),4);
        bufp->chgCData(oldp+131,(vlSelfRef.Controller_tb__DOT__A2[2U][0U]),4);
        bufp->chgCData(oldp+132,(vlSelfRef.Controller_tb__DOT__A2[2U][1U]),4);
        bufp->chgCData(oldp+133,(vlSelfRef.Controller_tb__DOT__A2[2U][2U]),4);
        bufp->chgCData(oldp+134,(vlSelfRef.Controller_tb__DOT__W[0U][0U]),4);
        bufp->chgCData(oldp+135,(vlSelfRef.Controller_tb__DOT__W[0U][1U]),4);
        bufp->chgCData(oldp+136,(vlSelfRef.Controller_tb__DOT__W[0U][2U]),4);
        bufp->chgCData(oldp+137,(vlSelfRef.Controller_tb__DOT__W[1U][0U]),4);
        bufp->chgCData(oldp+138,(vlSelfRef.Controller_tb__DOT__W[1U][1U]),4);
        bufp->chgCData(oldp+139,(vlSelfRef.Controller_tb__DOT__W[1U][2U]),4);
        bufp->chgCData(oldp+140,(vlSelfRef.Controller_tb__DOT__W[2U][0U]),4);
        bufp->chgCData(oldp+141,(vlSelfRef.Controller_tb__DOT__W[2U][1U]),4);
        bufp->chgCData(oldp+142,(vlSelfRef.Controller_tb__DOT__W[2U][2U]),4);
        bufp->chgCData(oldp+143,(vlSelfRef.Controller_tb__DOT__W2[0U][0U]),4);
        bufp->chgCData(oldp+144,(vlSelfRef.Controller_tb__DOT__W2[0U][1U]),4);
        bufp->chgCData(oldp+145,(vlSelfRef.Controller_tb__DOT__W2[0U][2U]),4);
        bufp->chgCData(oldp+146,(vlSelfRef.Controller_tb__DOT__W2[1U][0U]),4);
        bufp->chgCData(oldp+147,(vlSelfRef.Controller_tb__DOT__W2[1U][1U]),4);
        bufp->chgCData(oldp+148,(vlSelfRef.Controller_tb__DOT__W2[1U][2U]),4);
        bufp->chgCData(oldp+149,(vlSelfRef.Controller_tb__DOT__W2[2U][0U]),4);
        bufp->chgCData(oldp+150,(vlSelfRef.Controller_tb__DOT__W2[2U][1U]),4);
        bufp->chgCData(oldp+151,(vlSelfRef.Controller_tb__DOT__W2[2U][2U]),4);
        bufp->chgIData(oldp+152,(vlSelfRef.Controller_tb__DOT__C_exp[0U][0U]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.Controller_tb__DOT__C_exp[0U][1U]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.Controller_tb__DOT__C_exp[0U][2U]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.Controller_tb__DOT__C_exp[1U][0U]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.Controller_tb__DOT__C_exp[1U][1U]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.Controller_tb__DOT__C_exp[1U][2U]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.Controller_tb__DOT__C_exp[2U][0U]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.Controller_tb__DOT__C_exp[2U][1U]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.Controller_tb__DOT__C_exp[2U][2U]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.Controller_tb__DOT__C_exp2[0U][0U]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.Controller_tb__DOT__C_exp2[0U][1U]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.Controller_tb__DOT__C_exp2[0U][2U]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.Controller_tb__DOT__C_exp2[1U][0U]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.Controller_tb__DOT__C_exp2[1U][1U]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.Controller_tb__DOT__C_exp2[1U][2U]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.Controller_tb__DOT__C_exp2[2U][0U]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.Controller_tb__DOT__C_exp2[2U][1U]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.Controller_tb__DOT__C_exp2[2U][2U]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[6U])))) {
        bufp->chgCData(oldp+170,(vlSelfRef.Controller_tb__DOT__a_in[0]),4);
        bufp->chgCData(oldp+171,(vlSelfRef.Controller_tb__DOT__a_in[1]),4);
        bufp->chgCData(oldp+172,(vlSelfRef.Controller_tb__DOT__a_in[2]),4);
        bufp->chgCData(oldp+173,(vlSelfRef.Controller_tb__DOT__b_in[0U][0U]),4);
        bufp->chgCData(oldp+174,(vlSelfRef.Controller_tb__DOT__b_in[0U][1U]),4);
        bufp->chgCData(oldp+175,(vlSelfRef.Controller_tb__DOT__b_in[0U][2U]),4);
        bufp->chgCData(oldp+176,(vlSelfRef.Controller_tb__DOT__b_in[1U][0U]),4);
        bufp->chgCData(oldp+177,(vlSelfRef.Controller_tb__DOT__b_in[1U][1U]),4);
        bufp->chgCData(oldp+178,(vlSelfRef.Controller_tb__DOT__b_in[1U][2U]),4);
        bufp->chgCData(oldp+179,(vlSelfRef.Controller_tb__DOT__b_in[2U][0U]),4);
        bufp->chgCData(oldp+180,(vlSelfRef.Controller_tb__DOT__b_in[2U][1U]),4);
        bufp->chgCData(oldp+181,(vlSelfRef.Controller_tb__DOT__b_in[2U][2U]),4);
        bufp->chgCData(oldp+182,(vlSelfRef.Controller_tb__DOT__cur_a[0]),4);
        bufp->chgCData(oldp+183,(vlSelfRef.Controller_tb__DOT__cur_a[1]),4);
        bufp->chgCData(oldp+184,(vlSelfRef.Controller_tb__DOT__cur_a[2]),4);
        bufp->chgCData(oldp+185,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0]),4);
        bufp->chgCData(oldp+186,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1]),4);
        bufp->chgCData(oldp+187,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2]),4);
        bufp->chgCData(oldp+188,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][0U]),4);
        bufp->chgCData(oldp+189,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][1U]),4);
        bufp->chgCData(oldp+190,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][2U]),4);
        bufp->chgCData(oldp+191,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][0U]),4);
        bufp->chgCData(oldp+192,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][1U]),4);
        bufp->chgCData(oldp+193,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][2U]),4);
        bufp->chgCData(oldp+194,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][0U]),4);
        bufp->chgCData(oldp+195,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][1U]),4);
        bufp->chgCData(oldp+196,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][2U]),4);
        bufp->chgCData(oldp+197,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0U]),4);
        bufp->chgCData(oldp+198,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][0U]),4);
        bufp->chgCData(oldp+199,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][1U]),4);
        bufp->chgCData(oldp+200,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][2U]),4);
        bufp->chgCData(oldp+201,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1U]),4);
        bufp->chgCData(oldp+202,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][0U]),4);
        bufp->chgCData(oldp+203,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][1U]),4);
        bufp->chgCData(oldp+204,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][2U]),4);
        bufp->chgCData(oldp+205,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2U]),4);
        bufp->chgCData(oldp+206,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][0U]),4);
        bufp->chgCData(oldp+207,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][1U]),4);
        bufp->chgCData(oldp+208,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][2U]),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+209,(VController_tb__ConstPool__TABLE_h0cc0fcf8_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+210,(VController_tb__ConstPool__TABLE_h028f018c_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+211,(VController_tb__ConstPool__TABLE_hb7eea91c_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+212,(VController_tb__ConstPool__TABLE_h757529b2_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+213,(VController_tb__ConstPool__TABLE_h0c797d14_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+214,(VController_tb__ConstPool__TABLE_hbabea407_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgCData(oldp+215,(VController_tb__ConstPool__TABLE_h35b5d552_0
                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),2);
        bufp->chgBit(oldp+216,(vlSelfRef.Controller_tb__DOT__slot_in[0]));
        bufp->chgBit(oldp+217,(vlSelfRef.Controller_tb__DOT__slot_in[1]));
        bufp->chgBit(oldp+218,(vlSelfRef.Controller_tb__DOT__slot_in[2]));
        bufp->chgSData(oldp+219,(vlSelfRef.Controller_tb__DOT__result_matrix[0]),10);
        bufp->chgSData(oldp+220,(vlSelfRef.Controller_tb__DOT__result_matrix[1]),10);
        bufp->chgSData(oldp+221,(vlSelfRef.Controller_tb__DOT__result_matrix[2]),10);
        bufp->chgBit(oldp+222,(vlSelfRef.Controller_tb__DOT__cur_s));
        VController_tb___024root__trace_chg_dtype____8(vlSelf, bufp, 223, vlSelfRef.Controller_tb__DOT__dly_a);
        VController_tb___024root__trace_chg_dtype____9(vlSelf, bufp, 229, vlSelfRef.Controller_tb__DOT__dly_s);
        bufp->chgCData(oldp+231,(vlSelfRef.Controller_tb__DOT__ctrl__DOT__state),3);
        bufp->chgCData(oldp+232,(VController_tb__ConstPool__TABLE_hf261e1ac_0
                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),3);
        bufp->chgCData(oldp+233,(vlSelfRef.Controller_tb__DOT__ctrl__DOT__cycle_count),2);
        bufp->chgBit(oldp+234,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[0]));
        bufp->chgBit(oldp+235,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[1]));
        bufp->chgBit(oldp+236,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[2]));
        bufp->chgSData(oldp+237,(vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[0]),10);
        bufp->chgSData(oldp+238,(vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[1]),10);
        bufp->chgSData(oldp+239,(vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[2]),10);
        bufp->chgCData(oldp+240,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][2U]),4);
        bufp->chgCData(oldp+241,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U]),4);
        bufp->chgCData(oldp+242,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U]),4);
        bufp->chgCData(oldp+243,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][2U]),4);
        bufp->chgCData(oldp+244,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U]),4);
        bufp->chgCData(oldp+245,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U]),4);
        bufp->chgCData(oldp+246,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][2U]),4);
        bufp->chgCData(oldp+247,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U]),4);
        bufp->chgCData(oldp+248,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U]),4);
        bufp->chgSData(oldp+249,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][2U]),10);
        bufp->chgSData(oldp+250,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][1U]),10);
        bufp->chgSData(oldp+251,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][0U]),10);
        bufp->chgSData(oldp+252,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][2U]),10);
        bufp->chgSData(oldp+253,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][1U]),10);
        bufp->chgSData(oldp+254,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][0U]),10);
        bufp->chgSData(oldp+255,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][2U]),10);
        bufp->chgSData(oldp+256,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][1U]),10);
        bufp->chgSData(oldp+257,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][0U]),10);
        bufp->chgBit(oldp+258,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][0U]));
        bufp->chgBit(oldp+259,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][1U]));
        bufp->chgBit(oldp+260,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][2U]));
        bufp->chgBit(oldp+261,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][0U]));
        bufp->chgBit(oldp+262,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][1U]));
        bufp->chgBit(oldp+263,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][2U]));
        bufp->chgBit(oldp+264,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][0U]));
        bufp->chgBit(oldp+265,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][1U]));
        bufp->chgBit(oldp+266,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][2U]));
        bufp->chgBit(oldp+267,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[0U]));
        bufp->chgBit(oldp+268,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+269,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+270,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+271,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+272,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+273,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+274,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][0U]));
        bufp->chgCData(oldp+275,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U]),4);
        bufp->chgBit(oldp+276,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+277,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+278,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+279,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+280,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+281,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+282,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U]) 
                                | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+283,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][1U]));
        bufp->chgCData(oldp+284,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U]),4);
        bufp->chgBit(oldp+285,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+286,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+287,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+288,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+289,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+290,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+291,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U]) 
                                | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+292,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[1U]));
        bufp->chgSData(oldp+293,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][0U]),10);
        bufp->chgBit(oldp+294,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+295,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+296,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+297,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+298,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+299,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+300,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][0U]));
        bufp->chgCData(oldp+301,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U]),4);
        bufp->chgSData(oldp+302,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][1U]),10);
        bufp->chgBit(oldp+303,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+304,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+305,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+306,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+307,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+308,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+309,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U]) 
                                | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+310,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][1U]));
        bufp->chgCData(oldp+311,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U]),4);
        bufp->chgSData(oldp+312,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][2U]),10);
        bufp->chgBit(oldp+313,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+314,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+315,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+316,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+317,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+318,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+319,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U]) 
                                | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+320,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[2U]));
        bufp->chgSData(oldp+321,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][0U]),10);
        bufp->chgBit(oldp+322,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+323,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+324,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+325,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+326,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+327,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+328,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][0U]));
        bufp->chgCData(oldp+329,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U]),4);
        bufp->chgSData(oldp+330,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][1U]),10);
        bufp->chgBit(oldp+331,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+332,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+333,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+334,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+335,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+336,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+337,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U]) 
                                | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+338,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][1U]));
        bufp->chgCData(oldp+339,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U]),4);
        bufp->chgSData(oldp+340,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][2U]),10);
        bufp->chgBit(oldp+341,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+342,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+343,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+344,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+345,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+346,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+347,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U]) 
                                | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
    }
    bufp->chgBit(oldp+348,(vlSelfRef.Controller_tb__DOT__clk));
    bufp->chgIData(oldp+349,(vlSelfRef.Controller_tb__DOT__errors),32);
    bufp->chgIData(oldp+350,(vlSelfRef.Controller_tb__DOT__checks),32);
    bufp->chgBit(oldp+351,(((0U == vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0U]) 
                            | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
    bufp->chgBit(oldp+352,(((0U == vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1U]) 
                            | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
    bufp->chgBit(oldp+353,(((0U == vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2U]) 
                            | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
}

void VController_tb___024root__trace_chg_dtype____0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
}

void VController_tb___024root__trace_chg_dtype____1(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____1\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
}

void VController_tb___024root__trace_chg_dtype____2(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____2\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
}

void VController_tb___024root__trace_chg_dtype____3(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____3\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
}

void VController_tb___024root__trace_chg_dtype____4(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____4\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
}

void VController_tb___024root__trace_chg_dtype____5(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____5\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
}

void VController_tb___024root__trace_chg_dtype____6(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____6\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
}

void VController_tb___024root__trace_chg_dtype____7(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____7\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
}

void VController_tb___024root__trace_chg_dtype____8(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____8\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0U][0U]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[0U][1U]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[0U][2U]),4);
    bufp->chgCData(oldp+3,(__VdtypeVar[1U][0U]),4);
    bufp->chgCData(oldp+4,(__VdtypeVar[1U][1U]),4);
    bufp->chgCData(oldp+5,(__VdtypeVar[1U][2U]),4);
}

void VController_tb___024root__trace_chg_dtype____9(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_chg_dtype____9\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
}

void VController_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_cleanup\n"); );
    // Body
    VController_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VController_tb___024root*>(voidSelf);
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}

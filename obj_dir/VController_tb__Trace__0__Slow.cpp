// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VController_tb__Syms.h"


VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____10(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____11(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____12(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____13(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____14(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____15(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____16(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____17(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____18(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____19(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____20(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____21(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____22(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____23(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____24(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____25(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____26(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____27(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____29(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____30(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_sub__TOP__0(VController_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_sub__TOP__0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "Controller_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+229,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+329,0,"row_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+330,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+331,0,"feed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+332,0,"job_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+333,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"entry_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "slot_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+335+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "a_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+287+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "b_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+290,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+291,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+292,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+293,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+294,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+295,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+296,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+297,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+298,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "result_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+338+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+469,0,"checks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"test_errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+473,0,"m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "A", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+231,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+233,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "A2", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+240,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+241,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+243,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+245,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+247,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+248,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "W", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+249,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+255,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "W2", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+262,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "C_exp", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+267,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+270,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+272,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+273,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+275,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "C_exp2", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+276,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+277,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+278,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+280,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+282,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+283,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);

    VController_tb___024root__trace_init_dtype____10(vlSelf, tracep, "e_w_load", 0, c+0, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____11(vlSelf, tracep, "e_load_slot", 0, c+14, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____12(vlSelf, tracep, "e_en", 0, c+28, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____13(vlSelf, tracep, "e_feed", 0, c+42, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____14(vlSelf, tracep, "e_row_slot", 0, c+56, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____15(vlSelf, tracep, "e_row_idx", 0, c+70, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____16(vlSelf, tracep, "e_done", 0, c+84, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____17(vlSelf, tracep, "e_state", 0, c+98, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____18(vlSelf, tracep, "s_w_load", 0, c+112, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____19(vlSelf, tracep, "s_load_slot", 0, c+123, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____20(vlSelf, tracep, "s_en", 0, c+134, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____21(vlSelf, tracep, "s_feed", 0, c+145, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____22(vlSelf, tracep, "s_row_slot", 0, c+156, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____23(vlSelf, tracep, "s_row_idx", 0, c+167, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____24(vlSelf, tracep, "s_done", 0, c+178, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____25(vlSelf, tracep, "s_state", 0, c+189, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____26(vlSelf, tracep, "l_w_load", 0, c+200, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____27(vlSelf, tracep, "l_load_slot", 0, c+214, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BIT(tracep,c+285,0,"push0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+286,0,"push1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "cur_a", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+299+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+341,0,"cur_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);

    VController_tb___024root__trace_init_dtype____29(vlSelf, tracep, "dly_a", 0, c+342, VerilatedTraceSigDirection::NONE);

    VController_tb___024root__trace_init_dtype____30(vlSelf, tracep, "dly_s", 0, c+348, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "ctrl", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+332,0,"job_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"entry_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+329,0,"row_slot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+330,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+331,0,"feed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+333,0,"row_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"DRAIN_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+476,0,"PRELOAD_AT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"CW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+352,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "slot_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+353+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "a_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+302+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "b_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+306,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+307,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+313,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "result_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+356+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "a_wire", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+359,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+364,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+365,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "p_wire", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+373,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+376,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "slot_wire", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BIT(tracep,c+377,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+379,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+382,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BIT(tracep,c+383,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+384,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+386,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+387,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+396,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+402,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+403,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+404,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+405,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+406,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+407,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+408,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+410,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+411,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+318,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+319,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+413,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+414,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+415,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+418,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+422,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+428,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+429,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+432,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+433,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+434,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+435,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+441,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+442,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+443,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+444,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+445,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+472,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+447,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+448,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+449,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+450,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+451,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+452,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+453,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+454,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+455,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+457,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+325,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+465,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+466,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____10(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____10(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____10\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____10(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____10(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____10\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____11(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____11(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____11\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____11(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____11(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____11\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____12(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____12(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____12\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____12(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____12(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____12\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____13(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____13(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____13\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____13(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____13(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____13\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____14(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____14(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____14\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____14(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____14(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____14\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____15(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____15(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____15\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____15(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____15(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____15\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____16(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____16(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____16\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____16(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____16(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____16\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____17(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____17(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____17\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____17(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____17(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____17\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____18(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____18(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____18\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____18(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____18(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____18\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 10);
    for (int i = 0; i < 11; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____19(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____19(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____19\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____19(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____19(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____19\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 10);
    for (int i = 0; i < 11; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____20(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____20(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____20\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____20(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____20(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____20\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 10);
    for (int i = 0; i < 11; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____21(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____21(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____21\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____21(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____21(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____21\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 10);
    for (int i = 0; i < 11; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____22(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____22(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____22\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____22(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____22(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____22\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 10);
    for (int i = 0; i < 11; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____23(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____23(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____23\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____23(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____23(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____23\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 10);
    for (int i = 0; i < 11; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____24(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____24(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____24\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____24(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____24(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____24\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 10);
    for (int i = 0; i < 11; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____25(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____25(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____25\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____25(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____25(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____25\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 10);
    for (int i = 0; i < 11; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____26(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____26(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____26\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____26(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____26(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____26\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____27(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____27(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____27\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____27(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____27(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____27\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 13);
    for (int i = 0; i < 14; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____29(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____29(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____29\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____29(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____29(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____29\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____30(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype____30(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype____30\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_dtype_sub____30(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_dtype_sub____30(VController_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_dtype_sub____30\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_init_top(VController_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_init_top\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VController_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VController_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VController_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VController_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VController_tb___024root__trace_register(VController_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_register\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VController_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VController_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VController_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VController_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VController_tb___024root__trace_const_0_sub_0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VController_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_const_0\n"); );
    // Body
    VController_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VController_tb___024root*>(voidSelf);
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VController_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VController_tb___024root__trace_const_0_sub_0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_const_0_sub_0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+473,(vlSelfRef.Controller_tb__DOT__m),32);
    bufp->fullIData(oldp+474,(3U),32);
    bufp->fullIData(oldp+475,(4U),32);
    bufp->fullIData(oldp+476,(1U),32);
    bufp->fullIData(oldp+477,(2U),32);
    bufp->fullSData(oldp+478,(0U),10);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_0_sub_0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VController_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_0\n"); );
    // Body
    VController_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VController_tb___024root*>(voidSelf);
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VController_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____1(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____2(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____3(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____4(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____5(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____6(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____7(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____8(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____9(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____10(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____11(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____12(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____13(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____14(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____15(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____16(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____17(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar);
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h08a72cc3_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h028f018c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h82a00311_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h757529b2_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h0c797d14_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_hbabea407_0;
extern const VlUnpacked<CData/*1:0*/, 128> VController_tb__ConstPool__TABLE_h35b5d552_0;
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____18(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 2>& __VdtypeVar);
VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____19(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
extern const VlUnpacked<CData/*2:0*/, 128> VController_tb__ConstPool__TABLE_hf261e1ac_0;

VL_ATTR_COLD void VController_tb___024root__trace_full_0_sub_0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_0_sub_0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VController_tb___024root__trace_full_dtype____0(vlSelf, bufp, 0, vlSelfRef.Controller_tb__DOT__e_w_load);
    VController_tb___024root__trace_full_dtype____1(vlSelf, bufp, 14, vlSelfRef.Controller_tb__DOT__e_load_slot);
    VController_tb___024root__trace_full_dtype____2(vlSelf, bufp, 28, vlSelfRef.Controller_tb__DOT__e_en);
    VController_tb___024root__trace_full_dtype____3(vlSelf, bufp, 42, vlSelfRef.Controller_tb__DOT__e_feed);
    VController_tb___024root__trace_full_dtype____4(vlSelf, bufp, 56, vlSelfRef.Controller_tb__DOT__e_row_slot);
    VController_tb___024root__trace_full_dtype____5(vlSelf, bufp, 70, vlSelfRef.Controller_tb__DOT__e_row_idx);
    VController_tb___024root__trace_full_dtype____6(vlSelf, bufp, 84, vlSelfRef.Controller_tb__DOT__e_done);
    VController_tb___024root__trace_full_dtype____7(vlSelf, bufp, 98, vlSelfRef.Controller_tb__DOT__e_state);
    VController_tb___024root__trace_full_dtype____8(vlSelf, bufp, 112, vlSelfRef.Controller_tb__DOT__s_w_load);
    VController_tb___024root__trace_full_dtype____9(vlSelf, bufp, 123, vlSelfRef.Controller_tb__DOT__s_load_slot);
    VController_tb___024root__trace_full_dtype____10(vlSelf, bufp, 134, vlSelfRef.Controller_tb__DOT__s_en);
    VController_tb___024root__trace_full_dtype____11(vlSelf, bufp, 145, vlSelfRef.Controller_tb__DOT__s_feed);
    VController_tb___024root__trace_full_dtype____12(vlSelf, bufp, 156, vlSelfRef.Controller_tb__DOT__s_row_slot);
    VController_tb___024root__trace_full_dtype____13(vlSelf, bufp, 167, vlSelfRef.Controller_tb__DOT__s_row_idx);
    VController_tb___024root__trace_full_dtype____14(vlSelf, bufp, 178, vlSelfRef.Controller_tb__DOT__s_done);
    VController_tb___024root__trace_full_dtype____15(vlSelf, bufp, 189, vlSelfRef.Controller_tb__DOT__s_state);
    VController_tb___024root__trace_full_dtype____16(vlSelf, bufp, 200, vlSelfRef.Controller_tb__DOT__l_w_load);
    VController_tb___024root__trace_full_dtype____17(vlSelf, bufp, 214, vlSelfRef.Controller_tb__DOT__l_load_slot);
    bufp->fullBit(oldp+228,(vlSelfRef.Controller_tb__DOT__rst_n));
    bufp->fullBit(oldp+229,(vlSelfRef.Controller_tb__DOT__start));
    bufp->fullIData(oldp+230,(vlSelfRef.Controller_tb__DOT__test_errors),32);
    bufp->fullCData(oldp+231,(vlSelfRef.Controller_tb__DOT__A[0U][0U]),4);
    bufp->fullCData(oldp+232,(vlSelfRef.Controller_tb__DOT__A[0U][1U]),4);
    bufp->fullCData(oldp+233,(vlSelfRef.Controller_tb__DOT__A[0U][2U]),4);
    bufp->fullCData(oldp+234,(vlSelfRef.Controller_tb__DOT__A[1U][0U]),4);
    bufp->fullCData(oldp+235,(vlSelfRef.Controller_tb__DOT__A[1U][1U]),4);
    bufp->fullCData(oldp+236,(vlSelfRef.Controller_tb__DOT__A[1U][2U]),4);
    bufp->fullCData(oldp+237,(vlSelfRef.Controller_tb__DOT__A[2U][0U]),4);
    bufp->fullCData(oldp+238,(vlSelfRef.Controller_tb__DOT__A[2U][1U]),4);
    bufp->fullCData(oldp+239,(vlSelfRef.Controller_tb__DOT__A[2U][2U]),4);
    bufp->fullCData(oldp+240,(vlSelfRef.Controller_tb__DOT__A2[0U][0U]),4);
    bufp->fullCData(oldp+241,(vlSelfRef.Controller_tb__DOT__A2[0U][1U]),4);
    bufp->fullCData(oldp+242,(vlSelfRef.Controller_tb__DOT__A2[0U][2U]),4);
    bufp->fullCData(oldp+243,(vlSelfRef.Controller_tb__DOT__A2[1U][0U]),4);
    bufp->fullCData(oldp+244,(vlSelfRef.Controller_tb__DOT__A2[1U][1U]),4);
    bufp->fullCData(oldp+245,(vlSelfRef.Controller_tb__DOT__A2[1U][2U]),4);
    bufp->fullCData(oldp+246,(vlSelfRef.Controller_tb__DOT__A2[2U][0U]),4);
    bufp->fullCData(oldp+247,(vlSelfRef.Controller_tb__DOT__A2[2U][1U]),4);
    bufp->fullCData(oldp+248,(vlSelfRef.Controller_tb__DOT__A2[2U][2U]),4);
    bufp->fullCData(oldp+249,(vlSelfRef.Controller_tb__DOT__W[0U][0U]),4);
    bufp->fullCData(oldp+250,(vlSelfRef.Controller_tb__DOT__W[0U][1U]),4);
    bufp->fullCData(oldp+251,(vlSelfRef.Controller_tb__DOT__W[0U][2U]),4);
    bufp->fullCData(oldp+252,(vlSelfRef.Controller_tb__DOT__W[1U][0U]),4);
    bufp->fullCData(oldp+253,(vlSelfRef.Controller_tb__DOT__W[1U][1U]),4);
    bufp->fullCData(oldp+254,(vlSelfRef.Controller_tb__DOT__W[1U][2U]),4);
    bufp->fullCData(oldp+255,(vlSelfRef.Controller_tb__DOT__W[2U][0U]),4);
    bufp->fullCData(oldp+256,(vlSelfRef.Controller_tb__DOT__W[2U][1U]),4);
    bufp->fullCData(oldp+257,(vlSelfRef.Controller_tb__DOT__W[2U][2U]),4);
    bufp->fullCData(oldp+258,(vlSelfRef.Controller_tb__DOT__W2[0U][0U]),4);
    bufp->fullCData(oldp+259,(vlSelfRef.Controller_tb__DOT__W2[0U][1U]),4);
    bufp->fullCData(oldp+260,(vlSelfRef.Controller_tb__DOT__W2[0U][2U]),4);
    bufp->fullCData(oldp+261,(vlSelfRef.Controller_tb__DOT__W2[1U][0U]),4);
    bufp->fullCData(oldp+262,(vlSelfRef.Controller_tb__DOT__W2[1U][1U]),4);
    bufp->fullCData(oldp+263,(vlSelfRef.Controller_tb__DOT__W2[1U][2U]),4);
    bufp->fullCData(oldp+264,(vlSelfRef.Controller_tb__DOT__W2[2U][0U]),4);
    bufp->fullCData(oldp+265,(vlSelfRef.Controller_tb__DOT__W2[2U][1U]),4);
    bufp->fullCData(oldp+266,(vlSelfRef.Controller_tb__DOT__W2[2U][2U]),4);
    bufp->fullIData(oldp+267,(vlSelfRef.Controller_tb__DOT__C_exp[0U][0U]),32);
    bufp->fullIData(oldp+268,(vlSelfRef.Controller_tb__DOT__C_exp[0U][1U]),32);
    bufp->fullIData(oldp+269,(vlSelfRef.Controller_tb__DOT__C_exp[0U][2U]),32);
    bufp->fullIData(oldp+270,(vlSelfRef.Controller_tb__DOT__C_exp[1U][0U]),32);
    bufp->fullIData(oldp+271,(vlSelfRef.Controller_tb__DOT__C_exp[1U][1U]),32);
    bufp->fullIData(oldp+272,(vlSelfRef.Controller_tb__DOT__C_exp[1U][2U]),32);
    bufp->fullIData(oldp+273,(vlSelfRef.Controller_tb__DOT__C_exp[2U][0U]),32);
    bufp->fullIData(oldp+274,(vlSelfRef.Controller_tb__DOT__C_exp[2U][1U]),32);
    bufp->fullIData(oldp+275,(vlSelfRef.Controller_tb__DOT__C_exp[2U][2U]),32);
    bufp->fullIData(oldp+276,(vlSelfRef.Controller_tb__DOT__C_exp2[0U][0U]),32);
    bufp->fullIData(oldp+277,(vlSelfRef.Controller_tb__DOT__C_exp2[0U][1U]),32);
    bufp->fullIData(oldp+278,(vlSelfRef.Controller_tb__DOT__C_exp2[0U][2U]),32);
    bufp->fullIData(oldp+279,(vlSelfRef.Controller_tb__DOT__C_exp2[1U][0U]),32);
    bufp->fullIData(oldp+280,(vlSelfRef.Controller_tb__DOT__C_exp2[1U][1U]),32);
    bufp->fullIData(oldp+281,(vlSelfRef.Controller_tb__DOT__C_exp2[1U][2U]),32);
    bufp->fullIData(oldp+282,(vlSelfRef.Controller_tb__DOT__C_exp2[2U][0U]),32);
    bufp->fullIData(oldp+283,(vlSelfRef.Controller_tb__DOT__C_exp2[2U][1U]),32);
    bufp->fullIData(oldp+284,(vlSelfRef.Controller_tb__DOT__C_exp2[2U][2U]),32);
    bufp->fullBit(oldp+285,(vlSelfRef.Controller_tb__DOT__push0));
    bufp->fullBit(oldp+286,(vlSelfRef.Controller_tb__DOT__push1));
    bufp->fullCData(oldp+287,(vlSelfRef.Controller_tb__DOT__a_in[0]),4);
    bufp->fullCData(oldp+288,(vlSelfRef.Controller_tb__DOT__a_in[1]),4);
    bufp->fullCData(oldp+289,(vlSelfRef.Controller_tb__DOT__a_in[2]),4);
    bufp->fullCData(oldp+290,(vlSelfRef.Controller_tb__DOT__b_in[0U][0U]),4);
    bufp->fullCData(oldp+291,(vlSelfRef.Controller_tb__DOT__b_in[0U][1U]),4);
    bufp->fullCData(oldp+292,(vlSelfRef.Controller_tb__DOT__b_in[0U][2U]),4);
    bufp->fullCData(oldp+293,(vlSelfRef.Controller_tb__DOT__b_in[1U][0U]),4);
    bufp->fullCData(oldp+294,(vlSelfRef.Controller_tb__DOT__b_in[1U][1U]),4);
    bufp->fullCData(oldp+295,(vlSelfRef.Controller_tb__DOT__b_in[1U][2U]),4);
    bufp->fullCData(oldp+296,(vlSelfRef.Controller_tb__DOT__b_in[2U][0U]),4);
    bufp->fullCData(oldp+297,(vlSelfRef.Controller_tb__DOT__b_in[2U][1U]),4);
    bufp->fullCData(oldp+298,(vlSelfRef.Controller_tb__DOT__b_in[2U][2U]),4);
    bufp->fullCData(oldp+299,(vlSelfRef.Controller_tb__DOT__cur_a[0]),4);
    bufp->fullCData(oldp+300,(vlSelfRef.Controller_tb__DOT__cur_a[1]),4);
    bufp->fullCData(oldp+301,(vlSelfRef.Controller_tb__DOT__cur_a[2]),4);
    bufp->fullCData(oldp+302,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0]),4);
    bufp->fullCData(oldp+303,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1]),4);
    bufp->fullCData(oldp+304,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2]),4);
    bufp->fullCData(oldp+305,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][0U]),4);
    bufp->fullCData(oldp+306,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][1U]),4);
    bufp->fullCData(oldp+307,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][2U]),4);
    bufp->fullCData(oldp+308,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][0U]),4);
    bufp->fullCData(oldp+309,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][1U]),4);
    bufp->fullCData(oldp+310,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][2U]),4);
    bufp->fullCData(oldp+311,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][0U]),4);
    bufp->fullCData(oldp+312,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][1U]),4);
    bufp->fullCData(oldp+313,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][2U]),4);
    bufp->fullCData(oldp+314,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0U]),4);
    bufp->fullCData(oldp+315,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][0U]),4);
    bufp->fullCData(oldp+316,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][1U]),4);
    bufp->fullCData(oldp+317,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][2U]),4);
    bufp->fullCData(oldp+318,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1U]),4);
    bufp->fullCData(oldp+319,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][0U]),4);
    bufp->fullCData(oldp+320,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][1U]),4);
    bufp->fullCData(oldp+321,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][2U]),4);
    bufp->fullCData(oldp+322,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2U]),4);
    bufp->fullCData(oldp+323,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][0U]),4);
    bufp->fullCData(oldp+324,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][1U]),4);
    bufp->fullCData(oldp+325,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][2U]),4);
    bufp->fullBit(oldp+326,(VController_tb__ConstPool__TABLE_h08a72cc3_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+327,(VController_tb__ConstPool__TABLE_h028f018c_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+328,(VController_tb__ConstPool__TABLE_h82a00311_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+329,(VController_tb__ConstPool__TABLE_h757529b2_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+330,(VController_tb__ConstPool__TABLE_h0c797d14_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+331,(VController_tb__ConstPool__TABLE_hbabea407_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+332,((1U & (IData)(vlSelfRef.Controller_tb__DOT__entry_valid))));
    bufp->fullCData(oldp+333,(VController_tb__ConstPool__TABLE_h35b5d552_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),2);
    bufp->fullCData(oldp+334,(vlSelfRef.Controller_tb__DOT__entry_valid),2);
    bufp->fullBit(oldp+335,(vlSelfRef.Controller_tb__DOT__slot_in[0]));
    bufp->fullBit(oldp+336,(vlSelfRef.Controller_tb__DOT__slot_in[1]));
    bufp->fullBit(oldp+337,(vlSelfRef.Controller_tb__DOT__slot_in[2]));
    bufp->fullSData(oldp+338,(vlSelfRef.Controller_tb__DOT__result_matrix[0]),10);
    bufp->fullSData(oldp+339,(vlSelfRef.Controller_tb__DOT__result_matrix[1]),10);
    bufp->fullSData(oldp+340,(vlSelfRef.Controller_tb__DOT__result_matrix[2]),10);
    bufp->fullBit(oldp+341,(vlSelfRef.Controller_tb__DOT__cur_s));
    VController_tb___024root__trace_full_dtype____18(vlSelf, bufp, 342, vlSelfRef.Controller_tb__DOT__dly_a);
    VController_tb___024root__trace_full_dtype____19(vlSelf, bufp, 348, vlSelfRef.Controller_tb__DOT__dly_s);
    bufp->fullCData(oldp+350,(vlSelfRef.Controller_tb__DOT__ctrl__DOT__state),3);
    bufp->fullCData(oldp+351,(VController_tb__ConstPool__TABLE_hf261e1ac_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),3);
    bufp->fullCData(oldp+352,(vlSelfRef.Controller_tb__DOT__ctrl__DOT__cycle_count),2);
    bufp->fullBit(oldp+353,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[0]));
    bufp->fullBit(oldp+354,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[1]));
    bufp->fullBit(oldp+355,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[2]));
    bufp->fullSData(oldp+356,(vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[0]),10);
    bufp->fullSData(oldp+357,(vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[1]),10);
    bufp->fullSData(oldp+358,(vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[2]),10);
    bufp->fullCData(oldp+359,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][2U]),4);
    bufp->fullCData(oldp+360,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U]),4);
    bufp->fullCData(oldp+361,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U]),4);
    bufp->fullCData(oldp+362,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][2U]),4);
    bufp->fullCData(oldp+363,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U]),4);
    bufp->fullCData(oldp+364,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U]),4);
    bufp->fullCData(oldp+365,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][2U]),4);
    bufp->fullCData(oldp+366,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U]),4);
    bufp->fullCData(oldp+367,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U]),4);
    bufp->fullSData(oldp+368,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][2U]),10);
    bufp->fullSData(oldp+369,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][1U]),10);
    bufp->fullSData(oldp+370,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][0U]),10);
    bufp->fullSData(oldp+371,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][2U]),10);
    bufp->fullSData(oldp+372,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][1U]),10);
    bufp->fullSData(oldp+373,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][0U]),10);
    bufp->fullSData(oldp+374,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][2U]),10);
    bufp->fullSData(oldp+375,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][1U]),10);
    bufp->fullSData(oldp+376,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][0U]),10);
    bufp->fullBit(oldp+377,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][0U]));
    bufp->fullBit(oldp+378,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][1U]));
    bufp->fullBit(oldp+379,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][2U]));
    bufp->fullBit(oldp+380,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][0U]));
    bufp->fullBit(oldp+381,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][1U]));
    bufp->fullBit(oldp+382,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][2U]));
    bufp->fullBit(oldp+383,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][0U]));
    bufp->fullBit(oldp+384,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][1U]));
    bufp->fullBit(oldp+385,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][2U]));
    bufp->fullBit(oldp+386,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[0U]));
    bufp->fullBit(oldp+387,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+388,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+389,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+390,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+391,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+392,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+393,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][0U]));
    bufp->fullCData(oldp+394,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U]),4);
    bufp->fullBit(oldp+395,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+396,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+397,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+398,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+399,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+400,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+401,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U]) 
                             | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+402,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][1U]));
    bufp->fullCData(oldp+403,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U]),4);
    bufp->fullBit(oldp+404,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+405,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+406,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+407,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+408,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+409,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+410,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U]) 
                             | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+411,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[1U]));
    bufp->fullSData(oldp+412,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][0U]),10);
    bufp->fullBit(oldp+413,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+414,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+415,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+416,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+417,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+418,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+419,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][0U]));
    bufp->fullCData(oldp+420,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U]),4);
    bufp->fullSData(oldp+421,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][1U]),10);
    bufp->fullBit(oldp+422,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+423,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+424,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+425,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+426,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+427,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+428,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U]) 
                             | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+429,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][1U]));
    bufp->fullCData(oldp+430,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U]),4);
    bufp->fullSData(oldp+431,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][2U]),10);
    bufp->fullBit(oldp+432,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+433,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+434,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+435,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+436,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+437,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+438,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U]) 
                             | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+439,(vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[2U]));
    bufp->fullSData(oldp+440,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][0U]),10);
    bufp->fullBit(oldp+441,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+442,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+443,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+444,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+445,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+446,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+447,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][0U]));
    bufp->fullCData(oldp+448,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U]),4);
    bufp->fullSData(oldp+449,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][1U]),10);
    bufp->fullBit(oldp+450,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+451,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+452,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+453,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+454,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+455,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+456,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U]) 
                             | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+457,(vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][1U]));
    bufp->fullCData(oldp+458,(vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U]),4);
    bufp->fullSData(oldp+459,(vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][2U]),10);
    bufp->fullBit(oldp+460,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+461,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+462,(vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+463,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+464,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+465,(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+466,(((0U == vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U]) 
                             | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+467,(vlSelfRef.Controller_tb__DOT__clk));
    bufp->fullIData(oldp+468,(vlSelfRef.Controller_tb__DOT__errors),32);
    bufp->fullIData(oldp+469,(vlSelfRef.Controller_tb__DOT__checks),32);
    bufp->fullBit(oldp+470,(((0U == vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0U]) 
                             | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+471,(((0U == vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1U]) 
                             | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+472,(((0U == vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2U]) 
                             | (0U == (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____0(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____1(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____1\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____2(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____2\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____3(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____3\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____4(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____4\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____5(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____5\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____6(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____6\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____7(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____7\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____8(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____8\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____9(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____9\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____10(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____10\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____11(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____11\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____12(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____12\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____13(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____13\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____14(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____14\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____15(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 11>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____15\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____16(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____16\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____17(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 14>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____17\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____18(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____18\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0U][0U]),4);
    bufp->fullCData(oldp+1,(__VdtypeVar[0U][1U]),4);
    bufp->fullCData(oldp+2,(__VdtypeVar[0U][2U]),4);
    bufp->fullCData(oldp+3,(__VdtypeVar[1U][0U]),4);
    bufp->fullCData(oldp+4,(__VdtypeVar[1U][1U]),4);
    bufp->fullCData(oldp+5,(__VdtypeVar[1U][2U]),4);
}

VL_ATTR_COLD void VController_tb___024root__trace_full_dtype____19(VController_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root__trace_full_dtype____19\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
}

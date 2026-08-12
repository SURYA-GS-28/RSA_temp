// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_full.h for the primary calling header

#include "Vtestbench_full__pch.h"
#include "Vtestbench_full___024root.h"

VL_ATTR_COLD void Vtestbench_full___024root___eval_initial__TOP(Vtestbench_full___024root* vlSelf);
VlCoroutine Vtestbench_full___024root___eval_initial__TOP__Vtiming__0(Vtestbench_full___024root* vlSelf);
VlCoroutine Vtestbench_full___024root___eval_initial__TOP__Vtiming__1(Vtestbench_full___024root* vlSelf);

void Vtestbench_full___024root___eval_initial(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench_full___024root___eval_initial__TOP(vlSelf);
    Vtestbench_full___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench_full___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__testbench_full__DOT__clk__0 
        = vlSelfRef.testbench_full__DOT__clk;
}

VlCoroutine Vtestbench_full___024root___eval_initial__TOP__Vtiming__0__0(Vtestbench_full___024root* vlSelf);
VlCoroutine Vtestbench_full___024root___eval_initial__TOP__Vtiming__0__1(Vtestbench_full___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtestbench_full___024root___eval_initial__TOP__Vtiming__0(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtestbench_full___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtestbench_full___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
}

extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_he1a65319_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_hf7de7feb_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h7540c221_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_hf6ecb988_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_hf305db21_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h5922c6ae_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h1425e3bc_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_hb5ef9967_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_h616750c0_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_h6ef726e0_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_h4894cb7f_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_hc07363de_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_ha1c472ea_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_h0dd2b71e_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_hcae6bf16_0;

VlCoroutine Vtestbench_full___024root___eval_initial__TOP__Vtiming__0__0(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__0__msg;
    __Vtask_testbench_full__DOT__run_test__0__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__0__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__0__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__1__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__1__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__1__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__1__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__1__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__1__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__1__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__2__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__2__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__2__cond;
    __Vtask_testbench_full__DOT__check_true__2__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__3__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__3__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__3__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__3__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__3__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__3__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__3__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__4__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__4__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__4__actual;
    __Vtask_testbench_full__DOT__check_equal__4__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__4__expected;
    __Vtask_testbench_full__DOT__check_equal__4__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__5__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__5__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__5__actual;
    __Vtask_testbench_full__DOT__check_equal__5__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__5__expected;
    __Vtask_testbench_full__DOT__check_equal__5__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__6__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__6__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__6__actual;
    __Vtask_testbench_full__DOT__check_equal__6__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__6__expected;
    __Vtask_testbench_full__DOT__check_equal__6__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__7__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__7__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__7__cond;
    __Vtask_testbench_full__DOT__check_true__7__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__8__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__8__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__8__cond;
    __Vtask_testbench_full__DOT__check_true__8__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__9__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__9__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__9__actual;
    __Vtask_testbench_full__DOT__check_equal__9__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__9__expected;
    __Vtask_testbench_full__DOT__check_equal__9__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__10__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__10__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__10__actual;
    __Vtask_testbench_full__DOT__check_equal__10__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__10__expected;
    __Vtask_testbench_full__DOT__check_equal__10__expected = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__11__msg;
    __Vtask_testbench_full__DOT__run_test__11__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__11__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__11__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__12__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__12__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__12__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__12__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__12__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__12__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__12__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__13__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__13__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__13__cond;
    __Vtask_testbench_full__DOT__check_true__13__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__14__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__14__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__14__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__14__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__14__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__14__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__14__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__15__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__15__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__15__actual;
    __Vtask_testbench_full__DOT__check_equal__15__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__15__expected;
    __Vtask_testbench_full__DOT__check_equal__15__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__16__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__16__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__16__actual;
    __Vtask_testbench_full__DOT__check_equal__16__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__16__expected;
    __Vtask_testbench_full__DOT__check_equal__16__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__17__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__17__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__17__actual;
    __Vtask_testbench_full__DOT__check_equal__17__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__17__expected;
    __Vtask_testbench_full__DOT__check_equal__17__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__18__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__18__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__18__cond;
    __Vtask_testbench_full__DOT__check_true__18__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__19__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__19__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__19__cond;
    __Vtask_testbench_full__DOT__check_true__19__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__20__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__20__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__20__actual;
    __Vtask_testbench_full__DOT__check_equal__20__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__20__expected;
    __Vtask_testbench_full__DOT__check_equal__20__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__21__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__21__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__21__actual;
    __Vtask_testbench_full__DOT__check_equal__21__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__21__expected;
    __Vtask_testbench_full__DOT__check_equal__21__expected = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__22__msg;
    __Vtask_testbench_full__DOT__run_test__22__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__22__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__22__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__23__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__23__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__23__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__23__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__23__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__23__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__23__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__24__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__24__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__24__cond;
    __Vtask_testbench_full__DOT__check_true__24__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__25__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__25__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__25__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__25__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__25__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__25__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__25__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__26__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__26__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__26__actual;
    __Vtask_testbench_full__DOT__check_equal__26__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__26__expected;
    __Vtask_testbench_full__DOT__check_equal__26__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__27__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__27__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__27__actual;
    __Vtask_testbench_full__DOT__check_equal__27__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__27__expected;
    __Vtask_testbench_full__DOT__check_equal__27__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__28__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__28__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__28__actual;
    __Vtask_testbench_full__DOT__check_equal__28__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__28__expected;
    __Vtask_testbench_full__DOT__check_equal__28__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__29__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__29__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__29__cond;
    __Vtask_testbench_full__DOT__check_true__29__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__30__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__30__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__30__cond;
    __Vtask_testbench_full__DOT__check_true__30__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__31__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__31__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__31__actual;
    __Vtask_testbench_full__DOT__check_equal__31__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__31__expected;
    __Vtask_testbench_full__DOT__check_equal__31__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__32__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__32__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__32__actual;
    __Vtask_testbench_full__DOT__check_equal__32__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__32__expected;
    __Vtask_testbench_full__DOT__check_equal__32__expected = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__33__msg;
    __Vtask_testbench_full__DOT__run_test__33__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__33__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__33__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__34__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__34__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__34__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__34__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__34__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__34__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__34__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__35__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__35__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__35__cond;
    __Vtask_testbench_full__DOT__check_true__35__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__36__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__36__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__36__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__36__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__36__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__36__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__36__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__37__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__37__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__37__actual;
    __Vtask_testbench_full__DOT__check_equal__37__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__37__expected;
    __Vtask_testbench_full__DOT__check_equal__37__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__38__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__38__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__38__actual;
    __Vtask_testbench_full__DOT__check_equal__38__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__38__expected;
    __Vtask_testbench_full__DOT__check_equal__38__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__39__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__39__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__39__actual;
    __Vtask_testbench_full__DOT__check_equal__39__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__39__expected;
    __Vtask_testbench_full__DOT__check_equal__39__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__40__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__40__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__40__cond;
    __Vtask_testbench_full__DOT__check_true__40__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__41__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__41__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__41__cond;
    __Vtask_testbench_full__DOT__check_true__41__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__42__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__42__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__42__actual;
    __Vtask_testbench_full__DOT__check_equal__42__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__42__expected;
    __Vtask_testbench_full__DOT__check_equal__42__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__43__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__43__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__43__actual;
    __Vtask_testbench_full__DOT__check_equal__43__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__43__expected;
    __Vtask_testbench_full__DOT__check_equal__43__expected = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__44__msg;
    __Vtask_testbench_full__DOT__run_test__44__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__44__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__44__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__45__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__45__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__45__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__45__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__45__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__45__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__45__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__46__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__46__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__46__cond;
    __Vtask_testbench_full__DOT__check_true__46__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__47__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__47__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__47__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__47__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__47__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__47__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__47__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__48__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__48__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__48__actual;
    __Vtask_testbench_full__DOT__check_equal__48__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__48__expected;
    __Vtask_testbench_full__DOT__check_equal__48__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__49__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__49__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__49__actual;
    __Vtask_testbench_full__DOT__check_equal__49__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__49__expected;
    __Vtask_testbench_full__DOT__check_equal__49__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__50__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__50__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__50__actual;
    __Vtask_testbench_full__DOT__check_equal__50__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__50__expected;
    __Vtask_testbench_full__DOT__check_equal__50__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__51__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__51__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__51__cond;
    __Vtask_testbench_full__DOT__check_true__51__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__52__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__52__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__52__cond;
    __Vtask_testbench_full__DOT__check_true__52__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__53__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__53__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__53__actual;
    __Vtask_testbench_full__DOT__check_equal__53__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__53__expected;
    __Vtask_testbench_full__DOT__check_equal__53__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__54__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__54__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__54__actual;
    __Vtask_testbench_full__DOT__check_equal__54__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__54__expected;
    __Vtask_testbench_full__DOT__check_equal__54__expected = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__55__msg;
    __Vtask_testbench_full__DOT__run_test__55__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__55__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__55__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__56__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__56__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__56__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__56__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__56__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__56__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__56__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__57__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__57__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__57__cond;
    __Vtask_testbench_full__DOT__check_true__57__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__58__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__58__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__58__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__58__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__58__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__58__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__58__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__59__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__59__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__59__actual;
    __Vtask_testbench_full__DOT__check_equal__59__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__59__expected;
    __Vtask_testbench_full__DOT__check_equal__59__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__60__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__60__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__60__actual;
    __Vtask_testbench_full__DOT__check_equal__60__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__60__expected;
    __Vtask_testbench_full__DOT__check_equal__60__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__61__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__61__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__61__actual;
    __Vtask_testbench_full__DOT__check_equal__61__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__61__expected;
    __Vtask_testbench_full__DOT__check_equal__61__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__62__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__62__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__62__cond;
    __Vtask_testbench_full__DOT__check_true__62__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__63__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__63__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__63__cond;
    __Vtask_testbench_full__DOT__check_true__63__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__64__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__64__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__64__actual;
    __Vtask_testbench_full__DOT__check_equal__64__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__64__expected;
    __Vtask_testbench_full__DOT__check_equal__64__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__65__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__65__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__65__actual;
    __Vtask_testbench_full__DOT__check_equal__65__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__65__expected;
    __Vtask_testbench_full__DOT__check_equal__65__expected = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__66__msg;
    __Vtask_testbench_full__DOT__run_test__66__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__66__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__66__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__67__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__67__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__67__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__67__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__67__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__67__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__67__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__68__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__68__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__68__cond;
    __Vtask_testbench_full__DOT__check_true__68__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__69__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__69__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__69__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__69__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__69__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__69__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__69__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__70__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__70__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__70__actual;
    __Vtask_testbench_full__DOT__check_equal__70__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__70__expected;
    __Vtask_testbench_full__DOT__check_equal__70__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__71__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__71__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__71__actual;
    __Vtask_testbench_full__DOT__check_equal__71__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__71__expected;
    __Vtask_testbench_full__DOT__check_equal__71__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__72__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__72__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__72__actual;
    __Vtask_testbench_full__DOT__check_equal__72__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__72__expected;
    __Vtask_testbench_full__DOT__check_equal__72__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__73__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__73__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__73__cond;
    __Vtask_testbench_full__DOT__check_true__73__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__74__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__74__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__74__cond;
    __Vtask_testbench_full__DOT__check_true__74__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__75__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__75__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__75__actual;
    __Vtask_testbench_full__DOT__check_equal__75__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__75__expected;
    __Vtask_testbench_full__DOT__check_equal__75__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__76__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__76__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__76__actual;
    __Vtask_testbench_full__DOT__check_equal__76__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__76__expected;
    __Vtask_testbench_full__DOT__check_equal__76__expected = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__77__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__77__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__78__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__78__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__78__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__78__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__78__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__78__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__78__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__79__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__79__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__79__cond;
    __Vtask_testbench_full__DOT__check_true__79__cond = 0;
    // Body
    vlSelfRef.testbench_full__DOT__pass_count = 0U;
    vlSelfRef.testbench_full__DOT__fail_count = 0U;
    vlSelfRef.testbench_full__DOT__check_count = 0U;
    VL_WRITEF_NX("====================================================\n  RSA-SPI Pipeline -- Comprehensive Self-Checking TB\n  Golden model keys: e=7, d=1783, n=3233\n====================================================\n",0);
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = 0U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         456);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         456);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__run_test__0__label[0U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[0U];
    __Vtask_testbench_full__DOT__run_test__0__label[1U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[1U];
    __Vtask_testbench_full__DOT__run_test__0__label[2U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[2U];
    __Vtask_testbench_full__DOT__run_test__0__label[3U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[3U];
    __Vtask_testbench_full__DOT__run_test__0__label[4U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[4U];
    __Vtask_testbench_full__DOT__run_test__0__label[5U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[5U];
    __Vtask_testbench_full__DOT__run_test__0__label[6U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[6U];
    __Vtask_testbench_full__DOT__run_test__0__label[7U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[7U];
    __Vtask_testbench_full__DOT__run_test__0__label[8U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[8U];
    __Vtask_testbench_full__DOT__run_test__0__label[9U] 
        = Vtestbench_full__ConstPool__CONST_he1a65319_0[9U];
    __Vtask_testbench_full__DOT__run_test__0__msg = 0U;
    __Vfunc_testbench_full__DOT__golden_modexp__1__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__1__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__1__base_in 
        = __Vtask_testbench_full__DOT__run_test__0__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__1__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__1__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__1__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__1__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__0__label.data(),
                 32,__Vtask_testbench_full__DOT__run_test__0__msg,
                 32,__Vtask_testbench_full__DOT__run_test__0__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__0__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__check_true__2__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__2__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__2__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__2__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__2__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__2__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__2__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__2__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__2__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__2__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__2__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__2__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__2__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__2__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__2__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__2__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__2__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__2__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__2__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__2__what.data());
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__3__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__3__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__3__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__3__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__3__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__3__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__3__Vfuncout;
        VL_WRITEF_NX("  cipher_out    = %0# (0x%08x)\n  received_out  = %0# (0x%08x)\n  decrypted_out = %0# (0x%08x)\n  golden cipher = %0# (0x%08x)\n  golden plain  = %0# (0x%08x)\n",0,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain);
        __Vtask_testbench_full__DOT__check_equal__4__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__4__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__4__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__4__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__4__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__4__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__4__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__4__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__4__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__4__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__4__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__4__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__4__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__4__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__4__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__4__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__4__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__4__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__4__actual 
             == __Vtask_testbench_full__DOT__check_equal__4__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__4__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__4__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__4__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__4__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__4__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__5__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__5__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__5__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__5__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__5__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__5__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__5__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__5__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__5__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__5__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__5__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__5__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__5__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__5__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__5__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__5__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__5__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__5__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__5__actual 
             == __Vtask_testbench_full__DOT__check_equal__5__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__5__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__5__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__5__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__5__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__5__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__6__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__6__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__6__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__6__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__6__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__6__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__6__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__6__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__6__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__6__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__6__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__6__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__6__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__6__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__6__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__6__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__6__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__6__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__6__actual 
             == __Vtask_testbench_full__DOT__check_equal__6__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__6__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__6__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__6__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__6__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__6__actual);
        }
        __Vtask_testbench_full__DOT__check_true__7__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__7__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__7__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__7__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__7__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__7__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__7__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__7__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__7__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__7__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__7__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__7__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__7__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__7__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__7__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__7__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__7__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__7__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__7__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__7__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__8__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__8__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__8__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__8__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__8__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__8__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__8__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__8__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__8__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__8__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__8__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__8__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__8__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__8__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__8__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__8__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__8__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__8__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__8__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__8__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__9__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__9__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__9__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__9__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__9__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__9__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__9__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__9__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__9__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__9__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__9__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__9__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__9__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__9__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__9__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__9__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__9__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__9__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__9__actual 
             == __Vtask_testbench_full__DOT__check_equal__9__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__9__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__9__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__9__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__9__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__9__actual);
        }
        if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__0__msg))) {
            __Vtask_testbench_full__DOT__check_equal__10__expected 
                = __Vtask_testbench_full__DOT__run_test__0__msg;
            __Vtask_testbench_full__DOT__check_equal__10__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__10__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__10__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__10__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__10__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__10__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__10__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__10__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__10__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__10__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__10__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__10__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__10__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__10__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__10__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__10__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__10__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__10__actual 
                 == __Vtask_testbench_full__DOT__check_equal__10__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__10__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__10__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__10__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__10__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__10__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,__Vtask_testbench_full__DOT__run_test__0__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__run_test__11__label[0U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[0U];
    __Vtask_testbench_full__DOT__run_test__11__label[1U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[1U];
    __Vtask_testbench_full__DOT__run_test__11__label[2U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[2U];
    __Vtask_testbench_full__DOT__run_test__11__label[3U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[3U];
    __Vtask_testbench_full__DOT__run_test__11__label[4U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[4U];
    __Vtask_testbench_full__DOT__run_test__11__label[5U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[5U];
    __Vtask_testbench_full__DOT__run_test__11__label[6U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[6U];
    __Vtask_testbench_full__DOT__run_test__11__label[7U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[7U];
    __Vtask_testbench_full__DOT__run_test__11__label[8U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[8U];
    __Vtask_testbench_full__DOT__run_test__11__label[9U] 
        = Vtestbench_full__ConstPool__CONST_h616750c0_0[9U];
    __Vtask_testbench_full__DOT__run_test__11__msg = 1U;
    __Vfunc_testbench_full__DOT__golden_modexp__12__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__12__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__12__base_in 
        = __Vtask_testbench_full__DOT__run_test__11__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__12__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__12__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__12__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__12__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__11__label.data(),
                 32,__Vtask_testbench_full__DOT__run_test__11__msg,
                 32,__Vtask_testbench_full__DOT__run_test__11__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__11__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__check_true__13__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__13__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__13__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__13__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__13__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__13__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__13__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__13__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__13__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__13__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__13__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__13__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__13__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__13__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__13__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__13__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__13__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__13__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__13__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__13__what.data());
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__14__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__14__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__14__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__14__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__14__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__14__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__14__Vfuncout;
        VL_WRITEF_NX("  cipher_out    = %0# (0x%08x)\n  received_out  = %0# (0x%08x)\n  decrypted_out = %0# (0x%08x)\n  golden cipher = %0# (0x%08x)\n  golden plain  = %0# (0x%08x)\n",0,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain);
        __Vtask_testbench_full__DOT__check_equal__15__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__15__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__15__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__15__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__15__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__15__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__15__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__15__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__15__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__15__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__15__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__15__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__15__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__15__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__15__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__15__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__15__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__15__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__15__actual 
             == __Vtask_testbench_full__DOT__check_equal__15__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__15__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__15__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__15__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__15__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__15__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__16__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__16__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__16__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__16__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__16__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__16__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__16__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__16__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__16__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__16__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__16__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__16__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__16__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__16__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__16__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__16__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__16__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__16__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__16__actual 
             == __Vtask_testbench_full__DOT__check_equal__16__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__16__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__16__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__16__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__16__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__16__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__17__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__17__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__17__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__17__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__17__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__17__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__17__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__17__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__17__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__17__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__17__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__17__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__17__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__17__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__17__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__17__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__17__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__17__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__17__actual 
             == __Vtask_testbench_full__DOT__check_equal__17__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__17__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__17__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__17__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__17__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__17__actual);
        }
        __Vtask_testbench_full__DOT__check_true__18__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__18__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__18__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__18__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__18__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__18__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__18__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__18__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__18__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__18__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__18__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__18__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__18__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__18__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__18__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__18__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__18__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__18__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__18__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__18__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__19__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__19__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__19__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__19__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__19__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__19__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__19__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__19__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__19__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__19__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__19__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__19__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__19__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__19__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__19__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__19__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__19__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__19__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__19__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__19__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__20__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__20__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__20__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__20__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__20__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__20__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__20__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__20__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__20__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__20__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__20__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__20__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__20__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__20__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__20__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__20__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__20__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__20__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__20__actual 
             == __Vtask_testbench_full__DOT__check_equal__20__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__20__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__20__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__20__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__20__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__20__actual);
        }
        if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__11__msg))) {
            __Vtask_testbench_full__DOT__check_equal__21__expected 
                = __Vtask_testbench_full__DOT__run_test__11__msg;
            __Vtask_testbench_full__DOT__check_equal__21__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__21__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__21__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__21__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__21__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__21__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__21__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__21__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__21__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__21__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__21__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__21__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__21__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__21__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__21__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__21__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__21__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__21__actual 
                 == __Vtask_testbench_full__DOT__check_equal__21__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__21__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__21__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__21__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__21__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__21__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,__Vtask_testbench_full__DOT__run_test__11__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__run_test__22__label[0U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[0U];
    __Vtask_testbench_full__DOT__run_test__22__label[1U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[1U];
    __Vtask_testbench_full__DOT__run_test__22__label[2U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[2U];
    __Vtask_testbench_full__DOT__run_test__22__label[3U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[3U];
    __Vtask_testbench_full__DOT__run_test__22__label[4U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[4U];
    __Vtask_testbench_full__DOT__run_test__22__label[5U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[5U];
    __Vtask_testbench_full__DOT__run_test__22__label[6U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[6U];
    __Vtask_testbench_full__DOT__run_test__22__label[7U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[7U];
    __Vtask_testbench_full__DOT__run_test__22__label[8U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[8U];
    __Vtask_testbench_full__DOT__run_test__22__label[9U] 
        = Vtestbench_full__ConstPool__CONST_h6ef726e0_0[9U];
    __Vtask_testbench_full__DOT__run_test__22__msg = 0xca0U;
    __Vfunc_testbench_full__DOT__golden_modexp__23__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__23__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__23__base_in 
        = __Vtask_testbench_full__DOT__run_test__22__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__23__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__23__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__23__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__23__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__22__label.data(),
                 32,__Vtask_testbench_full__DOT__run_test__22__msg,
                 32,__Vtask_testbench_full__DOT__run_test__22__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__22__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__check_true__24__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__24__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__24__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__24__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__24__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__24__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__24__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__24__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__24__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__24__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__24__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__24__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__24__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__24__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__24__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__24__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__24__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__24__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__24__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__24__what.data());
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__25__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__25__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__25__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__25__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__25__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__25__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__25__Vfuncout;
        VL_WRITEF_NX("  cipher_out    = %0# (0x%08x)\n  received_out  = %0# (0x%08x)\n  decrypted_out = %0# (0x%08x)\n  golden cipher = %0# (0x%08x)\n  golden plain  = %0# (0x%08x)\n",0,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain);
        __Vtask_testbench_full__DOT__check_equal__26__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__26__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__26__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__26__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__26__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__26__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__26__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__26__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__26__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__26__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__26__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__26__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__26__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__26__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__26__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__26__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__26__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__26__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__26__actual 
             == __Vtask_testbench_full__DOT__check_equal__26__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__26__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__26__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__26__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__26__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__26__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__27__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__27__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__27__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__27__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__27__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__27__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__27__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__27__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__27__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__27__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__27__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__27__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__27__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__27__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__27__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__27__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__27__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__27__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__27__actual 
             == __Vtask_testbench_full__DOT__check_equal__27__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__27__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__27__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__27__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__27__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__27__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__28__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__28__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__28__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__28__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__28__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__28__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__28__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__28__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__28__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__28__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__28__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__28__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__28__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__28__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__28__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__28__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__28__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__28__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__28__actual 
             == __Vtask_testbench_full__DOT__check_equal__28__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__28__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__28__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__28__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__28__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__28__actual);
        }
        __Vtask_testbench_full__DOT__check_true__29__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__29__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__29__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__29__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__29__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__29__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__29__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__29__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__29__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__29__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__29__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__29__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__29__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__29__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__29__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__29__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__29__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__29__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__29__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__29__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__30__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__30__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__30__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__30__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__30__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__30__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__30__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__30__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__30__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__30__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__30__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__30__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__30__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__30__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__30__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__30__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__30__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__30__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__30__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__30__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__31__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__31__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__31__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__31__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__31__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__31__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__31__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__31__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__31__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__31__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__31__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__31__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__31__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__31__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__31__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__31__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__31__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__31__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__31__actual 
             == __Vtask_testbench_full__DOT__check_equal__31__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__31__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__31__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__31__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__31__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__31__actual);
        }
        if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__22__msg))) {
            __Vtask_testbench_full__DOT__check_equal__32__expected 
                = __Vtask_testbench_full__DOT__run_test__22__msg;
            __Vtask_testbench_full__DOT__check_equal__32__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__32__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__32__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__32__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__32__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__32__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__32__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__32__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__32__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__32__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__32__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__32__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__32__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__32__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__32__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__32__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__32__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__32__actual 
                 == __Vtask_testbench_full__DOT__check_equal__32__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__32__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__32__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__32__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__32__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__32__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,__Vtask_testbench_full__DOT__run_test__22__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__run_test__33__label[0U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[0U];
    __Vtask_testbench_full__DOT__run_test__33__label[1U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[1U];
    __Vtask_testbench_full__DOT__run_test__33__label[2U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[2U];
    __Vtask_testbench_full__DOT__run_test__33__label[3U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[3U];
    __Vtask_testbench_full__DOT__run_test__33__label[4U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[4U];
    __Vtask_testbench_full__DOT__run_test__33__label[5U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[5U];
    __Vtask_testbench_full__DOT__run_test__33__label[6U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[6U];
    __Vtask_testbench_full__DOT__run_test__33__label[7U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[7U];
    __Vtask_testbench_full__DOT__run_test__33__label[8U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[8U];
    __Vtask_testbench_full__DOT__run_test__33__label[9U] 
        = Vtestbench_full__ConstPool__CONST_h4894cb7f_0[9U];
    __Vtask_testbench_full__DOT__run_test__33__msg = 0x2aU;
    __Vfunc_testbench_full__DOT__golden_modexp__34__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__34__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__34__base_in 
        = __Vtask_testbench_full__DOT__run_test__33__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__34__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__34__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__34__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__34__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__33__label.data(),
                 32,__Vtask_testbench_full__DOT__run_test__33__msg,
                 32,__Vtask_testbench_full__DOT__run_test__33__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__33__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__check_true__35__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__35__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__35__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__35__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__35__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__35__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__35__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__35__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__35__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__35__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__35__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__35__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__35__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__35__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__35__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__35__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__35__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__35__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__35__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__35__what.data());
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__36__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__36__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__36__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__36__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__36__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__36__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__36__Vfuncout;
        VL_WRITEF_NX("  cipher_out    = %0# (0x%08x)\n  received_out  = %0# (0x%08x)\n  decrypted_out = %0# (0x%08x)\n  golden cipher = %0# (0x%08x)\n  golden plain  = %0# (0x%08x)\n",0,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain);
        __Vtask_testbench_full__DOT__check_equal__37__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__37__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__37__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__37__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__37__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__37__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__37__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__37__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__37__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__37__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__37__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__37__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__37__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__37__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__37__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__37__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__37__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__37__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__37__actual 
             == __Vtask_testbench_full__DOT__check_equal__37__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__37__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__37__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__37__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__37__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__37__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__38__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__38__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__38__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__38__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__38__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__38__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__38__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__38__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__38__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__38__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__38__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__38__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__38__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__38__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__38__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__38__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__38__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__38__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__38__actual 
             == __Vtask_testbench_full__DOT__check_equal__38__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__38__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__38__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__38__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__38__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__38__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__39__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__39__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__39__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__39__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__39__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__39__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__39__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__39__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__39__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__39__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__39__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__39__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__39__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__39__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__39__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__39__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__39__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__39__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__39__actual 
             == __Vtask_testbench_full__DOT__check_equal__39__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__39__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__39__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__39__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__39__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__39__actual);
        }
        __Vtask_testbench_full__DOT__check_true__40__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__40__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__40__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__40__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__40__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__40__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__40__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__40__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__40__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__40__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__40__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__40__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__40__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__40__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__40__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__40__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__40__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__40__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__40__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__40__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__41__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__41__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__41__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__41__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__41__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__41__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__41__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__41__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__41__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__41__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__41__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__41__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__41__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__41__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__41__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__41__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__41__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__41__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__41__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__41__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__42__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__42__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__42__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__42__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__42__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__42__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__42__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__42__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__42__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__42__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__42__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__42__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__42__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__42__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__42__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__42__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__42__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__42__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__42__actual 
             == __Vtask_testbench_full__DOT__check_equal__42__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__42__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__42__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__42__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__42__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__42__actual);
        }
        if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__33__msg))) {
            __Vtask_testbench_full__DOT__check_equal__43__expected 
                = __Vtask_testbench_full__DOT__run_test__33__msg;
            __Vtask_testbench_full__DOT__check_equal__43__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__43__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__43__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__43__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__43__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__43__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__43__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__43__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__43__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__43__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__43__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__43__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__43__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__43__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__43__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__43__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__43__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__43__actual 
                 == __Vtask_testbench_full__DOT__check_equal__43__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__43__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__43__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__43__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__43__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__43__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,__Vtask_testbench_full__DOT__run_test__33__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__run_test__44__label[0U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[0U];
    __Vtask_testbench_full__DOT__run_test__44__label[1U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[1U];
    __Vtask_testbench_full__DOT__run_test__44__label[2U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[2U];
    __Vtask_testbench_full__DOT__run_test__44__label[3U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[3U];
    __Vtask_testbench_full__DOT__run_test__44__label[4U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[4U];
    __Vtask_testbench_full__DOT__run_test__44__label[5U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[5U];
    __Vtask_testbench_full__DOT__run_test__44__label[6U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[6U];
    __Vtask_testbench_full__DOT__run_test__44__label[7U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[7U];
    __Vtask_testbench_full__DOT__run_test__44__label[8U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[8U];
    __Vtask_testbench_full__DOT__run_test__44__label[9U] 
        = Vtestbench_full__ConstPool__CONST_hc07363de_0[9U];
    __Vtask_testbench_full__DOT__run_test__44__msg = 0x64U;
    __Vfunc_testbench_full__DOT__golden_modexp__45__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__45__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__45__base_in 
        = __Vtask_testbench_full__DOT__run_test__44__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__45__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__45__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__45__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__45__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__44__label.data(),
                 32,__Vtask_testbench_full__DOT__run_test__44__msg,
                 32,__Vtask_testbench_full__DOT__run_test__44__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__44__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__check_true__46__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__46__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__46__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__46__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__46__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__46__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__46__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__46__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__46__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__46__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__46__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__46__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__46__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__46__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__46__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__46__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__46__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__46__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__46__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__46__what.data());
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__47__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__47__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__47__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__47__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__47__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__47__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__47__Vfuncout;
        VL_WRITEF_NX("  cipher_out    = %0# (0x%08x)\n  received_out  = %0# (0x%08x)\n  decrypted_out = %0# (0x%08x)\n  golden cipher = %0# (0x%08x)\n  golden plain  = %0# (0x%08x)\n",0,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain);
        __Vtask_testbench_full__DOT__check_equal__48__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__48__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__48__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__48__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__48__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__48__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__48__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__48__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__48__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__48__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__48__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__48__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__48__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__48__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__48__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__48__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__48__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__48__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__48__actual 
             == __Vtask_testbench_full__DOT__check_equal__48__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__48__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__48__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__48__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__48__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__48__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__49__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__49__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__49__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__49__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__49__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__49__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__49__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__49__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__49__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__49__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__49__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__49__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__49__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__49__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__49__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__49__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__49__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__49__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__49__actual 
             == __Vtask_testbench_full__DOT__check_equal__49__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__49__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__49__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__49__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__49__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__49__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__50__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__50__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__50__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__50__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__50__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__50__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__50__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__50__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__50__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__50__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__50__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__50__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__50__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__50__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__50__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__50__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__50__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__50__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__50__actual 
             == __Vtask_testbench_full__DOT__check_equal__50__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__50__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__50__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__50__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__50__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__50__actual);
        }
        __Vtask_testbench_full__DOT__check_true__51__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__51__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__51__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__51__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__51__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__51__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__51__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__51__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__51__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__51__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__51__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__51__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__51__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__51__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__51__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__51__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__51__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__51__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__51__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__51__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__52__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__52__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__52__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__52__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__52__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__52__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__52__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__52__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__52__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__52__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__52__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__52__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__52__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__52__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__52__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__52__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__52__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__52__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__52__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__52__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__53__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__53__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__53__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__53__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__53__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__53__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__53__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__53__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__53__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__53__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__53__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__53__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__53__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__53__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__53__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__53__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__53__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__53__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__53__actual 
             == __Vtask_testbench_full__DOT__check_equal__53__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__53__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__53__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__53__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__53__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__53__actual);
        }
        if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__44__msg))) {
            __Vtask_testbench_full__DOT__check_equal__54__expected 
                = __Vtask_testbench_full__DOT__run_test__44__msg;
            __Vtask_testbench_full__DOT__check_equal__54__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__54__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__54__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__54__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__54__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__54__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__54__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__54__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__54__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__54__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__54__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__54__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__54__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__54__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__54__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__54__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__54__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__54__actual 
                 == __Vtask_testbench_full__DOT__check_equal__54__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__54__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__54__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__54__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__54__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__54__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,__Vtask_testbench_full__DOT__run_test__44__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__run_test__55__label[0U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[0U];
    __Vtask_testbench_full__DOT__run_test__55__label[1U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[1U];
    __Vtask_testbench_full__DOT__run_test__55__label[2U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[2U];
    __Vtask_testbench_full__DOT__run_test__55__label[3U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[3U];
    __Vtask_testbench_full__DOT__run_test__55__label[4U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[4U];
    __Vtask_testbench_full__DOT__run_test__55__label[5U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[5U];
    __Vtask_testbench_full__DOT__run_test__55__label[6U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[6U];
    __Vtask_testbench_full__DOT__run_test__55__label[7U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[7U];
    __Vtask_testbench_full__DOT__run_test__55__label[8U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[8U];
    __Vtask_testbench_full__DOT__run_test__55__label[9U] 
        = Vtestbench_full__ConstPool__CONST_ha1c472ea_0[9U];
    __Vtask_testbench_full__DOT__run_test__55__msg = 0x41U;
    __Vfunc_testbench_full__DOT__golden_modexp__56__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__56__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__56__base_in 
        = __Vtask_testbench_full__DOT__run_test__55__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__56__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__56__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__56__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__56__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__55__label.data(),
                 32,__Vtask_testbench_full__DOT__run_test__55__msg,
                 32,__Vtask_testbench_full__DOT__run_test__55__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__55__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__check_true__57__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__57__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__57__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__57__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__57__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__57__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__57__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__57__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__57__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__57__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__57__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__57__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__57__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__57__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__57__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__57__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__57__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__57__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__57__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__57__what.data());
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__58__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__58__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__58__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__58__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__58__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__58__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__58__Vfuncout;
        VL_WRITEF_NX("  cipher_out    = %0# (0x%08x)\n  received_out  = %0# (0x%08x)\n  decrypted_out = %0# (0x%08x)\n  golden cipher = %0# (0x%08x)\n  golden plain  = %0# (0x%08x)\n",0,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain);
        __Vtask_testbench_full__DOT__check_equal__59__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__59__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__59__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__59__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__59__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__59__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__59__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__59__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__59__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__59__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__59__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__59__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__59__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__59__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__59__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__59__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__59__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__59__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__59__actual 
             == __Vtask_testbench_full__DOT__check_equal__59__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__59__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__59__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__59__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__59__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__59__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__60__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__60__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__60__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__60__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__60__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__60__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__60__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__60__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__60__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__60__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__60__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__60__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__60__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__60__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__60__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__60__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__60__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__60__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__60__actual 
             == __Vtask_testbench_full__DOT__check_equal__60__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__60__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__60__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__60__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__60__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__60__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__61__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__61__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__61__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__61__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__61__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__61__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__61__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__61__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__61__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__61__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__61__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__61__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__61__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__61__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__61__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__61__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__61__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__61__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__61__actual 
             == __Vtask_testbench_full__DOT__check_equal__61__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__61__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__61__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__61__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__61__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__61__actual);
        }
        __Vtask_testbench_full__DOT__check_true__62__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__62__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__62__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__62__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__62__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__62__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__62__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__62__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__62__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__62__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__62__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__62__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__62__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__62__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__62__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__62__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__62__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__62__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__62__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__62__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__63__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__63__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__63__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__63__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__63__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__63__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__63__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__63__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__63__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__63__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__63__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__63__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__63__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__63__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__63__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__63__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__63__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__63__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__63__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__63__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__64__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__64__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__64__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__64__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__64__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__64__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__64__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__64__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__64__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__64__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__64__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__64__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__64__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__64__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__64__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__64__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__64__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__64__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__64__actual 
             == __Vtask_testbench_full__DOT__check_equal__64__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__64__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__64__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__64__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__64__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__64__actual);
        }
        if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__55__msg))) {
            __Vtask_testbench_full__DOT__check_equal__65__expected 
                = __Vtask_testbench_full__DOT__run_test__55__msg;
            __Vtask_testbench_full__DOT__check_equal__65__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__65__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__65__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__65__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__65__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__65__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__65__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__65__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__65__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__65__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__65__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__65__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__65__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__65__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__65__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__65__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__65__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__65__actual 
                 == __Vtask_testbench_full__DOT__check_equal__65__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__65__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__65__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__65__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__65__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__65__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,__Vtask_testbench_full__DOT__run_test__55__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__run_test__66__label[0U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[0U];
    __Vtask_testbench_full__DOT__run_test__66__label[1U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[1U];
    __Vtask_testbench_full__DOT__run_test__66__label[2U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[2U];
    __Vtask_testbench_full__DOT__run_test__66__label[3U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[3U];
    __Vtask_testbench_full__DOT__run_test__66__label[4U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[4U];
    __Vtask_testbench_full__DOT__run_test__66__label[5U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[5U];
    __Vtask_testbench_full__DOT__run_test__66__label[6U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[6U];
    __Vtask_testbench_full__DOT__run_test__66__label[7U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[7U];
    __Vtask_testbench_full__DOT__run_test__66__label[8U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[8U];
    __Vtask_testbench_full__DOT__run_test__66__label[9U] 
        = Vtestbench_full__ConstPool__CONST_h0dd2b71e_0[9U];
    __Vtask_testbench_full__DOT__run_test__66__msg = 0xc8U;
    __Vfunc_testbench_full__DOT__golden_modexp__67__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__67__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__67__base_in 
        = __Vtask_testbench_full__DOT__run_test__66__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__67__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__67__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__67__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__67__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__66__label.data(),
                 32,__Vtask_testbench_full__DOT__run_test__66__msg,
                 32,__Vtask_testbench_full__DOT__run_test__66__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__66__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__check_true__68__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__68__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__68__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__68__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__68__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__68__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__68__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__68__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__68__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__68__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__68__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__68__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__68__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__68__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__68__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__68__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__68__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__68__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__68__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__68__what.data());
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__69__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__69__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__69__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__69__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__69__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__69__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__69__Vfuncout;
        VL_WRITEF_NX("  cipher_out    = %0# (0x%08x)\n  received_out  = %0# (0x%08x)\n  decrypted_out = %0# (0x%08x)\n  golden cipher = %0# (0x%08x)\n  golden plain  = %0# (0x%08x)\n",0,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain,
                     32,vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain);
        __Vtask_testbench_full__DOT__check_equal__70__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__70__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__70__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__70__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__70__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__70__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__70__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__70__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__70__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__70__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__70__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__70__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__70__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__70__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__70__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__70__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__70__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__70__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__70__actual 
             == __Vtask_testbench_full__DOT__check_equal__70__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__70__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__70__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__70__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__70__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__70__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__71__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__71__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__71__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__71__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__71__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__71__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__71__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__71__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__71__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__71__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__71__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__71__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__71__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__71__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__71__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__71__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__71__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__71__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__71__actual 
             == __Vtask_testbench_full__DOT__check_equal__71__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__71__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__71__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__71__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__71__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__71__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__72__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__72__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__72__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__72__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__72__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__72__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__72__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__72__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__72__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__72__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__72__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__72__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__72__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__72__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__72__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__72__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__72__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__72__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__72__actual 
             == __Vtask_testbench_full__DOT__check_equal__72__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__72__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__72__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__72__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__72__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__72__actual);
        }
        __Vtask_testbench_full__DOT__check_true__73__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__73__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__73__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__73__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__73__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__73__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__73__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__73__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__73__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__73__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__73__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__73__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__73__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__73__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__73__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__73__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__73__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__73__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__73__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__73__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__74__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__74__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__74__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__74__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__74__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__74__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__74__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__74__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__74__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__74__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__74__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__74__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__74__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__74__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__74__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__74__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__74__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__74__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__74__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__74__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__75__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__75__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__75__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__75__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__75__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__75__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__75__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__75__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__75__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__75__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__75__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__75__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__75__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__75__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__75__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__75__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__75__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__75__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__75__actual 
             == __Vtask_testbench_full__DOT__check_equal__75__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__75__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__75__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__75__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__75__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__75__actual);
        }
        if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__66__msg))) {
            __Vtask_testbench_full__DOT__check_equal__76__expected 
                = __Vtask_testbench_full__DOT__run_test__66__msg;
            __Vtask_testbench_full__DOT__check_equal__76__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__76__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__76__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__76__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__76__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__76__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__76__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__76__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__76__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__76__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__76__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__76__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__76__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__76__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__76__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__76__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__76__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__76__actual 
                 == __Vtask_testbench_full__DOT__check_equal__76__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__76__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__76__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__76__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__76__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__76__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,__Vtask_testbench_full__DOT__run_test__66__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__run_test__77__label[0U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[0U];
    __Vtask_testbench_full__DOT__run_test__77__label[1U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[1U];
    __Vtask_testbench_full__DOT__run_test__77__label[2U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[2U];
    __Vtask_testbench_full__DOT__run_test__77__label[3U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[3U];
    __Vtask_testbench_full__DOT__run_test__77__label[4U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[4U];
    __Vtask_testbench_full__DOT__run_test__77__label[5U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[5U];
    __Vtask_testbench_full__DOT__run_test__77__label[6U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[6U];
    __Vtask_testbench_full__DOT__run_test__77__label[7U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[7U];
    __Vtask_testbench_full__DOT__run_test__77__label[8U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[8U];
    __Vtask_testbench_full__DOT__run_test__77__label[9U] 
        = Vtestbench_full__ConstPool__CONST_hcae6bf16_0[9U];
    vlSelfRef.__Vtask_testbench_full__DOT__run_test__77__msg = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__78__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__78__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__78__base_in 
        = vlSelfRef.__Vtask_testbench_full__DOT__run_test__77__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__78__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__78__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__78__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__78__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__77__label.data(),
                 32,vlSelfRef.__Vtask_testbench_full__DOT__run_test__77__msg,
                 32,vlSelfRef.__Vtask_testbench_full__DOT__run_test__77__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = vlSelfRef.__Vtask_testbench_full__DOT__run_test__77__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_testbench_full__DOT__check_true__79__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__79__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__79__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__79__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__79__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__79__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__79__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__79__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__79__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__79__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__79__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__79__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__79__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__79__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__79__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__79__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__79__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__79__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__79__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__79__what.data());
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

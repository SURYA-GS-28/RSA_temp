// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_full.h for the primary calling header

#include "Vtestbench_full__pch.h"
#include "Vtestbench_full___024root.h"

extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_hf7de7feb_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h7540c221_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_hf6ecb988_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_hf305db21_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h5922c6ae_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h1425e3bc_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_hb5ef9967_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_h809c1041_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_h02780dd6_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h2626a6be_0;
extern const VlWide<10>/*319:0*/ Vtestbench_full__ConstPool__CONST_hda64e75e_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h8bfb6397_0;
extern const VlWide<16>/*511:0*/ Vtestbench_full__ConstPool__CONST_h2f38beeb_0;

VlCoroutine Vtestbench_full___024root___eval_initial__TOP__Vtiming__0__1(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__80__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__80__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__80__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__80__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__80__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__80__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__80__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__81__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__81__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__81__actual;
    __Vtask_testbench_full__DOT__check_equal__81__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__81__expected;
    __Vtask_testbench_full__DOT__check_equal__81__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__82__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__82__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__82__actual;
    __Vtask_testbench_full__DOT__check_equal__82__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__82__expected;
    __Vtask_testbench_full__DOT__check_equal__82__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__83__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__83__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__83__actual;
    __Vtask_testbench_full__DOT__check_equal__83__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__83__expected;
    __Vtask_testbench_full__DOT__check_equal__83__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__84__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__84__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__84__cond;
    __Vtask_testbench_full__DOT__check_true__84__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__85__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__85__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__85__cond;
    __Vtask_testbench_full__DOT__check_true__85__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__86__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__86__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__86__actual;
    __Vtask_testbench_full__DOT__check_equal__86__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__86__expected;
    __Vtask_testbench_full__DOT__check_equal__86__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__87__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__87__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__87__actual;
    __Vtask_testbench_full__DOT__check_equal__87__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__87__expected;
    __Vtask_testbench_full__DOT__check_equal__87__expected = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__88__msg;
    __Vtask_testbench_full__DOT__run_test__88__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__88__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__88__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__89__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__89__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__89__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__89__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__89__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__89__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__89__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__89__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__90__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__90__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__90__cond;
    __Vtask_testbench_full__DOT__check_true__90__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__91__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__91__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__91__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__91__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__91__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__91__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__91__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__91__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__92__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__92__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__92__actual;
    __Vtask_testbench_full__DOT__check_equal__92__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__92__expected;
    __Vtask_testbench_full__DOT__check_equal__92__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__93__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__93__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__93__actual;
    __Vtask_testbench_full__DOT__check_equal__93__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__93__expected;
    __Vtask_testbench_full__DOT__check_equal__93__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__94__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__94__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__94__actual;
    __Vtask_testbench_full__DOT__check_equal__94__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__94__expected;
    __Vtask_testbench_full__DOT__check_equal__94__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__95__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__95__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__95__cond;
    __Vtask_testbench_full__DOT__check_true__95__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__96__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__96__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__96__cond;
    __Vtask_testbench_full__DOT__check_true__96__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__97__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__97__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__97__actual;
    __Vtask_testbench_full__DOT__check_equal__97__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__97__expected;
    __Vtask_testbench_full__DOT__check_equal__97__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__98__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__98__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__98__actual;
    __Vtask_testbench_full__DOT__check_equal__98__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__98__expected;
    __Vtask_testbench_full__DOT__check_equal__98__expected = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__99__msg;
    __Vtask_testbench_full__DOT__run_test__99__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__99__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__99__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__100__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__100__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__100__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__100__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__100__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__100__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__100__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__101__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__101__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__101__cond;
    __Vtask_testbench_full__DOT__check_true__101__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__102__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__102__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__102__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__102__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__102__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__102__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__102__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__102__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__103__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__103__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__103__actual;
    __Vtask_testbench_full__DOT__check_equal__103__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__103__expected;
    __Vtask_testbench_full__DOT__check_equal__103__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__104__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__104__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__104__actual;
    __Vtask_testbench_full__DOT__check_equal__104__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__104__expected;
    __Vtask_testbench_full__DOT__check_equal__104__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__105__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__105__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__105__actual;
    __Vtask_testbench_full__DOT__check_equal__105__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__105__expected;
    __Vtask_testbench_full__DOT__check_equal__105__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__106__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__106__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__106__cond;
    __Vtask_testbench_full__DOT__check_true__106__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__107__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__107__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__107__cond;
    __Vtask_testbench_full__DOT__check_true__107__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__108__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__108__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__108__actual;
    __Vtask_testbench_full__DOT__check_equal__108__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__108__expected;
    __Vtask_testbench_full__DOT__check_equal__108__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__109__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__109__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__109__actual;
    __Vtask_testbench_full__DOT__check_equal__109__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__109__expected;
    __Vtask_testbench_full__DOT__check_equal__109__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__111__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__111__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__111__cond;
    __Vtask_testbench_full__DOT__check_true__111__cond = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__112__msg;
    __Vtask_testbench_full__DOT__run_test__112__msg = 0;
    VlWide<10>/*319:0*/ __Vtask_testbench_full__DOT__run_test__112__label;
    VL_ZERO_W(320, __Vtask_testbench_full__DOT__run_test__112__label);
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__113__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__113__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__113__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__113__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__113__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__113__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__113__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__113__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__114__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__114__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__114__cond;
    __Vtask_testbench_full__DOT__check_true__114__cond = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__115__Vfuncout;
    __Vfunc_testbench_full__DOT__golden_modexp__115__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__115__base_in;
    __Vfunc_testbench_full__DOT__golden_modexp__115__base_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__115__exp_in;
    __Vfunc_testbench_full__DOT__golden_modexp__115__exp_in = 0;
    IData/*31:0*/ __Vfunc_testbench_full__DOT__golden_modexp__115__mod_in;
    __Vfunc_testbench_full__DOT__golden_modexp__115__mod_in = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__116__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__116__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__116__actual;
    __Vtask_testbench_full__DOT__check_equal__116__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__116__expected;
    __Vtask_testbench_full__DOT__check_equal__116__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__117__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__117__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__117__actual;
    __Vtask_testbench_full__DOT__check_equal__117__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__117__expected;
    __Vtask_testbench_full__DOT__check_equal__117__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__118__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__118__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__118__actual;
    __Vtask_testbench_full__DOT__check_equal__118__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__118__expected;
    __Vtask_testbench_full__DOT__check_equal__118__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__119__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__119__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__119__cond;
    __Vtask_testbench_full__DOT__check_true__119__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__120__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__120__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__120__cond;
    __Vtask_testbench_full__DOT__check_true__120__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__121__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__121__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__121__actual;
    __Vtask_testbench_full__DOT__check_equal__121__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__121__expected;
    __Vtask_testbench_full__DOT__check_equal__121__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__122__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__122__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__122__actual;
    __Vtask_testbench_full__DOT__check_equal__122__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__122__expected;
    __Vtask_testbench_full__DOT__check_equal__122__expected = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_true__124__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_true__124__what);
    CData/*0:0*/ __Vtask_testbench_full__DOT__check_true__124__cond;
    __Vtask_testbench_full__DOT__check_true__124__cond = 0;
    VlWide<16>/*511:0*/ __Vtask_testbench_full__DOT__check_equal__125__what;
    VL_ZERO_W(512, __Vtask_testbench_full__DOT__check_equal__125__what);
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__125__actual;
    __Vtask_testbench_full__DOT__check_equal__125__actual = 0;
    IData/*31:0*/ __Vtask_testbench_full__DOT__check_equal__125__expected;
    __Vtask_testbench_full__DOT__check_equal__125__expected = 0;
    // Body
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__80__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__80__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__80__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__80__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__80__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__80__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__80__Vfuncout;
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
        __Vtask_testbench_full__DOT__check_equal__81__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__81__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__81__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__81__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__81__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__81__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__81__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__81__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__81__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__81__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__81__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__81__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__81__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__81__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__81__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__81__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__81__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__81__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__81__actual 
             == __Vtask_testbench_full__DOT__check_equal__81__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__81__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__81__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__81__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__81__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__81__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__82__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__82__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__82__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__82__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__82__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__82__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__82__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__82__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__82__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__82__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__82__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__82__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__82__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__82__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__82__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__82__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__82__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__82__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__82__actual 
             == __Vtask_testbench_full__DOT__check_equal__82__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__82__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__82__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__82__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__82__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__82__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__83__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__83__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__83__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__83__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__83__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__83__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__83__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__83__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__83__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__83__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__83__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__83__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__83__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__83__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__83__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__83__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__83__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__83__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__83__actual 
             == __Vtask_testbench_full__DOT__check_equal__83__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__83__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__83__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__83__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__83__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__83__actual);
        }
        __Vtask_testbench_full__DOT__check_true__84__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__84__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__84__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__84__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__84__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__84__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__84__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__84__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__84__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__84__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__84__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__84__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__84__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__84__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__84__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__84__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__84__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__84__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__84__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__84__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__85__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__85__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__85__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__85__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__85__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__85__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__85__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__85__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__85__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__85__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__85__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__85__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__85__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__85__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__85__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__85__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__85__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__85__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__85__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__85__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__86__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__86__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__86__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__86__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__86__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__86__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__86__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__86__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__86__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__86__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__86__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__86__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__86__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__86__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__86__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__86__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__86__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__86__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__86__actual 
             == __Vtask_testbench_full__DOT__check_equal__86__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__86__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__86__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__86__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__86__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__86__actual);
        }
        if (VL_LIKELY((0xca1U > vlSelfRef.__Vtask_testbench_full__DOT__run_test__77__msg))) {
            __Vtask_testbench_full__DOT__check_equal__87__expected 
                = vlSelfRef.__Vtask_testbench_full__DOT__run_test__77__msg;
            __Vtask_testbench_full__DOT__check_equal__87__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__87__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__87__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__87__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__87__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__87__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__87__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__87__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__87__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__87__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__87__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__87__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__87__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__87__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__87__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__87__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__87__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__87__actual 
                 == __Vtask_testbench_full__DOT__check_equal__87__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__87__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__87__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__87__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__87__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__87__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,vlSelfRef.__Vtask_testbench_full__DOT__run_test__77__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_testbench_full__DOT__run_test__88__label[0U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[0U];
    __Vtask_testbench_full__DOT__run_test__88__label[1U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[1U];
    __Vtask_testbench_full__DOT__run_test__88__label[2U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[2U];
    __Vtask_testbench_full__DOT__run_test__88__label[3U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[3U];
    __Vtask_testbench_full__DOT__run_test__88__label[4U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[4U];
    __Vtask_testbench_full__DOT__run_test__88__label[5U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[5U];
    __Vtask_testbench_full__DOT__run_test__88__label[6U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[6U];
    __Vtask_testbench_full__DOT__run_test__88__label[7U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[7U];
    __Vtask_testbench_full__DOT__run_test__88__label[8U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[8U];
    __Vtask_testbench_full__DOT__run_test__88__label[9U] 
        = Vtestbench_full__ConstPool__CONST_h809c1041_0[9U];
    __Vtask_testbench_full__DOT__run_test__88__msg = 0xffffffffU;
    __Vfunc_testbench_full__DOT__golden_modexp__89__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__89__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__89__base_in 
        = __Vtask_testbench_full__DOT__run_test__88__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__89__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__89__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__89__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__89__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__88__label.data(),
                 32,__Vtask_testbench_full__DOT__run_test__88__msg,
                 32,__Vtask_testbench_full__DOT__run_test__88__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__88__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_testbench_full__DOT__check_true__90__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__90__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__90__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__90__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__90__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__90__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__90__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__90__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__90__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__90__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__90__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__90__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__90__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__90__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__90__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__90__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__90__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__90__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__90__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__90__what.data());
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__91__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__91__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__91__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__91__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__91__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__91__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__91__Vfuncout;
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
        __Vtask_testbench_full__DOT__check_equal__92__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__92__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__92__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__92__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__92__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__92__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__92__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__92__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__92__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__92__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__92__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__92__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__92__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__92__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__92__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__92__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__92__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__92__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__92__actual 
             == __Vtask_testbench_full__DOT__check_equal__92__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__92__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__92__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__92__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__92__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__92__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__93__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__93__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__93__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__93__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__93__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__93__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__93__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__93__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__93__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__93__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__93__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__93__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__93__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__93__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__93__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__93__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__93__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__93__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__93__actual 
             == __Vtask_testbench_full__DOT__check_equal__93__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__93__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__93__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__93__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__93__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__93__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__94__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__94__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__94__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__94__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__94__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__94__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__94__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__94__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__94__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__94__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__94__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__94__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__94__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__94__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__94__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__94__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__94__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__94__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__94__actual 
             == __Vtask_testbench_full__DOT__check_equal__94__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__94__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__94__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__94__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__94__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__94__actual);
        }
        __Vtask_testbench_full__DOT__check_true__95__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__95__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__95__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__95__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__95__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__95__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__95__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__95__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__95__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__95__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__95__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__95__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__95__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__95__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__95__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__95__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__95__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__95__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__95__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__95__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__96__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__96__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__96__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__96__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__96__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__96__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__96__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__96__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__96__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__96__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__96__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__96__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__96__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__96__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__96__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__96__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__96__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__96__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__96__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__96__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__97__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__97__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__97__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__97__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__97__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__97__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__97__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__97__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__97__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__97__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__97__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__97__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__97__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__97__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__97__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__97__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__97__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__97__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__97__actual 
             == __Vtask_testbench_full__DOT__check_equal__97__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__97__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__97__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__97__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__97__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__97__actual);
        }
        if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__88__msg))) {
            __Vtask_testbench_full__DOT__check_equal__98__expected 
                = __Vtask_testbench_full__DOT__run_test__88__msg;
            __Vtask_testbench_full__DOT__check_equal__98__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__98__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__98__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__98__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__98__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__98__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__98__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__98__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__98__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__98__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__98__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__98__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__98__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__98__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__98__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__98__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__98__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__98__actual 
                 == __Vtask_testbench_full__DOT__check_equal__98__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__98__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__98__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__98__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__98__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__98__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,__Vtask_testbench_full__DOT__run_test__88__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("====================================================\n  Constrained-random tests (message in [0, N-1])\n====================================================\n",0);
    vlSelfRef.testbench_full__DOT__rnd_idx = 0U;
    while (VL_GTS_III(32, 0xcU, vlSelfRef.testbench_full__DOT__rnd_idx)) {
        vlSelfRef.testbench_full__DOT__r = VL_MODDIV_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(0xca1U));
        if (VL_GTS_III(32, 0U, vlSelfRef.testbench_full__DOT__r)) {
            vlSelfRef.testbench_full__DOT__r = (- vlSelfRef.testbench_full__DOT__r);
        }
        vlSelfRef.testbench_full__DOT__rnd_label[0U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[0U];
        vlSelfRef.testbench_full__DOT__rnd_label[1U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[1U];
        vlSelfRef.testbench_full__DOT__rnd_label[2U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[2U];
        vlSelfRef.testbench_full__DOT__rnd_label[3U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[3U];
        vlSelfRef.testbench_full__DOT__rnd_label[4U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[4U];
        vlSelfRef.testbench_full__DOT__rnd_label[5U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[5U];
        vlSelfRef.testbench_full__DOT__rnd_label[6U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[6U];
        vlSelfRef.testbench_full__DOT__rnd_label[7U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[7U];
        vlSelfRef.testbench_full__DOT__rnd_label[8U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[8U];
        vlSelfRef.testbench_full__DOT__rnd_label[9U] 
            = Vtestbench_full__ConstPool__CONST_h02780dd6_0[9U];
        __Vtask_testbench_full__DOT__run_test__99__label[0U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[0U];
        __Vtask_testbench_full__DOT__run_test__99__label[1U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[1U];
        __Vtask_testbench_full__DOT__run_test__99__label[2U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[2U];
        __Vtask_testbench_full__DOT__run_test__99__label[3U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[3U];
        __Vtask_testbench_full__DOT__run_test__99__label[4U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[4U];
        __Vtask_testbench_full__DOT__run_test__99__label[5U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[5U];
        __Vtask_testbench_full__DOT__run_test__99__label[6U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[6U];
        __Vtask_testbench_full__DOT__run_test__99__label[7U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[7U];
        __Vtask_testbench_full__DOT__run_test__99__label[8U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[8U];
        __Vtask_testbench_full__DOT__run_test__99__label[9U] 
            = vlSelfRef.testbench_full__DOT__rnd_label[9U];
        __Vtask_testbench_full__DOT__run_test__99__msg 
            = vlSelfRef.testbench_full__DOT__r;
        __Vfunc_testbench_full__DOT__golden_modexp__100__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__100__exp_in = 7U;
        __Vfunc_testbench_full__DOT__golden_modexp__100__base_in 
            = __Vtask_testbench_full__DOT__run_test__99__msg;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__100__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__100__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__100__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
            = __Vfunc_testbench_full__DOT__golden_modexp__100__Vfuncout;
        VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                     320,__Vtask_testbench_full__DOT__run_test__99__label.data(),
                     32,__Vtask_testbench_full__DOT__run_test__99__msg,
                     32,__Vtask_testbench_full__DOT__run_test__99__msg);
        vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
        vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
        vlSelfRef.testbench_full__DOT__rst_n = 0U;
        vlSelfRef.testbench_full__DOT__start = 0U;
        vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__99__msg;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             273);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             273);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             273);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             273);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "mod7.v", 
                                             274);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.testbench_full__DOT__rst_n = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             276);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             276);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             278);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "mod7.v", 
                                             278);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.testbench_full__DOT__start = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             280);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "mod7.v", 
                                             280);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.testbench_full__DOT__start = 0U;
        vlSelfRef.testbench_full__DOT__timeout = 0U;
        while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
                & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
            co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench_full.clk)", 
                                                                 "mod7.v", 
                                                                 285);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.testbench_full__DOT__timeout 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__timeout);
        }
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             288);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_testbench_full__DOT__check_true__101__cond 
            = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
        __Vtask_testbench_full__DOT__check_true__101__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
        __Vtask_testbench_full__DOT__check_true__101__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
        __Vtask_testbench_full__DOT__check_true__101__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
        __Vtask_testbench_full__DOT__check_true__101__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
        __Vtask_testbench_full__DOT__check_true__101__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
        __Vtask_testbench_full__DOT__check_true__101__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
        __Vtask_testbench_full__DOT__check_true__101__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
        __Vtask_testbench_full__DOT__check_true__101__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
        __Vtask_testbench_full__DOT__check_true__101__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
        __Vtask_testbench_full__DOT__check_true__101__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
        __Vtask_testbench_full__DOT__check_true__101__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__101__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__101__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__101__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__101__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__101__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__101__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__101__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__101__what.data());
        }
        if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
            __Vfunc_testbench_full__DOT__golden_modexp__102__mod_in = 0xca1U;
            __Vfunc_testbench_full__DOT__golden_modexp__102__exp_in = 0x6f7U;
            __Vfunc_testbench_full__DOT__golden_modexp__102__base_in 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = __Vfunc_testbench_full__DOT__golden_modexp__102__exp_in;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
                vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                         * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            }
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__102__mod_in)));
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
            __Vfunc_testbench_full__DOT__golden_modexp__102__Vfuncout 
                = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
            vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
                = __Vfunc_testbench_full__DOT__golden_modexp__102__Vfuncout;
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
            __Vtask_testbench_full__DOT__check_equal__103__expected 
                = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
            __Vtask_testbench_full__DOT__check_equal__103__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
            __Vtask_testbench_full__DOT__check_equal__103__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
            __Vtask_testbench_full__DOT__check_equal__103__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
            __Vtask_testbench_full__DOT__check_equal__103__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
            __Vtask_testbench_full__DOT__check_equal__103__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
            __Vtask_testbench_full__DOT__check_equal__103__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
            __Vtask_testbench_full__DOT__check_equal__103__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
            __Vtask_testbench_full__DOT__check_equal__103__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
            __Vtask_testbench_full__DOT__check_equal__103__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
            __Vtask_testbench_full__DOT__check_equal__103__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
            __Vtask_testbench_full__DOT__check_equal__103__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
            __Vtask_testbench_full__DOT__check_equal__103__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__103__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__103__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__103__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__103__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__103__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__103__actual 
                 == __Vtask_testbench_full__DOT__check_equal__103__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__103__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__103__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__103__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__103__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__103__actual);
            }
            __Vtask_testbench_full__DOT__check_equal__104__expected 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
            __Vtask_testbench_full__DOT__check_equal__104__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
            __Vtask_testbench_full__DOT__check_equal__104__what[0U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
            __Vtask_testbench_full__DOT__check_equal__104__what[1U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
            __Vtask_testbench_full__DOT__check_equal__104__what[2U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
            __Vtask_testbench_full__DOT__check_equal__104__what[3U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
            __Vtask_testbench_full__DOT__check_equal__104__what[4U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
            __Vtask_testbench_full__DOT__check_equal__104__what[5U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
            __Vtask_testbench_full__DOT__check_equal__104__what[6U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
            __Vtask_testbench_full__DOT__check_equal__104__what[7U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
            __Vtask_testbench_full__DOT__check_equal__104__what[8U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
            __Vtask_testbench_full__DOT__check_equal__104__what[9U] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
            __Vtask_testbench_full__DOT__check_equal__104__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__104__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__104__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__104__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__104__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__104__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__104__actual 
                 == __Vtask_testbench_full__DOT__check_equal__104__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__104__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__104__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__104__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__104__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__104__actual);
            }
            __Vtask_testbench_full__DOT__check_equal__105__expected 
                = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
            __Vtask_testbench_full__DOT__check_equal__105__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__105__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
            __Vtask_testbench_full__DOT__check_equal__105__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
            __Vtask_testbench_full__DOT__check_equal__105__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
            __Vtask_testbench_full__DOT__check_equal__105__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
            __Vtask_testbench_full__DOT__check_equal__105__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
            __Vtask_testbench_full__DOT__check_equal__105__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
            __Vtask_testbench_full__DOT__check_equal__105__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
            __Vtask_testbench_full__DOT__check_equal__105__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
            __Vtask_testbench_full__DOT__check_equal__105__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
            __Vtask_testbench_full__DOT__check_equal__105__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
            __Vtask_testbench_full__DOT__check_equal__105__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__105__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__105__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__105__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__105__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__105__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__105__actual 
                 == __Vtask_testbench_full__DOT__check_equal__105__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__105__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__105__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__105__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__105__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__105__actual);
            }
            __Vtask_testbench_full__DOT__check_true__106__cond 
                = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
            __Vtask_testbench_full__DOT__check_true__106__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
            __Vtask_testbench_full__DOT__check_true__106__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
            __Vtask_testbench_full__DOT__check_true__106__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
            __Vtask_testbench_full__DOT__check_true__106__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
            __Vtask_testbench_full__DOT__check_true__106__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
            __Vtask_testbench_full__DOT__check_true__106__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
            __Vtask_testbench_full__DOT__check_true__106__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
            __Vtask_testbench_full__DOT__check_true__106__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
            __Vtask_testbench_full__DOT__check_true__106__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
            __Vtask_testbench_full__DOT__check_true__106__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
            __Vtask_testbench_full__DOT__check_true__106__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
            __Vtask_testbench_full__DOT__check_true__106__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
            __Vtask_testbench_full__DOT__check_true__106__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
            __Vtask_testbench_full__DOT__check_true__106__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
            __Vtask_testbench_full__DOT__check_true__106__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
            __Vtask_testbench_full__DOT__check_true__106__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if (__Vtask_testbench_full__DOT__check_true__106__cond) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                             512,__Vtask_testbench_full__DOT__check_true__106__what.data());
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                             512,__Vtask_testbench_full__DOT__check_true__106__what.data());
            }
            __Vtask_testbench_full__DOT__check_true__107__cond 
                = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
            __Vtask_testbench_full__DOT__check_true__107__what[0U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
            __Vtask_testbench_full__DOT__check_true__107__what[1U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
            __Vtask_testbench_full__DOT__check_true__107__what[2U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
            __Vtask_testbench_full__DOT__check_true__107__what[3U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
            __Vtask_testbench_full__DOT__check_true__107__what[4U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
            __Vtask_testbench_full__DOT__check_true__107__what[5U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
            __Vtask_testbench_full__DOT__check_true__107__what[6U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
            __Vtask_testbench_full__DOT__check_true__107__what[7U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
            __Vtask_testbench_full__DOT__check_true__107__what[8U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
            __Vtask_testbench_full__DOT__check_true__107__what[9U] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
            __Vtask_testbench_full__DOT__check_true__107__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
            __Vtask_testbench_full__DOT__check_true__107__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
            __Vtask_testbench_full__DOT__check_true__107__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
            __Vtask_testbench_full__DOT__check_true__107__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
            __Vtask_testbench_full__DOT__check_true__107__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
            __Vtask_testbench_full__DOT__check_true__107__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if (__Vtask_testbench_full__DOT__check_true__107__cond) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                             512,__Vtask_testbench_full__DOT__check_true__107__what.data());
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                             512,__Vtask_testbench_full__DOT__check_true__107__what.data());
            }
            __Vtask_testbench_full__DOT__check_equal__108__expected 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
            __Vtask_testbench_full__DOT__check_equal__108__actual 
                = vlSelfRef.testbench_full__DOT__bus_capture;
            __Vtask_testbench_full__DOT__check_equal__108__what[0U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
            __Vtask_testbench_full__DOT__check_equal__108__what[1U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
            __Vtask_testbench_full__DOT__check_equal__108__what[2U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
            __Vtask_testbench_full__DOT__check_equal__108__what[3U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
            __Vtask_testbench_full__DOT__check_equal__108__what[4U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
            __Vtask_testbench_full__DOT__check_equal__108__what[5U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
            __Vtask_testbench_full__DOT__check_equal__108__what[6U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
            __Vtask_testbench_full__DOT__check_equal__108__what[7U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
            __Vtask_testbench_full__DOT__check_equal__108__what[8U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
            __Vtask_testbench_full__DOT__check_equal__108__what[9U] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
            __Vtask_testbench_full__DOT__check_equal__108__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__108__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__108__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__108__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__108__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__108__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__108__actual 
                 == __Vtask_testbench_full__DOT__check_equal__108__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__108__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__108__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__108__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__108__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__108__actual);
            }
            if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__99__msg))) {
                __Vtask_testbench_full__DOT__check_equal__109__expected 
                    = __Vtask_testbench_full__DOT__run_test__99__msg;
                __Vtask_testbench_full__DOT__check_equal__109__actual 
                    = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
                __Vtask_testbench_full__DOT__check_equal__109__what[0U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
                __Vtask_testbench_full__DOT__check_equal__109__what[1U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
                __Vtask_testbench_full__DOT__check_equal__109__what[2U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
                __Vtask_testbench_full__DOT__check_equal__109__what[3U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
                __Vtask_testbench_full__DOT__check_equal__109__what[4U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
                __Vtask_testbench_full__DOT__check_equal__109__what[5U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
                __Vtask_testbench_full__DOT__check_equal__109__what[6U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
                __Vtask_testbench_full__DOT__check_equal__109__what[7U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
                __Vtask_testbench_full__DOT__check_equal__109__what[8U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
                __Vtask_testbench_full__DOT__check_equal__109__what[9U] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
                __Vtask_testbench_full__DOT__check_equal__109__what[0xaU] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
                __Vtask_testbench_full__DOT__check_equal__109__what[0xbU] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
                __Vtask_testbench_full__DOT__check_equal__109__what[0xcU] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
                __Vtask_testbench_full__DOT__check_equal__109__what[0xdU] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
                __Vtask_testbench_full__DOT__check_equal__109__what[0xeU] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
                __Vtask_testbench_full__DOT__check_equal__109__what[0xfU] 
                    = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
                vlSelfRef.testbench_full__DOT__check_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
                if ((__Vtask_testbench_full__DOT__check_equal__109__actual 
                     == __Vtask_testbench_full__DOT__check_equal__109__expected)) {
                    vlSelfRef.testbench_full__DOT__pass_count 
                        = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                    VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                                 512,__Vtask_testbench_full__DOT__check_equal__109__what.data(),
                                 32,__Vtask_testbench_full__DOT__check_equal__109__actual);
                } else {
                    vlSelfRef.testbench_full__DOT__fail_count 
                        = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                    VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                                 512,__Vtask_testbench_full__DOT__check_equal__109__what.data(),
                                 32,__Vtask_testbench_full__DOT__check_equal__109__expected,
                                 32,__Vtask_testbench_full__DOT__check_equal__109__actual);
                }
            } else {
                VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                             32,__Vtask_testbench_full__DOT__run_test__99__msg);
            }
        }
        VL_WRITEF_NX("----------------------------------------------------\n",0);
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             327);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.testbench_full__DOT__rnd_idx = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__rnd_idx);
    }
    VL_WRITEF_NX("====================================================\n  Robustness tests (reset / busy handling)\n====================================================\n",0);
    VL_WRITEF_NX("----------------------------------------------------\nTEST: reset asserted mid-pipeline\n",0);
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = 0x2aU;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         344);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         344);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         344);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         344);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         345);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         347);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         347);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         349);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         349);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         351);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         351);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         356);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         358);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         358);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         358);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         359);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         364);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         364);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         364);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_testbench_full__DOT__check_true__111__cond 
        = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__done)));
    __Vtask_testbench_full__DOT__check_true__111__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[0U];
    __Vtask_testbench_full__DOT__check_true__111__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[1U];
    __Vtask_testbench_full__DOT__check_true__111__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[2U];
    __Vtask_testbench_full__DOT__check_true__111__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[3U];
    __Vtask_testbench_full__DOT__check_true__111__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[4U];
    __Vtask_testbench_full__DOT__check_true__111__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[5U];
    __Vtask_testbench_full__DOT__check_true__111__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[6U];
    __Vtask_testbench_full__DOT__check_true__111__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[7U];
    __Vtask_testbench_full__DOT__check_true__111__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[8U];
    __Vtask_testbench_full__DOT__check_true__111__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[9U];
    __Vtask_testbench_full__DOT__check_true__111__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__111__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__111__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__111__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__111__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__111__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h2626a6be_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__111__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__111__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__111__what.data());
    }
    __Vtask_testbench_full__DOT__run_test__112__label[0U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[0U];
    __Vtask_testbench_full__DOT__run_test__112__label[1U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[1U];
    __Vtask_testbench_full__DOT__run_test__112__label[2U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[2U];
    __Vtask_testbench_full__DOT__run_test__112__label[3U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[3U];
    __Vtask_testbench_full__DOT__run_test__112__label[4U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[4U];
    __Vtask_testbench_full__DOT__run_test__112__label[5U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[5U];
    __Vtask_testbench_full__DOT__run_test__112__label[6U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[6U];
    __Vtask_testbench_full__DOT__run_test__112__label[7U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[7U];
    __Vtask_testbench_full__DOT__run_test__112__label[8U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[8U];
    __Vtask_testbench_full__DOT__run_test__112__label[9U] 
        = Vtestbench_full__ConstPool__CONST_hda64e75e_0[9U];
    __Vtask_testbench_full__DOT__run_test__112__msg = 0x63U;
    __Vfunc_testbench_full__DOT__golden_modexp__113__mod_in = 0xca1U;
    __Vfunc_testbench_full__DOT__golden_modexp__113__exp_in = 7U;
    __Vfunc_testbench_full__DOT__golden_modexp__113__base_in 
        = __Vtask_testbench_full__DOT__run_test__112__msg;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = __Vfunc_testbench_full__DOT__golden_modexp__113__exp_in;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    }
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                             * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__113__mod_in)));
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
    vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
    __Vfunc_testbench_full__DOT__golden_modexp__113__Vfuncout 
        = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
    vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher 
        = __Vfunc_testbench_full__DOT__golden_modexp__113__Vfuncout;
    VL_WRITEF_NX("----------------------------------------------------\nTEST: %0s\n  message_in = %0# (0x%08x)\n",0,
                 320,__Vtask_testbench_full__DOT__run_test__112__label.data(),
                 32,__Vtask_testbench_full__DOT__run_test__112__msg,
                 32,__Vtask_testbench_full__DOT__run_test__112__msg);
    vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
    vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = __Vtask_testbench_full__DOT__run_test__112__msg;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         274);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         278);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         278);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         280);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.testbench_full__DOT__done)) 
            & VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             285);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
    }
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         288);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_testbench_full__DOT__check_true__114__cond 
        = VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout);
    __Vtask_testbench_full__DOT__check_true__114__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0U];
    __Vtask_testbench_full__DOT__check_true__114__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[1U];
    __Vtask_testbench_full__DOT__check_true__114__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[2U];
    __Vtask_testbench_full__DOT__check_true__114__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[3U];
    __Vtask_testbench_full__DOT__check_true__114__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[4U];
    __Vtask_testbench_full__DOT__check_true__114__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[5U];
    __Vtask_testbench_full__DOT__check_true__114__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[6U];
    __Vtask_testbench_full__DOT__check_true__114__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[7U];
    __Vtask_testbench_full__DOT__check_true__114__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[8U];
    __Vtask_testbench_full__DOT__check_true__114__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[9U];
    __Vtask_testbench_full__DOT__check_true__114__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__114__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__114__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__114__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__114__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__114__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h7b0ea0d4_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__114__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__114__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__114__what.data());
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout))) {
        __Vfunc_testbench_full__DOT__golden_modexp__115__mod_in = 0xca1U;
        __Vfunc_testbench_full__DOT__golden_modexp__115__exp_in = 0x6f7U;
        __Vfunc_testbench_full__DOT__golden_modexp__115__base_in 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result = 1ULL;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__base_in)), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = __Vfunc_testbench_full__DOT__golden_modexp__115__exp_in;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 1U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 2U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 3U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 4U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 5U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 6U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 7U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 8U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 9U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xaU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xbU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xcU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xdU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xeU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0xfU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x10U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x11U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x12U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x13U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x14U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x15U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x16U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x17U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x18U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x19U;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1aU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1bU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1cU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1dU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1eU;
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        if ((1U & vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e)) {
            vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result 
                                     * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        }
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x1fU;
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
            = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b 
                                 * vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b), (QData)((IData)(__Vfunc_testbench_full__DOT__golden_modexp__115__mod_in)));
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e, 1U);
        vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i = 0x20U;
        __Vfunc_testbench_full__DOT__golden_modexp__115__Vfuncout 
            = (IData)(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result);
        vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain 
            = __Vfunc_testbench_full__DOT__golden_modexp__115__Vfuncout;
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
        __Vtask_testbench_full__DOT__check_equal__116__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher;
        __Vtask_testbench_full__DOT__check_equal__116__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__116__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0U];
        __Vtask_testbench_full__DOT__check_equal__116__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[1U];
        __Vtask_testbench_full__DOT__check_equal__116__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[2U];
        __Vtask_testbench_full__DOT__check_equal__116__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[3U];
        __Vtask_testbench_full__DOT__check_equal__116__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[4U];
        __Vtask_testbench_full__DOT__check_equal__116__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[5U];
        __Vtask_testbench_full__DOT__check_equal__116__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[6U];
        __Vtask_testbench_full__DOT__check_equal__116__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[7U];
        __Vtask_testbench_full__DOT__check_equal__116__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[8U];
        __Vtask_testbench_full__DOT__check_equal__116__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[9U];
        __Vtask_testbench_full__DOT__check_equal__116__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__116__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__116__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__116__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__116__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__116__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf7de7feb_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__116__actual 
             == __Vtask_testbench_full__DOT__check_equal__116__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__116__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__116__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__116__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__116__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__116__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__117__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__117__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w;
        __Vtask_testbench_full__DOT__check_equal__117__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0U];
        __Vtask_testbench_full__DOT__check_equal__117__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[1U];
        __Vtask_testbench_full__DOT__check_equal__117__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[2U];
        __Vtask_testbench_full__DOT__check_equal__117__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[3U];
        __Vtask_testbench_full__DOT__check_equal__117__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[4U];
        __Vtask_testbench_full__DOT__check_equal__117__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[5U];
        __Vtask_testbench_full__DOT__check_equal__117__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[6U];
        __Vtask_testbench_full__DOT__check_equal__117__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[7U];
        __Vtask_testbench_full__DOT__check_equal__117__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[8U];
        __Vtask_testbench_full__DOT__check_equal__117__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[9U];
        __Vtask_testbench_full__DOT__check_equal__117__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__117__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__117__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__117__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__117__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__117__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h7540c221_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__117__actual 
             == __Vtask_testbench_full__DOT__check_equal__117__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__117__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__117__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__117__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__117__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__117__actual);
        }
        __Vtask_testbench_full__DOT__check_equal__118__expected 
            = vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain;
        __Vtask_testbench_full__DOT__check_equal__118__actual 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
        __Vtask_testbench_full__DOT__check_equal__118__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0U];
        __Vtask_testbench_full__DOT__check_equal__118__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[1U];
        __Vtask_testbench_full__DOT__check_equal__118__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[2U];
        __Vtask_testbench_full__DOT__check_equal__118__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[3U];
        __Vtask_testbench_full__DOT__check_equal__118__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[4U];
        __Vtask_testbench_full__DOT__check_equal__118__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[5U];
        __Vtask_testbench_full__DOT__check_equal__118__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[6U];
        __Vtask_testbench_full__DOT__check_equal__118__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[7U];
        __Vtask_testbench_full__DOT__check_equal__118__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[8U];
        __Vtask_testbench_full__DOT__check_equal__118__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[9U];
        __Vtask_testbench_full__DOT__check_equal__118__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__118__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__118__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__118__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__118__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__118__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf6ecb988_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__118__actual 
             == __Vtask_testbench_full__DOT__check_equal__118__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__118__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__118__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__118__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__118__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__118__actual);
        }
        __Vtask_testbench_full__DOT__check_true__119__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_framing_error)));
        __Vtask_testbench_full__DOT__check_true__119__what[0U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0U];
        __Vtask_testbench_full__DOT__check_true__119__what[1U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[1U];
        __Vtask_testbench_full__DOT__check_true__119__what[2U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[2U];
        __Vtask_testbench_full__DOT__check_true__119__what[3U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[3U];
        __Vtask_testbench_full__DOT__check_true__119__what[4U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[4U];
        __Vtask_testbench_full__DOT__check_true__119__what[5U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[5U];
        __Vtask_testbench_full__DOT__check_true__119__what[6U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[6U];
        __Vtask_testbench_full__DOT__check_true__119__what[7U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[7U];
        __Vtask_testbench_full__DOT__check_true__119__what[8U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[8U];
        __Vtask_testbench_full__DOT__check_true__119__what[9U] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[9U];
        __Vtask_testbench_full__DOT__check_true__119__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__119__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__119__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__119__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__119__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__119__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_hf305db21_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__119__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__119__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__119__what.data());
        }
        __Vtask_testbench_full__DOT__check_true__120__cond 
            = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__mosi_glitch_error)));
        __Vtask_testbench_full__DOT__check_true__120__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0U];
        __Vtask_testbench_full__DOT__check_true__120__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[1U];
        __Vtask_testbench_full__DOT__check_true__120__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[2U];
        __Vtask_testbench_full__DOT__check_true__120__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[3U];
        __Vtask_testbench_full__DOT__check_true__120__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[4U];
        __Vtask_testbench_full__DOT__check_true__120__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[5U];
        __Vtask_testbench_full__DOT__check_true__120__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[6U];
        __Vtask_testbench_full__DOT__check_true__120__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[7U];
        __Vtask_testbench_full__DOT__check_true__120__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[8U];
        __Vtask_testbench_full__DOT__check_true__120__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[9U];
        __Vtask_testbench_full__DOT__check_true__120__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xaU];
        __Vtask_testbench_full__DOT__check_true__120__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xbU];
        __Vtask_testbench_full__DOT__check_true__120__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xcU];
        __Vtask_testbench_full__DOT__check_true__120__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xdU];
        __Vtask_testbench_full__DOT__check_true__120__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xeU];
        __Vtask_testbench_full__DOT__check_true__120__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h5922c6ae_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if (__Vtask_testbench_full__DOT__check_true__120__cond) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__120__what.data());
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,
                         512,__Vtask_testbench_full__DOT__check_true__120__what.data());
        }
        __Vtask_testbench_full__DOT__check_equal__121__expected 
            = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
        __Vtask_testbench_full__DOT__check_equal__121__actual 
            = vlSelfRef.testbench_full__DOT__bus_capture;
        __Vtask_testbench_full__DOT__check_equal__121__what[0U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0U];
        __Vtask_testbench_full__DOT__check_equal__121__what[1U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[1U];
        __Vtask_testbench_full__DOT__check_equal__121__what[2U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[2U];
        __Vtask_testbench_full__DOT__check_equal__121__what[3U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[3U];
        __Vtask_testbench_full__DOT__check_equal__121__what[4U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[4U];
        __Vtask_testbench_full__DOT__check_equal__121__what[5U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[5U];
        __Vtask_testbench_full__DOT__check_equal__121__what[6U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[6U];
        __Vtask_testbench_full__DOT__check_equal__121__what[7U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[7U];
        __Vtask_testbench_full__DOT__check_equal__121__what[8U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[8U];
        __Vtask_testbench_full__DOT__check_equal__121__what[9U] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[9U];
        __Vtask_testbench_full__DOT__check_equal__121__what[0xaU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xaU];
        __Vtask_testbench_full__DOT__check_equal__121__what[0xbU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xbU];
        __Vtask_testbench_full__DOT__check_equal__121__what[0xcU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xcU];
        __Vtask_testbench_full__DOT__check_equal__121__what[0xdU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xdU];
        __Vtask_testbench_full__DOT__check_equal__121__what[0xeU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xeU];
        __Vtask_testbench_full__DOT__check_equal__121__what[0xfU] 
            = Vtestbench_full__ConstPool__CONST_h1425e3bc_0[0xfU];
        vlSelfRef.testbench_full__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
        if ((__Vtask_testbench_full__DOT__check_equal__121__actual 
             == __Vtask_testbench_full__DOT__check_equal__121__expected)) {
            vlSelfRef.testbench_full__DOT__pass_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
            VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__121__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__121__actual);
        } else {
            vlSelfRef.testbench_full__DOT__fail_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
            VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                         512,__Vtask_testbench_full__DOT__check_equal__121__what.data(),
                         32,__Vtask_testbench_full__DOT__check_equal__121__expected,
                         32,__Vtask_testbench_full__DOT__check_equal__121__actual);
        }
        if (VL_LIKELY((0xca1U > __Vtask_testbench_full__DOT__run_test__112__msg))) {
            __Vtask_testbench_full__DOT__check_equal__122__expected 
                = __Vtask_testbench_full__DOT__run_test__112__msg;
            __Vtask_testbench_full__DOT__check_equal__122__actual 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
            __Vtask_testbench_full__DOT__check_equal__122__what[0U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0U];
            __Vtask_testbench_full__DOT__check_equal__122__what[1U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[1U];
            __Vtask_testbench_full__DOT__check_equal__122__what[2U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[2U];
            __Vtask_testbench_full__DOT__check_equal__122__what[3U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[3U];
            __Vtask_testbench_full__DOT__check_equal__122__what[4U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[4U];
            __Vtask_testbench_full__DOT__check_equal__122__what[5U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[5U];
            __Vtask_testbench_full__DOT__check_equal__122__what[6U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[6U];
            __Vtask_testbench_full__DOT__check_equal__122__what[7U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[7U];
            __Vtask_testbench_full__DOT__check_equal__122__what[8U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[8U];
            __Vtask_testbench_full__DOT__check_equal__122__what[9U] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[9U];
            __Vtask_testbench_full__DOT__check_equal__122__what[0xaU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xaU];
            __Vtask_testbench_full__DOT__check_equal__122__what[0xbU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xbU];
            __Vtask_testbench_full__DOT__check_equal__122__what[0xcU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xcU];
            __Vtask_testbench_full__DOT__check_equal__122__what[0xdU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xdU];
            __Vtask_testbench_full__DOT__check_equal__122__what[0xeU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xeU];
            __Vtask_testbench_full__DOT__check_equal__122__what[0xfU] 
                = Vtestbench_full__ConstPool__CONST_hb5ef9967_0[0xfU];
            vlSelfRef.testbench_full__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__check_count);
            if ((__Vtask_testbench_full__DOT__check_equal__122__actual 
                 == __Vtask_testbench_full__DOT__check_equal__122__expected)) {
                vlSelfRef.testbench_full__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
                VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__122__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__122__actual);
            } else {
                vlSelfRef.testbench_full__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
                VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                             512,__Vtask_testbench_full__DOT__check_equal__122__what.data(),
                             32,__Vtask_testbench_full__DOT__check_equal__122__expected,
                             32,__Vtask_testbench_full__DOT__check_equal__122__actual);
            }
        } else {
            VL_WRITEF_NX("    [INFO] message_in (%0#) >= N (3233): RSA correctness is\n    [INFO] not expected to hold; golden model and DUT are\n    [INFO] compared against each other only, not against msg.\n",0,
                         32,__Vtask_testbench_full__DOT__run_test__112__msg);
        }
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    VL_WRITEF_NX("----------------------------------------------------\nTEST: extra start pulse while busy is ignored\n",0);
    vlSelfRef.testbench_full__DOT__rst_n = 0U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__message_in = 0x11U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         392);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         392);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         392);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         392);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         393);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         395);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         395);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         397);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         397);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         399);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         399);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         404);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         404);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         404);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         404);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         404);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         405);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         407);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mod7.v", 
                                         407);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench_full__DOT__start = 0U;
    vlSelfRef.testbench_full__DOT__done_pulses = 0U;
    vlSelfRef.testbench_full__DOT__timeout = 0U;
    while (VL_GTS_III(32, 0x186a0U, vlSelfRef.testbench_full__DOT__timeout)) {
        co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench_full.clk)", 
                                                             "mod7.v", 
                                                             413);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (vlSelfRef.testbench_full__DOT__done) {
            vlSelfRef.testbench_full__DOT__done_pulses 
                = ((IData)(1U) + vlSelfRef.testbench_full__DOT__done_pulses);
        }
        vlSelfRef.testbench_full__DOT__timeout = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__timeout);
        if ((VL_LTS_III(32, 0U, vlSelfRef.testbench_full__DOT__done_pulses) 
             & (IData)(vlSelfRef.testbench_full__DOT__done))) {
            vlSelfRef.testbench_full__DOT__timeout = 0x186a0U;
        }
    }
    __Vtask_testbench_full__DOT__check_true__124__cond 
        = (1U == vlSelfRef.testbench_full__DOT__done_pulses);
    __Vtask_testbench_full__DOT__check_true__124__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[0U];
    __Vtask_testbench_full__DOT__check_true__124__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[1U];
    __Vtask_testbench_full__DOT__check_true__124__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[2U];
    __Vtask_testbench_full__DOT__check_true__124__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[3U];
    __Vtask_testbench_full__DOT__check_true__124__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[4U];
    __Vtask_testbench_full__DOT__check_true__124__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[5U];
    __Vtask_testbench_full__DOT__check_true__124__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[6U];
    __Vtask_testbench_full__DOT__check_true__124__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[7U];
    __Vtask_testbench_full__DOT__check_true__124__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[8U];
    __Vtask_testbench_full__DOT__check_true__124__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[9U];
    __Vtask_testbench_full__DOT__check_true__124__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[0xaU];
    __Vtask_testbench_full__DOT__check_true__124__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[0xbU];
    __Vtask_testbench_full__DOT__check_true__124__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[0xcU];
    __Vtask_testbench_full__DOT__check_true__124__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[0xdU];
    __Vtask_testbench_full__DOT__check_true__124__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[0xeU];
    __Vtask_testbench_full__DOT__check_true__124__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h8bfb6397_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if (__Vtask_testbench_full__DOT__check_true__124__cond) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__124__what.data());
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s\n",0,512,
                     __Vtask_testbench_full__DOT__check_true__124__what.data());
    }
    __Vtask_testbench_full__DOT__check_equal__125__expected = 0x11U;
    __Vtask_testbench_full__DOT__check_equal__125__actual 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w;
    __Vtask_testbench_full__DOT__check_equal__125__what[0U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[0U];
    __Vtask_testbench_full__DOT__check_equal__125__what[1U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[1U];
    __Vtask_testbench_full__DOT__check_equal__125__what[2U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[2U];
    __Vtask_testbench_full__DOT__check_equal__125__what[3U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[3U];
    __Vtask_testbench_full__DOT__check_equal__125__what[4U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[4U];
    __Vtask_testbench_full__DOT__check_equal__125__what[5U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[5U];
    __Vtask_testbench_full__DOT__check_equal__125__what[6U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[6U];
    __Vtask_testbench_full__DOT__check_equal__125__what[7U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[7U];
    __Vtask_testbench_full__DOT__check_equal__125__what[8U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[8U];
    __Vtask_testbench_full__DOT__check_equal__125__what[9U] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[9U];
    __Vtask_testbench_full__DOT__check_equal__125__what[0xaU] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[0xaU];
    __Vtask_testbench_full__DOT__check_equal__125__what[0xbU] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[0xbU];
    __Vtask_testbench_full__DOT__check_equal__125__what[0xcU] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[0xcU];
    __Vtask_testbench_full__DOT__check_equal__125__what[0xdU] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[0xdU];
    __Vtask_testbench_full__DOT__check_equal__125__what[0xeU] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[0xeU];
    __Vtask_testbench_full__DOT__check_equal__125__what[0xfU] 
        = Vtestbench_full__ConstPool__CONST_h2f38beeb_0[0xfU];
    vlSelfRef.testbench_full__DOT__check_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench_full__DOT__check_count);
    if ((__Vtask_testbench_full__DOT__check_equal__125__actual 
         == __Vtask_testbench_full__DOT__check_equal__125__expected)) {
        vlSelfRef.testbench_full__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__pass_count);
        VL_WRITEF_NX("    [CHECK PASS] %0s : got 0x%08x\n",0,
                     512,__Vtask_testbench_full__DOT__check_equal__125__what.data(),
                     32,__Vtask_testbench_full__DOT__check_equal__125__actual);
    } else {
        vlSelfRef.testbench_full__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.testbench_full__DOT__fail_count);
        VL_WRITEF_NX("    [CHECK FAIL] %0s : expected 0x%08x, got 0x%08x\n",0,
                     512,__Vtask_testbench_full__DOT__check_equal__125__what.data(),
                     32,__Vtask_testbench_full__DOT__check_equal__125__expected,
                     32,__Vtask_testbench_full__DOT__check_equal__125__actual);
    }
    VL_WRITEF_NX("----------------------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7bf023fa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench_full.clk)", 
                                                         "mod7.v", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("====================================================\n  TEST SUMMARY\n  Checks run    : %0d\n  Checks passed : %0d\n  Checks failed : %0d\n",0,
                 32,vlSelfRef.testbench_full__DOT__check_count,
                 32,vlSelfRef.testbench_full__DOT__pass_count,
                 32,vlSelfRef.testbench_full__DOT__fail_count);
    if ((0U == vlSelfRef.testbench_full__DOT__fail_count)) {
        VL_WRITEF_NX("  RESULT: *** ALL TESTS PASSED ***\n",0);
    } else {
        VL_WRITEF_NX("  RESULT: *** %0d CHECK(S) FAILED ***\n",0,
                     32,vlSelfRef.testbench_full__DOT__fail_count);
    }
    VL_WRITEF_NX("====================================================\n",0);
    if ((0U != vlSelfRef.testbench_full__DOT__fail_count)) {
        VL_FINISH_MT("mod7.v", 509, "");
    } else {
        VL_FINISH_MT("mod7.v", 511, "");
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_full___024root___eval_initial__TOP__Vtiming__1(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "mod7.v", 
                                             75);
        vlSelfRef.testbench_full__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.testbench_full__DOT__clk)));
    }
}

void Vtestbench_full___024root___eval_act(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtestbench_full___024root___nba_sequent__TOP__0(Vtestbench_full___024root* vlSelf);

void Vtestbench_full___024root___eval_nba(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtestbench_full___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtestbench_full__ConstPool__TABLE_h8d2c50e9_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtestbench_full__ConstPool__TABLE_h7535a9a5_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtestbench_full__ConstPool__TABLE_h55e6c133_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtestbench_full__ConstPool__TABLE_h051473b3_0;
extern const VlUnpacked<CData/*4:0*/, 512> Vtestbench_full__ConstPool__TABLE_h240f8c10_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vtestbench_full__ConstPool__TABLE_h373f8db3_0;

VL_INLINE_OPT void Vtestbench_full___024root___nba_sequent__TOP__0(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__testbench_full__DOT__bus_active;
    __Vdly__testbench_full__DOT__bus_active = 0;
    CData/*5:0*/ __Vdly__testbench_full__DOT__bus_bit_cnt;
    __Vdly__testbench_full__DOT__bus_bit_cnt = 0;
    CData/*0:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__enc_start;
    __Vdly__testbench_full__DOT__u_dut__DOT__enc_start = 0;
    CData/*0:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__spi_start;
    __Vdly__testbench_full__DOT__u_dut__DOT__spi_start = 0;
    CData/*0:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__dec_start;
    __Vdly__testbench_full__DOT__u_dut__DOT__dec_start = 0;
    QData/*63:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r = 0;
    IData/*31:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r = 0;
    QData/*63:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc = 0;
    CData/*5:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt = 0;
    CData/*0:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy = 0;
    CData/*0:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en = 0;
    IData/*31:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg = 0;
    CData/*5:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt = 0;
    IData/*31:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg = 0;
    CData/*0:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active = 0;
    QData/*63:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r = 0;
    IData/*31:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r = 0;
    QData/*63:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc = 0;
    CData/*5:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt = 0;
    CData/*0:0*/ __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy = 0;
    // Body
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg;
    __Vdly__testbench_full__DOT__bus_active = vlSelfRef.testbench_full__DOT__bus_active;
    __Vdly__testbench_full__DOT__bus_bit_cnt = vlSelfRef.testbench_full__DOT__bus_bit_cnt;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt;
    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy;
    __Vdly__testbench_full__DOT__u_dut__DOT__enc_start 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__enc_start;
    __Vdly__testbench_full__DOT__u_dut__DOT__spi_start 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__spi_start;
    __Vdly__testbench_full__DOT__u_dut__DOT__dec_start 
        = vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_start;
    __Vtableidx1 = (((((IData)(vlSelfRef.testbench_full__DOT__start) 
                       << 8U) | ((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__enc_done) 
                                 << 7U)) | (((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__slave_done) 
                                             << 6U) 
                                            | ((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_done) 
                                               << 5U))) 
                    | (((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__state) 
                        << 1U) | (IData)(vlSelfRef.testbench_full__DOT__rst_n)));
    __Vdly__testbench_full__DOT__u_dut__DOT__enc_start 
        = Vtestbench_full__ConstPool__TABLE_h8d2c50e9_0
        [__Vtableidx1];
    __Vdly__testbench_full__DOT__u_dut__DOT__spi_start 
        = Vtestbench_full__ConstPool__TABLE_h7535a9a5_0
        [__Vtableidx1];
    __Vdly__testbench_full__DOT__u_dut__DOT__dec_start 
        = Vtestbench_full__ConstPool__TABLE_h55e6c133_0
        [__Vtableidx1];
    vlSelfRef.testbench_full__DOT__done = Vtestbench_full__ConstPool__TABLE_h051473b3_0
        [__Vtableidx1];
    if ((0x10U & Vtestbench_full__ConstPool__TABLE_h240f8c10_0
         [__Vtableidx1])) {
        vlSelfRef.testbench_full__DOT__u_dut__DOT__state 
            = Vtestbench_full__ConstPool__TABLE_h373f8db3_0
            [__Vtableidx1];
    }
    if (vlSelfRef.testbench_full__DOT__rst_n) {
        if ((1U & ((~ (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__ss_n_w)) 
                   & (~ (IData)(vlSelfRef.testbench_full__DOT__bus_active))))) {
            __Vdly__testbench_full__DOT__bus_active = 1U;
            __Vdly__testbench_full__DOT__bus_bit_cnt = 0U;
            vlSelfRef.testbench_full__DOT__bus_capture_valid = 0U;
        }
        if ((((IData)(vlSelfRef.testbench_full__DOT__bus_active) 
              & (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w)) 
             & (~ (IData)(vlSelfRef.testbench_full__DOT__sclk_prev)))) {
            __Vdly__testbench_full__DOT__bus_bit_cnt 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.testbench_full__DOT__bus_bit_cnt)));
            vlSelfRef.testbench_full__DOT__bus_capture 
                = ((vlSelfRef.testbench_full__DOT__bus_capture 
                    << 1U) | (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w));
            if ((0x1fU == (IData)(vlSelfRef.testbench_full__DOT__bus_bit_cnt))) {
                vlSelfRef.testbench_full__DOT__bus_capture_valid = 1U;
            }
            if ((0x1fU < (IData)(vlSelfRef.testbench_full__DOT__bus_bit_cnt))) {
                vlSelfRef.testbench_full__DOT__bus_framing_error = 1U;
            }
        }
        if (((((IData)(vlSelfRef.testbench_full__DOT__bus_active) 
               & (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w)) 
              & (IData)(vlSelfRef.testbench_full__DOT__sclk_prev)) 
             & ((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w) 
                != (IData)(vlSelfRef.testbench_full__DOT__mosi_at_high)))) {
            vlSelfRef.testbench_full__DOT__mosi_glitch_error = 1U;
        }
        if (((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w) 
             & (~ (IData)(vlSelfRef.testbench_full__DOT__sclk_prev)))) {
            vlSelfRef.testbench_full__DOT__mosi_at_high 
                = vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w;
        }
        if (((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__ss_n_w) 
             & (IData)(vlSelfRef.testbench_full__DOT__bus_active))) {
            if ((0x20U != (IData)(vlSelfRef.testbench_full__DOT__bus_bit_cnt))) {
                vlSelfRef.testbench_full__DOT__bus_framing_error = 1U;
            }
            __Vdly__testbench_full__DOT__bus_active = 0U;
        }
    } else {
        vlSelfRef.testbench_full__DOT__bus_capture = 0U;
        __Vdly__testbench_full__DOT__bus_bit_cnt = 0U;
        __Vdly__testbench_full__DOT__bus_active = 0U;
        vlSelfRef.testbench_full__DOT__bus_capture_valid = 0U;
        vlSelfRef.testbench_full__DOT__bus_framing_error = 0U;
        vlSelfRef.testbench_full__DOT__mosi_glitch_error = 0U;
    }
    vlSelfRef.testbench_full__DOT__bus_active = __Vdly__testbench_full__DOT__bus_active;
    vlSelfRef.testbench_full__DOT__bus_bit_cnt = __Vdly__testbench_full__DOT__bus_bit_cnt;
    vlSelfRef.testbench_full__DOT__sclk_prev = ((IData)(vlSelfRef.testbench_full__DOT__rst_n) 
                                                && (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w));
    if (vlSelfRef.testbench_full__DOT__rst_n) {
        vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_done = 0U;
        if (((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_start) 
             & (~ (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy)))) {
            __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r 
                = VL_MODDIV_QQQ(64, (QData)((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w)), 0xca1ULL);
            __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r = 0x6f7U;
            __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc = 1ULL;
            __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt = 0U;
            __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy = 1U;
        } else if (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy) {
            if ((0x20U > (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt))) {
                if ((1U & vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r)) {
                    __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc 
                        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc 
                                             * vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r), 0xca1ULL);
                }
                __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt)));
                __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r 
                                         * vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r), 0xca1ULL);
                __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r 
                    = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r, 1U);
            } else {
                vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w 
                    = (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc);
                vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_done = 1U;
                __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy = 0U;
            }
        }
        vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_start 
            = __Vdly__testbench_full__DOT__u_dut__DOT__dec_start;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__slave_done = 0U;
        if ((1U & ((~ (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__ss_n_w)) 
                   & (~ (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active))))) {
            __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt = 0U;
            __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg = 0U;
            __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active = 1U;
        }
        if (((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active) 
             & ((~ (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d2)) 
                & (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d1)))) {
            __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg 
                = ((vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg 
                    << 1U) | (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w));
            __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt)));
            if ((0x1fU == (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt))) {
                vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w 
                    = ((vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg 
                        << 1U) | (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w));
                vlSelfRef.testbench_full__DOT__u_dut__DOT__slave_done = 1U;
                __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active = 0U;
            }
        }
        if ((((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__ss_n_w) 
              & (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active)) 
             & (0x1fU > (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt)))) {
            __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active = 0U;
        }
    } else {
        vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_done = 0U;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy = 0U;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc = 1ULL;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r = 0ULL;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r = 0U;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_start 
            = __Vdly__testbench_full__DOT__u_dut__DOT__dec_start;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy 
            = __Vdly__testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__slave_done = 0U;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt = 0U;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active = 0U;
    }
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d2 
        = ((IData)(vlSelfRef.testbench_full__DOT__rst_n) 
           && (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d1));
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d1 
        = ((IData)(vlSelfRef.testbench_full__DOT__rst_n) 
           && (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w));
    if (vlSelfRef.testbench_full__DOT__rst_n) {
        vlSelfRef.testbench_full__DOT__u_dut__DOT__spi_done = 0U;
        if (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__state) {
            if (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__state) {
                if ((3U > (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__clk_cnt))) {
                    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__clk_cnt 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__clk_cnt)));
                } else {
                    __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en 
                        = (1U & (~ (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en)));
                    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__clk_cnt = 0U;
                    if (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en) {
                        vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w = 0U;
                        if ((0x1fU > (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__bit_cnt))) {
                            __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg 
                                = VL_SHIFTL_III(32,32,32, vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg, 1U);
                            vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__bit_cnt 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__bit_cnt)));
                            vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w 
                                = (1U & (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg 
                                         >> 0x1eU));
                        } else {
                            vlSelfRef.testbench_full__DOT__u_dut__DOT__ss_n_w = 1U;
                            vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w = 0U;
                            vlSelfRef.testbench_full__DOT__u_dut__DOT__spi_done = 1U;
                            vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__state = 0U;
                        }
                    } else {
                        vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w = 1U;
                    }
                }
            } else {
                vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__state = 0U;
            }
        } else {
            vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w = 0U;
            if (vlSelfRef.testbench_full__DOT__u_dut__DOT__spi_start) {
                __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg 
                    = vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w;
                vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__bit_cnt = 0U;
                vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__clk_cnt = 0U;
                vlSelfRef.testbench_full__DOT__u_dut__DOT__ss_n_w = 0U;
                vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w 
                    = (vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w 
                       >> 0x1fU);
                vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w = 0U;
                __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en = 0U;
                vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__state = 1U;
            }
        }
        vlSelfRef.testbench_full__DOT__u_dut__DOT__enc_done = 0U;
        if (((IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__enc_start) 
             & (~ (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy)))) {
            __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r 
                = VL_MODDIV_QQQ(64, (QData)((IData)(vlSelfRef.testbench_full__DOT__message_in)), 0xca1ULL);
            __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r = 7U;
            __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc = 1ULL;
            __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt = 0U;
            __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy = 1U;
        } else if (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy) {
            if ((0x20U > (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt))) {
                if ((1U & vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r)) {
                    __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc 
                        = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc 
                                             * vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r), 0xca1ULL);
                }
                __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt)));
                __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r 
                    = VL_MODDIV_QQQ(64, (vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r 
                                         * vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r), 0xca1ULL);
                __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r 
                    = VL_SHIFTR_III(32,32,32, vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r, 1U);
            } else {
                vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w 
                    = (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc);
                vlSelfRef.testbench_full__DOT__u_dut__DOT__enc_done = 1U;
                __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy = 0U;
            }
        }
    } else {
        __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__bit_cnt = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__state = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__ss_n_w = 1U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__spi_done = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__clk_cnt = 0U;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w = 0U;
        vlSelfRef.testbench_full__DOT__u_dut__DOT__enc_done = 0U;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy = 0U;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc = 1ULL;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r = 0ULL;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r = 0U;
        __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt = 0U;
    }
    vlSelfRef.testbench_full__DOT__u_dut__DOT__spi_start 
        = __Vdly__testbench_full__DOT__u_dut__DOT__spi_start;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__enc_start 
        = __Vdly__testbench_full__DOT__u_dut__DOT__enc_start;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt;
    vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy 
        = __Vdly__testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy;
}

void Vtestbench_full___024root___timing_resume(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7bf023fa__0.resume(
                                                   "@(posedge testbench_full.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtestbench_full___024root___timing_commit(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7bf023fa__0.commit(
                                                   "@(posedge testbench_full.clk)");
    }
}

void Vtestbench_full___024root___eval_triggers__act(Vtestbench_full___024root* vlSelf);

bool Vtestbench_full___024root___eval_phase__act(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench_full___024root___eval_triggers__act(vlSelf);
    Vtestbench_full___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtestbench_full___024root___timing_resume(vlSelf);
        Vtestbench_full___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench_full___024root___eval_phase__nba(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench_full___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_full___024root___dump_triggers__nba(Vtestbench_full___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_full___024root___dump_triggers__act(Vtestbench_full___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench_full___024root___eval(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench_full___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mod7.v", 46, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench_full___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mod7.v", 46, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtestbench_full___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtestbench_full___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench_full___024root___eval_debug_assertions(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

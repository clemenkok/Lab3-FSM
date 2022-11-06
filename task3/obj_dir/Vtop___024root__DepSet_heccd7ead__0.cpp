// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__top__DOT__clkTick__DOT__count;
    // Body
    __Vdly__top__DOT__clkTick__DOT__count = vlSelf->top__DOT__clkTick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->top__DOT__count = 0U;
        __Vdly__top__DOT__clkTick__DOT__count = vlSelf->N;
        vlSelf->top__DOT__stateMachine__DOT__current_state = 0U;
    } else {
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->top__DOT__clkTick__DOT__count))) {
                vlSelf->top__DOT__count = 1U;
                __Vdly__top__DOT__clkTick__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__top__DOT__clkTick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->top__DOT__clkTick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->top__DOT__count = 0U;
            }
        }
        vlSelf->top__DOT__stateMachine__DOT__current_state 
            = vlSelf->top__DOT__stateMachine__DOT__next_state;
    }
    vlSelf->top__DOT__clkTick__DOT__count = __Vdly__top__DOT__clkTick__DOT__count;
    if (((((((((0U == vlSelf->top__DOT__stateMachine__DOT__current_state) 
               | (1U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
              | (2U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
             | (3U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
            | (4U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
           | (5U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
          | (6U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
         | (7U == vlSelf->top__DOT__stateMachine__DOT__current_state))) {
        if ((0U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 1U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((1U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 2U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((2U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 3U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((3U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 4U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((4U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 5U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((5U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 6U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((6U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 7U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 8U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        }
    } else if ((8U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->top__DOT__stateMachine__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__count) ? 0U
                : vlSelf->top__DOT__stateMachine__DOT__current_state);
    } else {
        vlSelf->data_out = 0U;
        vlSelf->top__DOT__stateMachine__DOT__next_state 
            = vlSelf->top__DOT__stateMachine__DOT__current_state;
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG

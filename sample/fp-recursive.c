
extern char __VERIFIER_nondet_char();
extern short __VERIFIER_nondet_short();
extern int __VERIFIER_nondet_int();
extern long __VERIFIER_nondet_long();
extern long long __VERIFIER_nondet_long_long();
extern _Bool __VERIFIER_nondet__Bool();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern long double __VERIFIER_nondet_long_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error() { __assert_fail("0", "sample/fp-recursive.c", 0, "reach_error"); }
// function declarations
_Bool main_init_0(float, int, float, int, float, float, float, float, float, float);
_Bool main_final_2(float, int, float, int, float, float, float, float, float, float);
_Bool __loc_120_1(float, int, float, int, float, float, float, float, float, float);
_Bool main_error_3(float, int, float, int, float, float, float, float, float, float);
_Bool __chc_false();

// global variables
// rules
/*
ForAll([main::x,
        main_ret,
        main::IN,
        assume_abort_if_not::cond,
        f::x,
        f_ret,
        call_f_ret3,
        fp::x,
        fp_ret,
        call_fp_ret4],
       Implies(True,
               main_init_0(main::x,
                           main_ret,
                           main::IN,
                           assume_abort_if_not::cond,
                           f::x,
                           f_ret,
                           call_f_ret3,
                           fp::x,
                           fp_ret,
                           call_fp_ret4)))
*/
_Bool main_init_0(float p0, int p1, float p2, int p3, float p4, float p5, float p6, float p7, float p8, float p9) {
  {
    
    if (1) { return 1; }
  }
  return 0;
}


/*
ForAll([main::x,
        main_ret_new,
        main::IN,
        assume_abort_if_not::cond,
        f::x,
        f_ret,
        call_f_ret3,
        fp::x,
        fp_ret,
        call_fp_ret4,
        main_ret],
       Implies(And(__loc_120_1(main::x,
                               main_ret,
                               main::IN,
                               assume_abort_if_not::cond,
                               f::x,
                               f_ret,
                               call_f_ret3,
                               fp::x,
                               fp_ret,
                               call_fp_ret4),
                   And(fpToFP(RNE(), main::x) <
                       fpFP(0, 1019, 2702159776422298),
                       main_ret_new == 0)),
               main_final_2(main::x,
                            main_ret_new,
                            main::IN,
                            assume_abort_if_not::cond,
                            f::x,
                            f_ret,
                            call_f_ret3,
                            fp::x,
                            fp_ret,
                            call_fp_ret4)))
*/
_Bool main_final_2(float p0, int p1, float p2, int p3, float p4, float p5, float p6, float p7, float p8, float p9) {
  {
    int main_ret = __VERIFIER_nondet_int();
    if ((__loc_120_1(p0, main_ret, p2, p3, p4, p5, p6, p7, p8, p9) && ((fpToFP(RNE(), Var(10)) < fpFP(0, 1019, 2702159776422298)) && (p1 == 0)))) { return 1; }
  }
  return 0;
}


/*
ForAll([main::x_new,
        main_ret,
        main::IN_new,
        assume_abort_if_not::cond_new,
        f::x_new,
        f_ret_new,
        call_f_ret3_new,
        fp::x_new,
        fp_ret_new,
        call_fp_ret4_new,
        main::x,
        main::IN,
        assume_abort_if_not::cond,
        f::x,
        f_ret,
        call_f_ret3,
        fp::x,
        fp_ret,
        call_fp_ret4],
       Implies(And(main_init_0(main::x,
                               main_ret,
                               main::IN,
                               assume_abort_if_not::cond,
                               f::x,
                               f_ret,
                               call_f_ret3,
                               fp::x,
                               fp_ret,
                               call_fp_ret4),
                   And(And(And(And(And(And(And(And(And(And(True,
                                        True),
                                        assume_abort_if_not::cond_new ==
                                        If(And(Not(0 ==
                                        If(main::IN_new >
                                        -fpFP(..., ..., ...),
                                        1,
                                        0)),
                                        Not(0 ==
                                        If(main::IN_new <
                                        fpFP(0, 124, 5033164),
                                        1,
                                        0))),
                                        1,
                                        0)),
                                        Not(assume_abort_if_not::cond_new ==
                                        0)),
                                        f::x_new ==
                                        main::IN_new),
                                        f_ret_new ==
                                        f::x_new + -f::x_new * f::x_new * f::x_new / fpFP(0, 129, 4194304) + f::x_new * f::x_new * f::x_new * f::x_new * f::x_new / fpFP(0, 133, 7340032) + f::x_new * f::x_new * f::x_new * f::x_new * f::x_new * f::x_new * f::x_new / fpFP(0, 139, 1933312)),
                                       call_f_ret3_new ==
                                       f_ret_new),
                                   fp::x_new == main::IN_new),
                               fp_ret_new ==
                               -fp::x_new * fp::x_new / fpFP(0, 128, 0) + fp::x_new * fp::x_new * fp::x_new * fp::x_new / fpFP(0, 131, 4194304) + fp::x_new * fp::x_new * fp::x_new * fp::x_new * fp::x_new * fp::x_new / fpFP(0, 136, 3407872) + fpFP(0, 127, 0)),
                           call_fp_ret4_new == fp_ret_new),
                       main::x_new ==
                       main::IN_new + -call_f_ret3_new / call_fp_ret4_new)),
               __loc_120_1(main::x_new,
                           main_ret,
                           main::IN_new,
                           assume_abort_if_not::cond_new,
                           f::x_new,
                           f_ret_new,
                           call_f_ret3_new,
                           fp::x_new,
                           fp_ret_new,
                           call_fp_ret4_new)))
*/
_Bool __loc_120_1(float p0, int p1, float p2, int p3, float p4, float p5, float p6, float p7, float p8, float p9) {
  {
    float call_fp_ret4 = __VERIFIER_nondet_float();
    float fp_ret = __VERIFIER_nondet_float();
    float fp__x = __VERIFIER_nondet_float();
    float call_f_ret3 = __VERIFIER_nondet_float();
    float f_ret = __VERIFIER_nondet_float();
    float f__x = __VERIFIER_nondet_float();
    int assume_abort_if_not__cond = __VERIFIER_nondet_int();
    float main__IN = __VERIFIER_nondet_float();
    float main__x = __VERIFIER_nondet_float();
    if ((main_init_0(main__x, p1, main__IN, assume_abort_if_not__cond, f__x, f_ret, call_f_ret3, fp__x, fp_ret, call_fp_ret4) && ((((((((((1 && 1) && (p3 == (((!(0 == ((Var(16) > -fpFP(0, 124, 5033164)) ? 1 : 0))) && (!(0 == ((Var(16) < fpFP(0, 124, 5033164)) ? 1 : 0)))) ? 1 : 0))) && (!(p3 == 0))) && (p4 == p2)) && (p5 == (RNE() + Var(14) + -Var(14) * Var(14) * Var(14) / fpFP(0, 129, 4194304) + Var(14) * Var(14) * Var(14) * Var(14) * Var(14) / fpFP(0, 133, 7340032)))) && (p6 == p5)) && (p7 == p2)) && (p8 == (RNE() + -Var(11) * Var(11) / fpFP(0, 128, 0) + Var(11) * Var(11) * Var(11) * Var(11) / fpFP(0, 131, 4194304) + Var(11) * Var(11) * Var(11) * Var(11) * Var(11) * Var(11) / fpFP(0, 136, 3407872)))) && (p9 == p8)) && (p0 == (RNE() + Var(16)))))) { return 1; }
  }
  return 0;
}


/*
ForAll([main::x,
        main_ret,
        main::IN,
        assume_abort_if_not::cond,
        f::x,
        f_ret,
        call_f_ret3,
        fp::x,
        fp_ret,
        call_fp_ret4],
       Implies(And(__loc_120_1(main::x,
                               main_ret,
                               main::IN,
                               assume_abort_if_not::cond,
                               f::x,
                               f_ret,
                               call_f_ret3,
                               fp::x,
                               fp_ret,
                               call_fp_ret4),
                   Not(fpToFP(RNE(), main::x) <
                       fpFP(0, 1019, 2702159776422298))),
               main_error_3(main::x,
                            main_ret,
                            main::IN,
                            assume_abort_if_not::cond,
                            f::x,
                            f_ret,
                            call_f_ret3,
                            fp::x,
                            fp_ret,
                            call_fp_ret4)))
*/
_Bool main_error_3(float p0, int p1, float p2, int p3, float p4, float p5, float p6, float p7, float p8, float p9) {
  {
    
    if ((__loc_120_1(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9) && (!(fpToFP(RNE(), Var(9)) < fpFP(0, 1019, 2702159776422298))))) { return 1; }
  }
  return 0;
}


/*
ForAll([main::x,
        main_ret,
        main::IN,
        assume_abort_if_not::cond,
        f::x,
        f_ret,
        call_f_ret3,
        fp::x,
        fp_ret,
        call_fp_ret4],
       Implies(main_error_3(main::x,
                            main_ret,
                            main::IN,
                            assume_abort_if_not::cond,
                            f::x,
                            f_ret,
                            call_f_ret3,
                            fp::x,
                            fp_ret,
                            call_fp_ret4),
               False))
*/
_Bool __chc_false() {
  {
    float call_fp_ret4 = __VERIFIER_nondet_float();
    float fp_ret = __VERIFIER_nondet_float();
    float fp__x = __VERIFIER_nondet_float();
    float call_f_ret3 = __VERIFIER_nondet_float();
    float f_ret = __VERIFIER_nondet_float();
    float f__x = __VERIFIER_nondet_float();
    int assume_abort_if_not__cond = __VERIFIER_nondet_int();
    float main__IN = __VERIFIER_nondet_float();
    int main_ret = __VERIFIER_nondet_int();
    float main__x = __VERIFIER_nondet_float();
    if (main_error_3(main__x, main_ret, main__IN, assume_abort_if_not__cond, f__x, f_ret, call_f_ret3, fp__x, fp_ret, call_fp_ret4)) { return 1; }
  }
  return 0;
}



// main function
int main() {
  if(__chc_false()) { reach_error(); }
}
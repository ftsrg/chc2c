
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
void reach_error() { __assert_fail("0", "sample/fp-linear.c", 0, "reach_error"); }
// function declarations
void rule_0();
void rule_1();
void rule_2();
void rule_3();
void rule_4();

// global variables
float main_init_0_0;
int main_init_0_1;
float main_init_0_2;
int main_init_0_3;
float main_init_0_4;
float main_init_0_5;
float main_init_0_6;
float main_init_0_7;
float main_init_0_8;
float main_init_0_9;
_Bool main_init_0;

float __loc_120_1_0;
int __loc_120_1_1;
float __loc_120_1_2;
int __loc_120_1_3;
float __loc_120_1_4;
float __loc_120_1_5;
float __loc_120_1_6;
float __loc_120_1_7;
float __loc_120_1_8;
float __loc_120_1_9;
_Bool __loc_120_1;

float main_final_2_0;
int main_final_2_1;
float main_final_2_2;
int main_final_2_3;
float main_final_2_4;
float main_final_2_5;
float main_final_2_6;
float main_final_2_7;
float main_final_2_8;
float main_final_2_9;
_Bool main_final_2;

float main_error_3_0;
int main_error_3_1;
float main_error_3_2;
int main_error_3_3;
float main_error_3_4;
float main_error_3_5;
float main_error_3_6;
float main_error_3_7;
float main_error_3_8;
float main_error_3_9;
_Bool main_error_3;

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
void rule_0() {
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
  if (1) {
    main_init_0_0 = main__x;
    main_init_0_1 = main_ret;
    main_init_0_2 = main__IN;
    main_init_0_3 = assume_abort_if_not__cond;
    main_init_0_4 = f__x;
    main_init_0_5 = f_ret;
    main_init_0_6 = call_f_ret3;
    main_init_0_7 = fp__x;
    main_init_0_8 = fp_ret;
    main_init_0_9 = call_fp_ret4;
    main_init_0 = 1;
  } else {
    abort();
  }
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
void rule_1() {
  int main_ret = __VERIFIER_nondet_int();
  float call_fp_ret4 = __VERIFIER_nondet_float();
  float fp_ret = __VERIFIER_nondet_float();
  float fp__x = __VERIFIER_nondet_float();
  float call_f_ret3 = __VERIFIER_nondet_float();
  float f_ret = __VERIFIER_nondet_float();
  float f__x = __VERIFIER_nondet_float();
  int assume_abort_if_not__cond = __VERIFIER_nondet_int();
  float main__IN = __VERIFIER_nondet_float();
  int main_ret_new = __VERIFIER_nondet_int();
  float main__x = __VERIFIER_nondet_float();
  if (((__loc_120_1 && __loc_120_1_0 == main__x && __loc_120_1_1 == main_ret && __loc_120_1_2 == main__IN && __loc_120_1_3 == assume_abort_if_not__cond && __loc_120_1_4 == f__x && __loc_120_1_5 == f_ret && __loc_120_1_6 == call_f_ret3 && __loc_120_1_7 == fp__x && __loc_120_1_8 == fp_ret && __loc_120_1_9 == call_fp_ret4) && ((fpToFP(RNE(), Var(10)) < fpFP(0, 1019, 2702159776422298)) && (main_ret_new == 0)))) {
    main_final_2_0 = main__x;
    main_final_2_1 = main_ret_new;
    main_final_2_2 = main__IN;
    main_final_2_3 = assume_abort_if_not__cond;
    main_final_2_4 = f__x;
    main_final_2_5 = f_ret;
    main_final_2_6 = call_f_ret3;
    main_final_2_7 = fp__x;
    main_final_2_8 = fp_ret;
    main_final_2_9 = call_fp_ret4;
    main_final_2 = 1;
  } else {
    abort();
  }
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
void rule_2() {
  float call_fp_ret4 = __VERIFIER_nondet_float();
  float fp_ret = __VERIFIER_nondet_float();
  float fp__x = __VERIFIER_nondet_float();
  float call_f_ret3 = __VERIFIER_nondet_float();
  float f_ret = __VERIFIER_nondet_float();
  float f__x = __VERIFIER_nondet_float();
  int assume_abort_if_not__cond = __VERIFIER_nondet_int();
  float main__IN = __VERIFIER_nondet_float();
  float main__x = __VERIFIER_nondet_float();
  float call_fp_ret4_new = __VERIFIER_nondet_float();
  float fp_ret_new = __VERIFIER_nondet_float();
  float fp__x_new = __VERIFIER_nondet_float();
  float call_f_ret3_new = __VERIFIER_nondet_float();
  float f_ret_new = __VERIFIER_nondet_float();
  float f__x_new = __VERIFIER_nondet_float();
  int assume_abort_if_not__cond_new = __VERIFIER_nondet_int();
  float main__IN_new = __VERIFIER_nondet_float();
  int main_ret = __VERIFIER_nondet_int();
  float main__x_new = __VERIFIER_nondet_float();
  if (((main_init_0 && main_init_0_0 == main__x && main_init_0_1 == main_ret && main_init_0_2 == main__IN && main_init_0_3 == assume_abort_if_not__cond && main_init_0_4 == f__x && main_init_0_5 == f_ret && main_init_0_6 == call_f_ret3 && main_init_0_7 == fp__x && main_init_0_8 == fp_ret && main_init_0_9 == call_fp_ret4) && ((((((((((1 && 1) && (assume_abort_if_not__cond_new == (((!(0 == ((Var(16) > -fpFP(0, 124, 5033164)) ? 1 : 0))) && (!(0 == ((Var(16) < fpFP(0, 124, 5033164)) ? 1 : 0)))) ? 1 : 0))) && (!(assume_abort_if_not__cond_new == 0))) && (f__x_new == main__IN_new)) && (f_ret_new == (RNE() + Var(14) + -Var(14) * Var(14) * Var(14) / fpFP(0, 129, 4194304) + Var(14) * Var(14) * Var(14) * Var(14) * Var(14) / fpFP(0, 133, 7340032)))) && (call_f_ret3_new == f_ret_new)) && (fp__x_new == main__IN_new)) && (fp_ret_new == (RNE() + -Var(11) * Var(11) / fpFP(0, 128, 0) + Var(11) * Var(11) * Var(11) * Var(11) / fpFP(0, 131, 4194304) + Var(11) * Var(11) * Var(11) * Var(11) * Var(11) * Var(11) / fpFP(0, 136, 3407872)))) && (call_fp_ret4_new == fp_ret_new)) && (main__x_new == (RNE() + Var(16)))))) {
    __loc_120_1_0 = main__x_new;
    __loc_120_1_1 = main_ret;
    __loc_120_1_2 = main__IN_new;
    __loc_120_1_3 = assume_abort_if_not__cond_new;
    __loc_120_1_4 = f__x_new;
    __loc_120_1_5 = f_ret_new;
    __loc_120_1_6 = call_f_ret3_new;
    __loc_120_1_7 = fp__x_new;
    __loc_120_1_8 = fp_ret_new;
    __loc_120_1_9 = call_fp_ret4_new;
    __loc_120_1 = 1;
  } else {
    abort();
  }
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
void rule_3() {
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
  if (((__loc_120_1 && __loc_120_1_0 == main__x && __loc_120_1_1 == main_ret && __loc_120_1_2 == main__IN && __loc_120_1_3 == assume_abort_if_not__cond && __loc_120_1_4 == f__x && __loc_120_1_5 == f_ret && __loc_120_1_6 == call_f_ret3 && __loc_120_1_7 == fp__x && __loc_120_1_8 == fp_ret && __loc_120_1_9 == call_fp_ret4) && (!(fpToFP(RNE(), Var(9)) < fpFP(0, 1019, 2702159776422298))))) {
    main_error_3_0 = main__x;
    main_error_3_1 = main_ret;
    main_error_3_2 = main__IN;
    main_error_3_3 = assume_abort_if_not__cond;
    main_error_3_4 = f__x;
    main_error_3_5 = f_ret;
    main_error_3_6 = call_f_ret3;
    main_error_3_7 = fp__x;
    main_error_3_8 = fp_ret;
    main_error_3_9 = call_fp_ret4;
    main_error_3 = 1;
  } else {
    abort();
  }
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
void rule_4() {
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
  if ((main_error_3 && main_error_3_0 == main__x && main_error_3_1 == main_ret && main_error_3_2 == main__IN && main_error_3_3 == assume_abort_if_not__cond && main_error_3_4 == f__x && main_error_3_5 == f_ret && main_error_3_6 == call_f_ret3 && main_error_3_7 == fp__x && main_error_3_8 == fp_ret && main_error_3_9 == call_fp_ret4)) {
    reach_error();
  } else {
    abort();
  }
}



// main function
int main() {
  while(1) {
    switch(__VERIFIER_nondet_int()) {
      case 0: rule_0(); break;
      case 1: rule_1(); break;
      case 2: rule_2(); break;
      case 3: rule_3(); break;
      case 4: rule_4(); break;
      default: abort(); break;
    }
  }
}
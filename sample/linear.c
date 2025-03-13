
extern int __VERIFIER_nondet_int();
extern _Bool __VERIFIER_nondet__Bool();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error() { __assert_fail("0", "linear.c", 0, "reach_error"); }
// function declarations
void rule_0();
void rule_1();
void rule_2();
void rule_3();
void rule_4();

// global variables
int _INV_MAIN_1__0;
int _INV_MAIN_1__1;
int _INV_MAIN_1__2;
int _INV_MAIN_1__3;
int _INV_MAIN_1__4;
int _INV_MAIN_1__5;

// rules
/*
ForAll([A, B, C, D, E, F],
       Implies(And(And(D == 1,
                       C == 0,
                       B == E,
                       A == 0,
                       F == 0)),
               <INV_MAIN_1>(A, B, C, D, E, F)))
*/
void rule_0() {
  int F = __VERIFIER_nondet_int();
  int E = __VERIFIER_nondet_int();
  int D = __VERIFIER_nondet_int();
  int C = __VERIFIER_nondet_int();
  int B = __VERIFIER_nondet_int();
  int A = __VERIFIER_nondet_int();
  if ((((D == 1) && (C == 0) && (B == E) && (A == 0) && (F == 0)))) {
    _INV_MAIN_1__0 = A;
    _INV_MAIN_1__1 = B;
    _INV_MAIN_1__2 = C;
    _INV_MAIN_1__3 = D;
    _INV_MAIN_1__4 = E;
    _INV_MAIN_1__5 = F;
  } else {
    abort();
  }
}


/*
ForAll([A, B, C, D, E, F, G, H, I, J],
       Implies(And(<INV_MAIN_1>(G, B, H, I, E, J),
                   And(H + G == C,
                       I == -1 + D,
                       G == -1 + A,
                       B >= G,
                       E >= I,
                       J + I == F)),
               <INV_MAIN_1>(A, B, C, D, E, F)))
*/
void rule_1() {
  int J = __VERIFIER_nondet_int();
  int I = __VERIFIER_nondet_int();
  int H = __VERIFIER_nondet_int();
  int G = __VERIFIER_nondet_int();
  int F = __VERIFIER_nondet_int();
  int E = __VERIFIER_nondet_int();
  int D = __VERIFIER_nondet_int();
  int C = __VERIFIER_nondet_int();
  int B = __VERIFIER_nondet_int();
  int A = __VERIFIER_nondet_int();
  if (((_INV_MAIN_1__0 == G && _INV_MAIN_1__1 == B && _INV_MAIN_1__2 == H && _INV_MAIN_1__3 == I && _INV_MAIN_1__4 == E && _INV_MAIN_1__5 == J) && (((H + G) == C) && (I == ((-1) + D)) && (G == ((-1) + A)) && (B >= G) && (E >= I) && ((J + I) == F)))) {
    _INV_MAIN_1__0 = A;
    _INV_MAIN_1__1 = B;
    _INV_MAIN_1__2 = C;
    _INV_MAIN_1__3 = D;
    _INV_MAIN_1__4 = E;
    _INV_MAIN_1__5 = F;
  } else {
    abort();
  }
}


/*
ForAll([A, B, C, D, E, F, G, H],
       Implies(And(<INV_MAIN_1>(G, B, H, D, E, F),
                   And(G == -1 + A,
                       B >= G,
                       Not(E >= D),
                       H + G == C)),
               <INV_MAIN_1>(A, B, C, D, E, F)))
*/
void rule_2() {
  int H = __VERIFIER_nondet_int();
  int G = __VERIFIER_nondet_int();
  int F = __VERIFIER_nondet_int();
  int E = __VERIFIER_nondet_int();
  int D = __VERIFIER_nondet_int();
  int C = __VERIFIER_nondet_int();
  int B = __VERIFIER_nondet_int();
  int A = __VERIFIER_nondet_int();
  if (((_INV_MAIN_1__0 == G && _INV_MAIN_1__1 == B && _INV_MAIN_1__2 == H && _INV_MAIN_1__3 == D && _INV_MAIN_1__4 == E && _INV_MAIN_1__5 == F) && ((G == ((-1) + A)) && (B >= G) && (!(E >= D)) && ((H + G) == C)))) {
    _INV_MAIN_1__0 = A;
    _INV_MAIN_1__1 = B;
    _INV_MAIN_1__2 = C;
    _INV_MAIN_1__3 = D;
    _INV_MAIN_1__4 = E;
    _INV_MAIN_1__5 = F;
  } else {
    abort();
  }
}


/*
ForAll([A, B, C, D, E, F, G, H],
       Implies(And(<INV_MAIN_1>(A, B, C, G, E, H),
                   And(G == -1 + D,
                       Not(B >= A),
                       E >= G,
                       H + G == F)),
               <INV_MAIN_1>(A, B, C, D, E, F)))
*/
void rule_3() {
  int H = __VERIFIER_nondet_int();
  int G = __VERIFIER_nondet_int();
  int F = __VERIFIER_nondet_int();
  int E = __VERIFIER_nondet_int();
  int D = __VERIFIER_nondet_int();
  int C = __VERIFIER_nondet_int();
  int B = __VERIFIER_nondet_int();
  int A = __VERIFIER_nondet_int();
  if (((_INV_MAIN_1__0 == A && _INV_MAIN_1__1 == B && _INV_MAIN_1__2 == C && _INV_MAIN_1__3 == G && _INV_MAIN_1__4 == E && _INV_MAIN_1__5 == H) && ((G == ((-1) + D)) && (!(B >= A)) && (E >= G) && ((H + G) == F)))) {
    _INV_MAIN_1__0 = A;
    _INV_MAIN_1__1 = B;
    _INV_MAIN_1__2 = C;
    _INV_MAIN_1__3 = D;
    _INV_MAIN_1__4 = E;
    _INV_MAIN_1__5 = F;
  } else {
    abort();
  }
}


/*
ForAll([A, B, C, D, E, F],
       Implies(And(<INV_MAIN_1>(F, E, A, D, C, B),
                   And(Not(E >= F),
                       Not(C >= D),
                       Not(A == B))),
               False))
*/
void rule_4() {
  int F = __VERIFIER_nondet_int();
  int E = __VERIFIER_nondet_int();
  int D = __VERIFIER_nondet_int();
  int C = __VERIFIER_nondet_int();
  int B = __VERIFIER_nondet_int();
  int A = __VERIFIER_nondet_int();
  if (((_INV_MAIN_1__0 == F && _INV_MAIN_1__1 == E && _INV_MAIN_1__2 == A && _INV_MAIN_1__3 == D && _INV_MAIN_1__4 == C && _INV_MAIN_1__5 == B) && ((!(E >= F)) && (!(C >= D)) && (!(A == B))))) {
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
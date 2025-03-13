
extern int __VERIFIER_nondet_int();
extern _Bool __VERIFIER_nondet__Bool();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error() { __assert_fail("0", "recursive.c", 0, "reach_error"); }
// function declarations
_Bool _INV_MAIN_1_(int, int, int, int, int, int);
_Bool __chc_false();

// global variables
// rules
/*
ForAll([A, B, C, D, E, F],
       Implies(And(And(D == 1,
                       C == 0,
                       B == E,
                       A == 0,
                       F == 0)),
               <INV_MAIN_1>(A, B, C, D, E, F)))
ForAll([A, B, C, D, E, F, G, H, I, J],
       Implies(And(<INV_MAIN_1>(G, B, H, I, E, J),
                   And(H + G == C,
                       I == -1 + D,
                       G == -1 + A,
                       B >= G,
                       E >= I,
                       J + I == F)),
               <INV_MAIN_1>(A, B, C, D, E, F)))
ForAll([A, B, C, D, E, F, G, H],
       Implies(And(<INV_MAIN_1>(G, B, H, D, E, F),
                   And(G == -1 + A,
                       B >= G,
                       Not(E >= D),
                       H + G == C)),
               <INV_MAIN_1>(A, B, C, D, E, F)))
ForAll([A, B, C, D, E, F, G, H],
       Implies(And(<INV_MAIN_1>(A, B, C, G, E, H),
                   And(G == -1 + D,
                       Not(B >= A),
                       E >= G,
                       H + G == F)),
               <INV_MAIN_1>(A, B, C, D, E, F)))
*/
_Bool _INV_MAIN_1_(int p0, int p1, int p2, int p3, int p4, int p5) {
  switch(__VERIFIER_nondet_int()) {
  case 0: {
    
    if ((((p3 == 1) && (p2 == 0) && (p1 == p4) && (p0 == 0) && (p5 == 0)))) { return 1; }
    break;
  }
  case 1: {
    int J = __VERIFIER_nondet_int();
    int I = __VERIFIER_nondet_int();
    int H = __VERIFIER_nondet_int();
    int G = __VERIFIER_nondet_int();
    if ((_INV_MAIN_1_(G, p1, H, I, p4, J) && (((H + G) == p2) && (I == ((-1) + p3)) && (G == ((-1) + p0)) && (p1 >= G) && (p4 >= I) && ((J + I) == p5)))) { return 1; }
    break;
  }
  case 2: {
    int H = __VERIFIER_nondet_int();
    int G = __VERIFIER_nondet_int();
    if ((_INV_MAIN_1_(G, p1, H, p3, p4, p5) && ((G == ((-1) + p0)) && (p1 >= G) && (!(p4 >= p3)) && ((H + G) == p2)))) { return 1; }
    break;
  }
  case 3: {
    int H = __VERIFIER_nondet_int();
    int G = __VERIFIER_nondet_int();
    if ((_INV_MAIN_1_(p0, p1, p2, G, p4, H) && ((G == ((-1) + p3)) && (!(p1 >= p0)) && (p4 >= G) && ((H + G) == p5)))) { return 1; }
    break;
  }
  default: abort(); break;
  }
  return 0;
}


/*
ForAll([A, B, C, D, E, F],
       Implies(And(<INV_MAIN_1>(F, E, A, D, C, B),
                   And(Not(E >= F),
                       Not(C >= D),
                       Not(A == B))),
               False))
*/
_Bool __chc_false() {
  {
    int F = __VERIFIER_nondet_int();
    int E = __VERIFIER_nondet_int();
    int D = __VERIFIER_nondet_int();
    int C = __VERIFIER_nondet_int();
    int B = __VERIFIER_nondet_int();
    int A = __VERIFIER_nondet_int();
    if ((_INV_MAIN_1_(F, E, A, D, C, B) && ((!(E >= F)) && (!(C >= D)) && (!(A == B))))) { return 1; }
  }
  return 0;
}



// main function
int main() {
  if(__chc_false()) { reach_error(); }
}
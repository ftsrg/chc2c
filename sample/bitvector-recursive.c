
extern char __VERIFIER_nondet_char();
extern short __VERIFIER_nondet_short();
extern int __VERIFIER_nondet_int();
extern long __VERIFIER_nondet_long();
extern long long __VERIFIER_nondet_long_long();
extern _Bool __VERIFIER_nondet__Bool();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error() { __assert_fail("0", "sample/bitvector-recursive.c", 0, "reach_error"); }
// function declarations
_Bool state(_Bool, _Bool, _Bool, _Bool, _Bool, _Bool, int, int, int, int, int, int, int);
_Bool __chc_false();

// global variables
// rules
/*
ForAll([A, B, C, D, E, F, G, H, I, J, K, L, M],
       Implies(And(And(Not(B),
                       Not(C),
                       Not(D),
                       Not(M),
                       Not(L),
                       Not(A))),
               state(D, C, B, A, M, L, F, E, G, I, K, J, H)))
ForAll([A,
        B,
        C,
        D,
        E,
        F,
        G,
        H,
        I,
        J,
        K,
        L,
        M,
        N,
        O,
        P,
        Q,
        R,
        S,
        T,
        U,
        V,
        W,
        X,
        Y,
        Z,
        A1],
       Implies(And(state(D,
                         C,
                         B,
                         A,
                         A1,
                         Z,
                         N,
                         L,
                         P,
                         T,
                         W,
                         U,
                         Q),
                   Or(And(Not(A),
                          Not(B),
                          Not(C),
                          Not(D),
                          Not(J),
                          Not(I),
                          Not(H),
                          Not(G),
                          Not(F),
                          E,
                          Not(Z),
                          Not(A1),
                          X == 0,
                          R == Y,
                          R == V,
                          L == K,
                          N == M,
                          P == O,
                          T == S),
                      And(Not(A),
                          Not(B),
                          Not(C),
                          D,
                          Not(J),
                          Not(I),
                          Not(H),
                          Not(G),
                          F,
                          E,
                          Not(Z),
                          Not(A1),
                          X == W,
                          V == U,
                          R == Q,
                          O == 1 + U,
                          M == O,
                          L == K,
                          T == S,
                          Not(W == 0),
                          Not(Q <= U),
                          1 <= U),
                      And(Not(A),
                          Not(B),
                          Not(C),
                          D,
                          Not(J),
                          Not(I),
                          Not(H),
                          G,
                          Not(F),
                          E,
                          Not(Z),
                          Not(A1),
                          X == W,
                          V == U,
                          R == Q,
                          O == 1 + U,
                          L == K,
                          N == M,
                          T == S,
                          W == 0,
                          Not(Q <= U),
                          1 <= U),
                      And(Not(A),
                          Not(B),
                          Not(C),
                          D,
                          Not(J),
                          Not(I),
                          Not(H),
                          G,
                          F,
                          E,
                          Not(Z),
                          Not(A1),
                          X == W,
                          V == U,
                          R == Q,
                          O == 1 + U,
                          L == K,
                          N == M,
                          T == S,
                          Q <= U,
                          1 <= U),
                      And(Not(A),
                          B,
                          C,
                          D,
                          Not(J),
                          Not(I),
                          H,
                          Not(G),
                          Not(F),
                          Not(E),
                          Not(Z),
                          Not(A1),
                          X == W,
                          V == U,
                          R == Q,
                          L == K,
                          N == M,
                          P == O,
                          T == S,
                          Not(1 <= U)),
                      And(Not(A),
                          B,
                          C,
                          D,
                          Not(J),
                          Not(I),
                          H,
                          Not(G),
                          Not(F),
                          E,
                          Not(Z),
                          Not(A1),
                          X == W,
                          V == U,
                          R == Q,
                          L == K,
                          N == M,
                          P == O,
                          T == S,
                          Not(U <= Q),
                          1 <= U),
                      And(Not(A),
                          B,
                          C,
                          D,
                          Not(J),
                          Not(I),
                          Not(H),
                          Not(G),
                          Not(F),
                          E,
                          Not(Z),
                          Not(A1),
                          X == W,
                          V == 4294967295 + U,
                          R == Q,
                          L == K,
                          N == M,
                          P == O,
                          T == S,
                          U <= Q,
                          1 <= U),
                      And(A,
                          Not(B),
                          C,
                          D,
                          J,
                          Not(I),
                          Not(H),
                          Not(G),
                          Not(F),
                          Not(E),
                          Not(Z),
                          Not(A1),
                          X == W,
                          V == U,
...
*/
_Bool state(_Bool p0, _Bool p1, _Bool p2, _Bool p3, _Bool p4, _Bool p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) {
  switch(__VERIFIER_nondet_int()) {
  case 0: {
    
    if ((((!p2) && (!p1) && (!p0) && (!p4) && (!p5) && (!p3)))) { return 1; }
    break;
  }
  case 1: {
    _Bool A1 = __VERIFIER_nondet__Bool();
    _Bool Z = __VERIFIER_nondet__Bool();
    int Y = __VERIFIER_nondet_int();
    int W = __VERIFIER_nondet_int();
    int U = __VERIFIER_nondet_int();
    int T = __VERIFIER_nondet_int();
    int Q = __VERIFIER_nondet_int();
    int P = __VERIFIER_nondet_int();
    int N = __VERIFIER_nondet_int();
    int L = __VERIFIER_nondet_int();
    _Bool D = __VERIFIER_nondet__Bool();
    _Bool C = __VERIFIER_nondet__Bool();
    _Bool B = __VERIFIER_nondet__Bool();
    _Bool A = __VERIFIER_nondet__Bool();
    if ((state(D, C, B, A, A1, Z, N, L, P, T, W, U, Q) && (((!A) && (!B) && (!C) && (!D) && (!p5) && (!p4) && (!p3) && (!p2) && (!p1) && p0 && (!Z) && (!A1) && (p10 == 0) && (p12 == Y) && (p12 == p11) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && (!B) && (!C) && D && (!p5) && (!p4) && (!p3) && (!p2) && p1 && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (p8 == (((unsigned int)1) + ((unsigned int)U))) && (p6 == p8) && (L == p7) && (T == p9) && (!(W == 0)) && (!(((signed int)Q) <= ((signed int)U))) && (((signed int)1) <= ((signed int)U))) || ((!A) && (!B) && (!C) && D && (!p5) && (!p4) && (!p3) && p2 && (!p1) && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (p8 == (((unsigned int)1) + ((unsigned int)U))) && (L == p7) && (N == p6) && (T == p9) && (W == 0) && (!(((signed int)Q) <= ((signed int)U))) && (((signed int)1) <= ((signed int)U))) || ((!A) && (!B) && (!C) && D && (!p5) && (!p4) && (!p3) && p2 && p1 && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (p8 == (((unsigned int)1) + ((unsigned int)U))) && (L == p7) && (N == p6) && (T == p9) && (((signed int)Q) <= ((signed int)U)) && (((signed int)1) <= ((signed int)U))) || ((!A) && B && C && D && (!p5) && (!p4) && p3 && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (!(((signed int)1) <= ((signed int)U)))) || ((!A) && B && C && D && (!p5) && (!p4) && p3 && (!p2) && (!p1) && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (!(((signed int)U) <= ((signed int)Q))) && (((signed int)1) <= ((signed int)U))) || ((!A) && B && C && D && (!p5) && (!p4) && (!p3) && (!p2) && (!p1) && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == (((unsigned int)4294967295) + ((unsigned int)U))) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)U) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)U))) || (A && (!B) && C && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && (!B) && C && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && (!B) && (!C) && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && (!B) && (!C) && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && B && (!C) && D && (!p5) && (!p4) && (!p3) && p2 && p1 && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (p6 == P) && (L == p7) && (P == p8) && (T == p9)) || ((!A) && B && C && (!D) && (!p5) && (!p4) && (!p3) && p2 && p1 && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (!(((signed int)N) <= ((signed int)Q)))) || ((!A) && B && C && (!D) && (!p5) && (!p4) && p3 && p2 && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)N)))) || ((!A) && B && C && (!D) && (!p5) && (!p4) && p3 && p2 && p1 && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (!(((signed int)1) <= ((signed int)U)))) || ((!A) && B && C && (!D) && (!p5) && (!p4) && p3 && p2 && p1 && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (!(((signed int)U) <= ((signed int)Q))) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)U))) || ((!A) && B && C && (!D) && (!p5) && (!p4) && (!p3) && p2 && p1 && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (p6 == (((unsigned int)1) + ((unsigned int)N))) && (L == p7) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (((signed int)U) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)U))) || (A && B && C && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && B && C && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && B && (!C) && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && B && (!C) && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && (!B) && C && D && (!p5) && (!p4) && (!p3) && p2 && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (p6 == P) && (L == p7) && (P == p8) && (T == p9) && (!(((signed int)N) <= ((signed int)Q)))) || ((!A) && (!B) && C && D && (!p5) && p4 && p3 && p2 && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)N)))) || ((!A) && (!B) && C && D && (!p5) && p4 && p3 && p2 && p1 && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (!(((signed int)1) <= ((signed int)U)))) || ((!A) && (!B) && C && D && (!p5) && p4 && p3 && p2 && p1 && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (!(((signed int)U) <= ((signed int)Q))) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)U))) || ((!A) && (!B) && C && D && (!p5) && (!p4) && (!p3) && (!p2) && p1 && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (p6 == (((unsigned int)1) + ((unsigned int)N))) && (L == p7) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (((signed int)U) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)U))) || (A && B && C && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && B && C && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && B && (!C) && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && B && (!C) && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && B && (!C) && (!D) && (!p5) && (!p4) && (!p3) && p2 && (!p1) && p0 && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (!(((signed int)N) <= ((signed int)Q)))) || ((!A) && B && (!C) && (!D) && (!p5) && p4 && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && (!A1) && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p9) && (P == p8) && (((signed int)N) <= ((signed int)Q))) || ((!A) && (!B) && (!C) && (!D) && (!p5) && p4 && (!p3) && (!p2) && (!p1) && p0 && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p9) && (P == p8) && (!(((signed int)T) <= ((signed int)Q)))) || ((!A) && (!B) && (!C) && (!D) && (!p5) && p4 && p3 && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)T)))) || ((!A) && (!B) && (!C) && (!D) && (!p5) && p4 && p3 && (!p2) && p1 && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)N))) && (((signed int)1) <= ((signed int)T))) || ((!A) && (!B) && (!C) && (!D) && (!p5) && p4 && p3 && (!p2) && p1 && p0 && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (!(((signed int)N) <= ((signed int)Q))) && (((signed int)T) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T))) || ((!A) && (!B) && (!C) && (!D) && (!p5) && p4 && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p9 == (((unsigned int)1) + ((unsigned int)T))) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (((signed int)N) <= ((signed int)Q)) && (((signed int)T) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T))) || (A && (!B) && C && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && (!B) && C && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && (!B) && (!C) && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || (A && (!B) && (!C) && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && (!B) && (!C) && D && (!p5) && (!p4) && (!p3) && p2 && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (p6 == (((unsigned int)1) + ((unsigned int)N))) && (L == p7) && (P == p8) && (T == p9) && (!(((signed int)T) <= ((signed int)Q)))) || ((!A) && (!B) && (!C) && D && (!p5) && p4 && (!p3) && (!p2) && p1 && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)T)))) || ((!A) && (!B) && (!C) && D && (!p5) && p4 && (!p3) && p2 && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)N))) && (((signed int)1) <= ((signed int)T))) || ((!A) && (!B) && (!C) && D && (!p5) && p4 && (!p3) && p2 && (!p1) && p0 && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (!(((signed int)N) <= ((signed int)Q))) && (((signed int)T) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T))) || ((!A) && (!B) && (!C) && D && (!p5) && p4 && (!p3) && p2 && p1 && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (((signed int)T) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T)) && (!(((signed int)1) <= ((signed int)U)))) || ((!A) && (!B) && (!C) && D && (!p5) && p4 && (!p3) && p2 && p1 && p0 && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9) && (((signed int)N) <= ((signed int)Q)) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)U) <= ((signed int)Q))) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T)) && (((signed int)1) <= ((signed int)U))) || ((!A) && (!B) && (!C) && D && (!p5) && p4 && (!p3) && (!p2) && (!p1) && p0 && (!Z) && A1 && (p10 == W) && (p11 == U) && (p9 == (((unsigned int)1) + ((unsigned int)T))) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (((signed int)N) <= ((signed int)Q)) && (((signed int)T) <= ((signed int)Q)) && (((signed int)U) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T)) && (((signed int)1) <= ((signed int)U))) || ((!A) && B && C && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && B && C && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && B && (!C) && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && B && (!C) && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && (!B) && C && D && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && (!B) && C && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && (!Z) && A1 && (p10 == W) && (p11 == U) && (p12 == Q) && (L == p7) && (N == p6) && (P == p8) && (T == p9)) || ((!A) && (!B) && (!C) && (!D) && p5 && (!p4) && (!p3) && (!p2) && (!p1) && (!p0) && Z && (!A1))))) { return 1; }
    break;
  }
  default: abort(); break;
  }
  return 0;
}


/*
ForAll([A, B, C, D, E, F, G, H, I, J, K, L, M],
       Implies(And(state(D,
                         C,
                         B,
                         A,
                         M,
                         L,
                         F,
                         E,
                         G,
                         I,
                         K,
                         J,
                         H),
                   And(Not(B),
                       Not(C),
                       Not(D),
                       Not(M),
                       L == True,
                       Not(A))),
               False))
*/
_Bool __chc_false() {
  {
    _Bool M = __VERIFIER_nondet__Bool();
    _Bool L = __VERIFIER_nondet__Bool();
    int K = __VERIFIER_nondet_int();
    int J = __VERIFIER_nondet_int();
    int I = __VERIFIER_nondet_int();
    int H = __VERIFIER_nondet_int();
    int G = __VERIFIER_nondet_int();
    int F = __VERIFIER_nondet_int();
    int E = __VERIFIER_nondet_int();
    _Bool D = __VERIFIER_nondet__Bool();
    _Bool C = __VERIFIER_nondet__Bool();
    _Bool B = __VERIFIER_nondet__Bool();
    _Bool A = __VERIFIER_nondet__Bool();
    if ((state(D, C, B, A, M, L, F, E, G, I, K, J, H) && ((!B) && (!C) && (!D) && (!M) && (L == 1) && (!A)))) { return 1; }
  }
  return 0;
}



// main function
int main() {
  if(__chc_false()) { reach_error(); }
}
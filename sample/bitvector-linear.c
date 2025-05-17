
extern char __VERIFIER_nondet_char();
extern short __VERIFIER_nondet_short();
extern int __VERIFIER_nondet_int();
extern long __VERIFIER_nondet_long();
extern long long __VERIFIER_nondet_long_long();
extern _Bool __VERIFIER_nondet__Bool();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error() { __assert_fail("0", "sample/bitvector-linear.c", 0, "reach_error"); }
// function declarations
void rule_0();
void rule_1();
void rule_2();

// global variables
_Bool state_0;
_Bool state_1;
_Bool state_2;
_Bool state_3;
_Bool state_4;
_Bool state_5;
int state_6;
int state_7;
int state_8;
int state_9;
int state_10;
int state_11;
int state_12;
_Bool state;

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
*/
void rule_0() {
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
  if ((((!B) && (!C) && (!D) && (!M) && (!L) && (!A)))) {
    state_0 = D;
    state_1 = C;
    state_2 = B;
    state_3 = A;
    state_4 = M;
    state_5 = L;
    state_6 = F;
    state_7 = E;
    state_8 = G;
    state_9 = I;
    state_10 = K;
    state_11 = J;
    state_12 = H;
    state = 1;
  } else {
    abort();
  }
}


/*
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
void rule_1() {
  _Bool A1 = __VERIFIER_nondet__Bool();
  _Bool Z = __VERIFIER_nondet__Bool();
  int Y = __VERIFIER_nondet_int();
  int X = __VERIFIER_nondet_int();
  int W = __VERIFIER_nondet_int();
  int V = __VERIFIER_nondet_int();
  int U = __VERIFIER_nondet_int();
  int T = __VERIFIER_nondet_int();
  int S = __VERIFIER_nondet_int();
  int R = __VERIFIER_nondet_int();
  int Q = __VERIFIER_nondet_int();
  int P = __VERIFIER_nondet_int();
  int O = __VERIFIER_nondet_int();
  int N = __VERIFIER_nondet_int();
  int M = __VERIFIER_nondet_int();
  int L = __VERIFIER_nondet_int();
  int K = __VERIFIER_nondet_int();
  _Bool J = __VERIFIER_nondet__Bool();
  _Bool I = __VERIFIER_nondet__Bool();
  _Bool H = __VERIFIER_nondet__Bool();
  _Bool G = __VERIFIER_nondet__Bool();
  _Bool F = __VERIFIER_nondet__Bool();
  _Bool E = __VERIFIER_nondet__Bool();
  _Bool D = __VERIFIER_nondet__Bool();
  _Bool C = __VERIFIER_nondet__Bool();
  _Bool B = __VERIFIER_nondet__Bool();
  _Bool A = __VERIFIER_nondet__Bool();
  if (((state && state_0 == D && state_1 == C && state_2 == B && state_3 == A && state_4 == A1 && state_5 == Z && state_6 == N && state_7 == L && state_8 == P && state_9 == T && state_10 == W && state_11 == U && state_12 == Q) && (((!A) && (!B) && (!C) && (!D) && (!J) && (!I) && (!H) && (!G) && (!F) && E && (!Z) && (!A1) && (X == 0) && (R == Y) && (R == V) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && (!B) && (!C) && D && (!J) && (!I) && (!H) && (!G) && F && E && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (O == (((unsigned int)1) + ((unsigned int)U))) && (M == O) && (L == K) && (T == S) && (!(W == 0)) && (!(((signed int)Q) <= ((signed int)U))) && (((signed int)1) <= ((signed int)U))) || ((!A) && (!B) && (!C) && D && (!J) && (!I) && (!H) && G && (!F) && E && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (O == (((unsigned int)1) + ((unsigned int)U))) && (L == K) && (N == M) && (T == S) && (W == 0) && (!(((signed int)Q) <= ((signed int)U))) && (((signed int)1) <= ((signed int)U))) || ((!A) && (!B) && (!C) && D && (!J) && (!I) && (!H) && G && F && E && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (O == (((unsigned int)1) + ((unsigned int)U))) && (L == K) && (N == M) && (T == S) && (((signed int)Q) <= ((signed int)U)) && (((signed int)1) <= ((signed int)U))) || ((!A) && B && C && D && (!J) && (!I) && H && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (!(((signed int)1) <= ((signed int)U)))) || ((!A) && B && C && D && (!J) && (!I) && H && (!G) && (!F) && E && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (!(((signed int)U) <= ((signed int)Q))) && (((signed int)1) <= ((signed int)U))) || ((!A) && B && C && D && (!J) && (!I) && (!H) && (!G) && (!F) && E && (!Z) && (!A1) && (X == W) && (V == (((unsigned int)4294967295) + ((unsigned int)U))) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)U) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)U))) || (A && (!B) && C && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && (!B) && C && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && (!B) && (!C) && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && (!B) && (!C) && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && B && (!C) && D && (!J) && (!I) && (!H) && G && F && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (M == P) && (L == K) && (P == O) && (T == S)) || ((!A) && B && C && (!D) && (!J) && (!I) && (!H) && G && F && E && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (!(((signed int)N) <= ((signed int)Q)))) || ((!A) && B && C && (!D) && (!J) && (!I) && H && G && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)N)))) || ((!A) && B && C && (!D) && (!J) && (!I) && H && G && F && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (!(((signed int)1) <= ((signed int)U)))) || ((!A) && B && C && (!D) && (!J) && (!I) && H && G && F && E && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (!(((signed int)U) <= ((signed int)Q))) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)U))) || ((!A) && B && C && (!D) && (!J) && (!I) && (!H) && G && F && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (M == (((unsigned int)1) + ((unsigned int)N))) && (L == K) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (((signed int)U) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)U))) || (A && B && C && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && B && C && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && B && (!C) && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && B && (!C) && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && (!B) && C && D && (!J) && (!I) && (!H) && G && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (M == P) && (L == K) && (P == O) && (T == S) && (!(((signed int)N) <= ((signed int)Q)))) || ((!A) && (!B) && C && D && (!J) && I && H && G && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)N)))) || ((!A) && (!B) && C && D && (!J) && I && H && G && F && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (!(((signed int)1) <= ((signed int)U)))) || ((!A) && (!B) && C && D && (!J) && I && H && G && F && E && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (!(((signed int)U) <= ((signed int)Q))) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)U))) || ((!A) && (!B) && C && D && (!J) && (!I) && (!H) && (!G) && F && E && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (M == (((unsigned int)1) + ((unsigned int)N))) && (L == K) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (((signed int)U) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)U))) || (A && B && C && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && B && C && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && B && (!C) && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && B && (!C) && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && B && (!C) && (!D) && (!J) && (!I) && (!H) && G && (!F) && E && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (!(((signed int)N) <= ((signed int)Q)))) || ((!A) && B && (!C) && (!D) && (!J) && I && (!H) && (!G) && (!F) && (!E) && (!Z) && (!A1) && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == S) && (P == O) && (((signed int)N) <= ((signed int)Q))) || ((!A) && (!B) && (!C) && (!D) && (!J) && I && (!H) && (!G) && (!F) && E && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == S) && (P == O) && (!(((signed int)T) <= ((signed int)Q)))) || ((!A) && (!B) && (!C) && (!D) && (!J) && I && H && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)T)))) || ((!A) && (!B) && (!C) && (!D) && (!J) && I && H && (!G) && F && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)N))) && (((signed int)1) <= ((signed int)T))) || ((!A) && (!B) && (!C) && (!D) && (!J) && I && H && (!G) && F && E && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (!(((signed int)N) <= ((signed int)Q))) && (((signed int)T) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T))) || ((!A) && (!B) && (!C) && (!D) && (!J) && I && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (S == (((unsigned int)1) + ((unsigned int)T))) && (R == Q) && (L == K) && (N == M) && (P == O) && (((signed int)N) <= ((signed int)Q)) && (((signed int)T) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T))) || (A && (!B) && C && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && (!B) && C && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && (!B) && (!C) && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || (A && (!B) && (!C) && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && (!B) && (!C) && D && (!J) && (!I) && (!H) && G && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (M == (((unsigned int)1) + ((unsigned int)N))) && (L == K) && (P == O) && (T == S) && (!(((signed int)T) <= ((signed int)Q)))) || ((!A) && (!B) && (!C) && D && (!J) && I && (!H) && (!G) && F && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)T)))) || ((!A) && (!B) && (!C) && D && (!J) && I && (!H) && G && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)1) <= ((signed int)N))) && (((signed int)1) <= ((signed int)T))) || ((!A) && (!B) && (!C) && D && (!J) && I && (!H) && G && (!F) && E && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (!(((signed int)N) <= ((signed int)Q))) && (((signed int)T) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T))) || ((!A) && (!B) && (!C) && D && (!J) && I && (!H) && G && F && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (((signed int)T) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T)) && (!(((signed int)1) <= ((signed int)U)))) || ((!A) && (!B) && (!C) && D && (!J) && I && (!H) && G && F && E && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S) && (((signed int)N) <= ((signed int)Q)) && (((signed int)T) <= ((signed int)Q)) && (!(((signed int)U) <= ((signed int)Q))) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T)) && (((signed int)1) <= ((signed int)U))) || ((!A) && (!B) && (!C) && D && (!J) && I && (!H) && (!G) && (!F) && E && (!Z) && A1 && (X == W) && (V == U) && (S == (((unsigned int)1) + ((unsigned int)T))) && (R == Q) && (L == K) && (N == M) && (P == O) && (((signed int)N) <= ((signed int)Q)) && (((signed int)T) <= ((signed int)Q)) && (((signed int)U) <= ((signed int)Q)) && (((signed int)1) <= ((signed int)N)) && (((signed int)1) <= ((signed int)T)) && (((signed int)1) <= ((signed int)U))) || ((!A) && B && C && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && B && C && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && B && (!C) && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && B && (!C) && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && (!B) && C && D && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && (!B) && C && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && (!Z) && A1 && (X == W) && (V == U) && (R == Q) && (L == K) && (N == M) && (P == O) && (T == S)) || ((!A) && (!B) && (!C) && (!D) && J && (!I) && (!H) && (!G) && (!F) && (!E) && Z && (!A1))))) {
    state_0 = E;
    state_1 = F;
    state_2 = G;
    state_3 = H;
    state_4 = I;
    state_5 = J;
    state_6 = M;
    state_7 = K;
    state_8 = O;
    state_9 = S;
    state_10 = X;
    state_11 = V;
    state_12 = R;
    state = 1;
  } else {
    abort();
  }
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
void rule_2() {
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
  if (((state && state_0 == D && state_1 == C && state_2 == B && state_3 == A && state_4 == M && state_5 == L && state_6 == F && state_7 == E && state_8 == G && state_9 == I && state_10 == K && state_11 == J && state_12 == H) && ((!B) && (!C) && (!D) && (!M) && (L == 1) && (!A)))) {
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
      default: abort(); break;
    }
  }
}
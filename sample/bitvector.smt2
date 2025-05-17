(set-logic HORN)


(declare-fun |state| ( Bool Bool Bool Bool Bool Bool (_ BitVec 32) (_ BitVec 32) (_ BitVec 32) (_ BitVec 32) (_ BitVec 32) (_ BitVec 32) (_ BitVec 32) ) Bool)

(assert
  (forall ( (A Bool) (B Bool) (C Bool) (D Bool) (E (_ BitVec 32)) (F (_ BitVec 32)) (G (_ BitVec 32)) (H (_ BitVec 32)) (I (_ BitVec 32)) (J (_ BitVec 32)) (K (_ BitVec 32)) (L Bool) (M Bool) )
    (=>
      (and
        (and (not B) (not C) (not D) (not M) (not L) (not A))
      )
      (state D C B A M L F E G I K J H)
    )
  )
)
(assert
  (forall ( (A Bool) (B Bool) (C Bool) (D Bool) (E Bool) (F Bool) (G Bool) (H Bool) (I Bool) (J Bool) (K (_ BitVec 32)) (L (_ BitVec 32)) (M (_ BitVec 32)) (N (_ BitVec 32)) (O (_ BitVec 32)) (P (_ BitVec 32)) (Q (_ BitVec 32)) (R (_ BitVec 32)) (S (_ BitVec 32)) (T (_ BitVec 32)) (U (_ BitVec 32)) (V (_ BitVec 32)) (W (_ BitVec 32)) (X (_ BitVec 32)) (Y (_ BitVec 32)) (Z Bool) (A1 Bool) )
    (=>
      (and
        (state D C B A A1 Z N L P T W U Q)
        (or (and (not A)
         (not B)
         (not C)
         (not D)
         (not J)
         (not I)
         (not H)
         (not G)
         (not F)
         E
         (not Z)
         (not A1)
         (= X #x00000000)
         (= R Y)
         (= R V)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         (not I)
         (not H)
         (not G)
         F
         E
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= O (bvadd #x00000001 U))
         (= M O)
         (= L K)
         (= T S)
         (not (= W #x00000000))
         (not (bvsle Q U))
         (bvsle #x00000001 U))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         (not I)
         (not H)
         G
         (not F)
         E
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= O (bvadd #x00000001 U))
         (= L K)
         (= N M)
         (= T S)
         (= W #x00000000)
         (not (bvsle Q U))
         (bvsle #x00000001 U))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         (not I)
         (not H)
         G
         F
         E
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= O (bvadd #x00000001 U))
         (= L K)
         (= N M)
         (= T S)
         (bvsle Q U)
         (bvsle #x00000001 U))
    (and (not A)
         B
         C
         D
         (not J)
         (not I)
         H
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (not (bvsle #x00000001 U)))
    (and (not A)
         B
         C
         D
         (not J)
         (not I)
         H
         (not G)
         (not F)
         E
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (not (bvsle U Q))
         (bvsle #x00000001 U))
    (and (not A)
         B
         C
         D
         (not J)
         (not I)
         (not H)
         (not G)
         (not F)
         E
         (not Z)
         (not A1)
         (= X W)
         (= V (bvadd #xffffffff U))
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle U Q)
         (bvsle #x00000001 U))
    (and A
         (not B)
         C
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         (not B)
         C
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         (not B)
         (not C)
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         (not B)
         (not C)
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         B
         (not C)
         D
         (not J)
         (not I)
         (not H)
         G
         F
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= M P)
         (= L K)
         (= P O)
         (= T S))
    (and (not A)
         B
         C
         (not D)
         (not J)
         (not I)
         (not H)
         G
         F
         E
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (not (bvsle N Q)))
    (and (not A)
         B
         C
         (not D)
         (not J)
         (not I)
         H
         G
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle N Q)
         (not (bvsle #x00000001 N)))
    (and (not A)
         B
         C
         (not D)
         (not J)
         (not I)
         H
         G
         F
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle N Q)
         (bvsle #x00000001 N)
         (not (bvsle #x00000001 U)))
    (and (not A)
         B
         C
         (not D)
         (not J)
         (not I)
         H
         G
         F
         E
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle N Q)
         (not (bvsle U Q))
         (bvsle #x00000001 N)
         (bvsle #x00000001 U))
    (and (not A)
         B
         C
         (not D)
         (not J)
         (not I)
         (not H)
         G
         F
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= M (bvadd #x00000001 N))
         (= L K)
         (= P O)
         (= T S)
         (bvsle N Q)
         (bvsle U Q)
         (bvsle #x00000001 N)
         (bvsle #x00000001 U))
    (and A
         B
         C
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         B
         C
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         B
         (not C)
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         B
         (not C)
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         (not B)
         C
         D
         (not J)
         (not I)
         (not H)
         G
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= M P)
         (= L K)
         (= P O)
         (= T S)
         (not (bvsle N Q)))
    (and (not A)
         (not B)
         C
         D
         (not J)
         I
         H
         G
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle N Q)
         (not (bvsle #x00000001 N)))
    (and (not A)
         (not B)
         C
         D
         (not J)
         I
         H
         G
         F
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle N Q)
         (bvsle #x00000001 N)
         (not (bvsle #x00000001 U)))
    (and (not A)
         (not B)
         C
         D
         (not J)
         I
         H
         G
         F
         E
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle N Q)
         (not (bvsle U Q))
         (bvsle #x00000001 N)
         (bvsle #x00000001 U))
    (and (not A)
         (not B)
         C
         D
         (not J)
         (not I)
         (not H)
         (not G)
         F
         E
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= M (bvadd #x00000001 N))
         (= L K)
         (= P O)
         (= T S)
         (bvsle N Q)
         (bvsle U Q)
         (bvsle #x00000001 N)
         (bvsle #x00000001 U))
    (and A
         B
         C
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         B
         C
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         B
         (not C)
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         B
         (not C)
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         B
         (not C)
         (not D)
         (not J)
         (not I)
         (not H)
         G
         (not F)
         E
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (not (bvsle N Q)))
    (and (not A)
         B
         (not C)
         (not D)
         (not J)
         I
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         (not A1)
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P S)
         (= P O)
         (bvsle N Q))
    (and (not A)
         (not B)
         (not C)
         (not D)
         (not J)
         I
         (not H)
         (not G)
         (not F)
         E
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P S)
         (= P O)
         (not (bvsle T Q)))
    (and (not A)
         (not B)
         (not C)
         (not D)
         (not J)
         I
         H
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle T Q)
         (not (bvsle #x00000001 T)))
    (and (not A)
         (not B)
         (not C)
         (not D)
         (not J)
         I
         H
         (not G)
         F
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle T Q)
         (not (bvsle #x00000001 N))
         (bvsle #x00000001 T))
    (and (not A)
         (not B)
         (not C)
         (not D)
         (not J)
         I
         H
         (not G)
         F
         E
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (not (bvsle N Q))
         (bvsle T Q)
         (bvsle #x00000001 N)
         (bvsle #x00000001 T))
    (and (not A)
         (not B)
         (not C)
         (not D)
         (not J)
         I
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= S (bvadd #x00000001 T))
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (bvsle N Q)
         (bvsle T Q)
         (bvsle #x00000001 N)
         (bvsle #x00000001 T))
    (and A
         (not B)
         C
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         (not B)
         C
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         (not B)
         (not C)
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and A
         (not B)
         (not C)
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         (not I)
         (not H)
         G
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= M (bvadd #x00000001 N))
         (= L K)
         (= P O)
         (= T S)
         (not (bvsle T Q)))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         I
         (not H)
         (not G)
         F
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle T Q)
         (not (bvsle #x00000001 T)))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         I
         (not H)
         G
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle T Q)
         (not (bvsle #x00000001 N))
         (bvsle #x00000001 T))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         I
         (not H)
         G
         (not F)
         E
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (not (bvsle N Q))
         (bvsle T Q)
         (bvsle #x00000001 N)
         (bvsle #x00000001 T))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         I
         (not H)
         G
         F
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle N Q)
         (bvsle T Q)
         (bvsle #x00000001 N)
         (bvsle #x00000001 T)
         (not (bvsle #x00000001 U)))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         I
         (not H)
         G
         F
         E
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S)
         (bvsle N Q)
         (bvsle T Q)
         (not (bvsle U Q))
         (bvsle #x00000001 N)
         (bvsle #x00000001 T)
         (bvsle #x00000001 U))
    (and (not A)
         (not B)
         (not C)
         D
         (not J)
         I
         (not H)
         (not G)
         (not F)
         E
         (not Z)
         A1
         (= X W)
         (= V U)
         (= S (bvadd #x00000001 T))
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (bvsle N Q)
         (bvsle T Q)
         (bvsle U Q)
         (bvsle #x00000001 N)
         (bvsle #x00000001 T)
         (bvsle #x00000001 U))
    (and (not A)
         B
         C
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         B
         C
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         B
         (not C)
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         B
         (not C)
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         (not B)
         C
         D
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         (not B)
         C
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         (not Z)
         A1
         (= X W)
         (= V U)
         (= R Q)
         (= L K)
         (= N M)
         (= P O)
         (= T S))
    (and (not A)
         (not B)
         (not C)
         (not D)
         J
         (not I)
         (not H)
         (not G)
         (not F)
         (not E)
         Z
         (not A1)))
      )
      (state E F G H I J M K O S X V R)
    )
  )
)
(assert
  (forall ( (A Bool) (B Bool) (C Bool) (D Bool) (E (_ BitVec 32)) (F (_ BitVec 32)) (G (_ BitVec 32)) (H (_ BitVec 32)) (I (_ BitVec 32)) (J (_ BitVec 32)) (K (_ BitVec 32)) (L Bool) (M Bool) )
    (=>
      (and
        (state D C B A M L F E G I K J H)
        (and (not B) (not C) (not D) (not M) (= L true) (not A))
      )
      false
    )
  )
)

(check-sat)
(exit)
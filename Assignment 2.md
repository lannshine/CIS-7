Part 1

p -> q <=> q' -> p'
p' v q <=> q' -> p'
p' v q <=> (q')' v p'    implication
p' v q <=> q v p'        double negation
p' v q <=> p' v q        commutative
Therefore p -> q and q' -> p' are logically equivalent.

(p -> r) ^ (q -> r)              <=> (p v q) -> r
(p' v r) ^ (q' v r)              <=> (p v q)' v r     implication
((p' v r) ^ q') v ((p' v r) ^ r) <=> (p' ^ q') v r    distributive & DM
((p' ^ q') v (r ^ q')) v  r      <=> (p' ^ q') v r     distributive & absorption
(p' ^ q') v ((r ^ q') v  r)      <=> (p' ^ q') v r     associative
(p' ^ q') v r                    <=> (p' ^ q') v r     absorption
Therefore (p->r) ^ (q->r) and (p v q) -> r are logically equivalent.

Interpret (Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))
x is a fruit; A(x) => x is an apple; B(x) => x is an orange
(Ǝx)A(x) => there is a fruit that is an apple;
(Ǝx)B(x) => there is a fruit that is an orange;
(Ǝx)A(x) ^ (Ǝx)B(x) => some fruits are apples and some fruits are oranges;
(Ǝx)(A(x) ^ B(x)) => there is a fruit that is both an orange and an apple;
therefore not valid

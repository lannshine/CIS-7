Part 1:
```
Let S = it is sunny, C = camping is fun, H = the homework is
done, and M = mathematics is easy.
```
- [ ] Translate into English: (M → H)∧(S →C)

Answer: If mathematics homework is done, then camping is fun if it is sunny.
- [ ] Translate into Propositional Logic: “Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”

Answer: (S ^ H) -> (M v C)
 
Part 2:
- [ ] Use a truth table to determine whether this is a tautology, contradiction, or neither:  (¬B → ¬A) → ((¬B → A) → B)

Answer:

| A | B | B' |  A' | (B' -> A') | (B' -> A) | ((B' -> A) -> B) | (B' -> A') -> ((B' -> A) -> B)
|---|---|----|-----|------------|-----------|------------------|-------------------------------
| T | T | F  |  F  |     T      |     F     |         F        |               F               
| T | F | T  |  F  |     F      |     T     |         F        |               T               
| F | T | F  |  T  |     F      |     T     |         T        |               F               
| F | F | T  |  T  |     T      |     F     |         T        |               T               

Therefore neither tautology or contradiction
 
- [ ] Use a truth table to determine whether this is a tautology, contradiction, or neither:  ((A → B)∧(B → ¬A)) → A

Answer:

| A | B | A' | (A → B) | (B → A') | ((A → B)∧(B → A')) | ((A → B)∧(B → A')) → A
|---|---|----|---------|----------|--------------------|------------------------
| T | T | F  |    T    |    F     |         F          |            F           
| T | F | F  |    F    |    T     |         F          |            F           
| F | T | T  |    F    |    T     |         F          |            T           
| F | F | T  |    T    |    F     |         F          |            T           

Therefore neither tautology or contradiction

Part 3:
```
For each of the following pairs of propositions, show that the
two propositions are logically equivalent by finding a chain of equivalences from one
to the other. State which definition or law of logic justifies each equivalence in the
chain.
```
- [ ] (p ∧ q) → r , p → (q → r )

Answer:

| (p ∧ q) → r | p → (q → r ) | Definition or Law of Logic
--------------|--------------|---------------------------
| (p ^ q)' v r | p' v (q' v r ) | Implication x3 
| (p' v q') v r| p' v (q' v r ) | DeM 
| p' v (q' v r)| p' v (q' v r ) | Associative 

- [ ] (q ∨ r) → p, (q → p)∧(r → p)

Answer:

| (q ∨ r) → p | (q → p)∧(r → p) | Definition or Law of Logic
|-------------|-----------------|---------------------------
| (q v r)' v p | (q' v p) ^ (r' v p) | Implication x3 
| (q' ^ r') v p | (q' v p) ^ (r' v p) | DeM 
| p v (q' ^ r') | (q' v p) ^ (r' v p) | Commutative 
| (p v q') ^ (p v r') | (q' v p) ^ (r' v p) | Distributive 
| (q' v p) ^ (r' v p) | (q' v p) ^ (r' v p) | Commutative 

Part 4:
```
Let Loves(x,y) mean “x loves y,” Traveler(x) mean “x is a traveler,”
City(x) mean “x is a city,” Lives(x,y) mean “x lives in y.”
```
- [ ] Translate into English: ∃x∀y∀z(City(x) ∧ Traveler(y) ∧ Lives(z,x)) → (Loves(y,x) ∧ ¬Loves(z,x))

Answer: For every traveler and everyone who lives in the city, there is a city such that if the traveler lives in the city, then the traveler loves this city, and the people live there do not love the city.

- [ ] Translate into Predicate Logic: “No traveler loves the city they live in.”

Answer: ∀x(Traveler(x) ^ City(y) ^ Lives(x,y) -> Loves(x,y)'

Extra Credit:
```
Assuming: p → (q ∧ r ), s → r , r → p
Prove: s → q.
```
```
Assuming: ¬(r ∨ s), ¬p → s, p → q. 
Prove: q
```
```
HINT:
Modus Ponen: If x -> q, and x, then q
Modus Tollens: If x -> q, and ~q, then ~x
```

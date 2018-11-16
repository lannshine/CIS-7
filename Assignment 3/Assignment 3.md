Part 1: (5 points)
Let S = it is sunny, C = camping is fun, H = the homework is done, and M = mathematics is easy.
 Translate into English: (M → H)∧(S →C)
 A: If mathematics homework is done, then camping is fun if it is sunny.
 
 Translate into Propositional Logic: “Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
 A: (S ^ H) -> (M v C)
 
Part 2: (5 points)
 Use a truth table to determine whether this is a tautology, contradiction, or neither: (¬B → ¬A) → ((¬B → A) → B)
 A:
 A	B	  B'	A'	(B' -> A')	(B' -> A)	((B' -> A) -> B)	(B' -> A') -> ((B' -> A) -> B)
 T	T	  F	  F	      T	          F	            F	                       F
 T	F	  T	  F	      F	          T	            F	                       T
 F	T	  F	  T	      F	          T	            T	                       F
 F	F	  T	  T	      T	          F	            T	                       T
 Therefore neither
 
 Use a truth table to determine whether this is a tautology, contradiction, or neither: ((A → B)∧(B → ¬A)) → A
 A:
 A	B	  A'	(A → B)	  (B → A')  	((A → B)∧(B → A'))	((A → B)∧(B → A')) → A
 T	T	  F	     T	       F	              F	                      F
 T	F	  F	     F	       T	              F	                      F
 F	T	  T	     F	       T	              F	                      T
 F	F	  T	     T	       F	              F                      	T
Therefore neither

Part 3: (5 points)
For each of the following pairs of propositions, show that the
two propositions are logically equivalent by finding a chain of equivalences from one
to the other. State which definition or law of logic justifies each equivalence in the
chain.
 (p ∧ q) → r , p → (q → r )
 A:
 (p ^ q)' v r, p' v (q' v r )
 
 (q ∨ r ) → p, (q → p)∧(r → p)

Part 1:
```
Proove each of the following.  Indicate which proof method you are using and show your work.
```
- [ ]  Show that the square root of 2 is irrational.

Answer:

Assume sqrt(2) is rational, then it can be expressed as a rational fraction, b/a, where a and b are two relatively prime integers.

Therefore, sqrt(2) = b/a   =>   2 = b^2/a^2   =>   b^2 = 2a^2.

Since 2a^2 is even, b^2 is even, and since b^2 is even, b is even.

Let b=2c, then (2c)^2 = 2a^2   => 4c^2 = 2a^2   =>   2c^2 = a^2.

Since 2c^2 is even, a^2 is even, and since a^2 is even, a is even.

However, two even numbers cannot be relatively prime(sqrt(2) = b/a, a is even, b is even), therefore sqrt(2) cannot be expressed as a 
rational fraction.

Therefore, sqrt(2) is irrational. Mothod: contradiction.


- [ ]  If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares.

Answer: 

When n = 25,  n = 5^2,  n = 3^2 + 4^2

When n = 100, n = 10^2, n = 6^2 + 8^2

When n = 169, n = 13^2, n = 5^2 + 12^2

Method: exhaustive proof.


- [ ]  The sum of two odd integers is even.  Hint: By definition, even integers can be expressed as 2n, thus odd integers can be expressed as 2n + 1	

Answer: 
Let a and b be two odd integers, then a = 2n + 1, b = 2m + 1, where n and m are some integers.

a + b = 2n + 1 + 2m + 1

a + b = 2n + 2m + 2

a + b = 2(n + m + 1)

Let an integer c = n + m + 1, then

a + b = 2c. By definition, (a + b) is even.

Method: direct proof.

- [ ]  The sum of an even integer and its square is even

Answer: 
Let a be an even integer, where a = 2n and n is some integer, then

a + a^2

= a + a(a)

= a(1 + a)

= 2n(1 + 2n)

= 2(n + 2n^2). By definition, 2(n + 2n^2) is even.

Method: direct proof. 

- [ ]  If n squared is odd, then n is odd

Answer: 
If n is an even integer where n = 2m, then
n^2 = (2m)^2

=4m^2

=2(2m^2), so n^2 is even. Therefore if n^2 is not even, then n is not even, namely odd.
Method: contraposition.

Part 2:

- [ ] Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)

Answer: 
Assume 1 + 5 + 9 + ... + (4n-3) = n(2n-1) is true, then

1 + 5 + 9 + ... + (4n-3) + (4(n+1)-3)

= n(2n-1) + (4(n+1)-3

= 2n^2 - n + 4n + 4 - 3

= 2n^2 + 3n + 1   (1)

(n + 1)(2(n + 1)-1)

= (n + 1)(2n + 2 - 1)

= 2n^2 + 2n - n + 2n + 2 -1

= 2n^2 + 3n + 1   (2)

(1) = (2), therefore 1 + 5 + 9 + ... + (4n-3) = n(2n-1).


- [ ] Prove that for any positive integer number n, n^3 + 2n is divisible by 3

Answer: 
Assume that for any positive integer number n, n^3 + 2n is divisible by 3 is true.
Let n = 1, then n^3 + 2n = 1 + 2 = 3, divisible by 3.

(n + 1)^3 + 2(n + 1)

= (n^3 + 3n^2 + 3n + 1) + (2n + 2)

= (n^3 + 2n) + (3n^2 + 3n + 3)

= (n^3 + 2n) + 3(n^2 + n + 1)  => divisible by 3.



- [ ] Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers. 
Hint: 4^(3+1) = 4 * 4^3
Hint: If 9^n - 1 = 8m, then 9^n = 8m + 1   

Answer: 
Let n = 1, 9^n − 1 = 9 - 1 = 8, divisible by 8

Assume 9^n − 1 is divisible by 8 for all non-negative integers, then

9^(n+1) − 1

= 3^(2n+2) - 1

= 3^(2n) ⋅ 3^2 - 1

= 3^(2n) ⋅ 9 - 1

= 3^(2n) ⋅ (8+1) - 1

= 3^(2n) ⋅ (8) + 3^(2n)  - 1

= 3^(2n) ⋅ (8) + 9^n - 1, where [3^(2n) ⋅ 8] is divisible by 8 and 9^n - 1 is divisible by 8.

Therefore n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers.

# 1.2 Mathematical Preliminaries

First this section will merely be skimmed over in order to gain rough introduction
and not necessarily and understanding of the mathematical notations and concepts
used to explain the computation ideas in further sections of the book. What they
are used for and for what purposes.

These concepts and knowledge are used for describing algorithms, algorithm analysis.
College level algebra and elementary calculus is the minimum prerequisite knowledge
required for this section.

The book `Concrete Mathematics` can be used as a more throughout learning of the
concepts at hand.

## 1.2.1 Mathematical Induction

The basic concept of mathematical induction is that for proving a statement P(n)
for all values requires proving that a base case is true and perhaps several other
simple cases. Assuming that the P(n) is true prove that is P(n+1) is also true
since if P(n) is true then that implies that P(n+1) is true.

Using this as a base it is possible to prove the correctness of algorithm by checking
for certain conditions on the input, the output and the between all the different
that and algorithm takes to compute a value. All the intermediate steps are described
in grand set that describes an algorithm,

More than a guess a proof is a logical statement that stands on its own and can
denote correctness.

The book shows algorithm correctness proofs in order to show the thought process.
However, Donald Knuth seems to think that proofs are easy. I must try to implement
the algorithms in question whether it is in C or in MIX.

The Halting Problem is one of the great mathematical mysteries and cannot be solved
by the likes of me.

R. W Floyd states that operations in computer languages can be formulated as logical
rules that highlight assertions that can be proved. Whatever that means.

## 1.2.2 Numbers, Powers and Logarithms

This section simply goes over some properties and some sets of numbers.

Integers are the set of numbers ranging from negative infinity and positive infinity
and include zero. Positive numbers are counting numbers and negative numbers are
the positive numbers minus zero.

Rational numbers are those that can be described as ratio between an integer and
a whole number. This includes fractions and finite decimals.

Irrational Numbers cannot be described as fractions and are denoted as a decimal
with an endless stream of numbers with no pattern or repetition. This includes pi
and square root of two.

Real numbers include rational number and irrational numbers.

Complex numbers have a real part and an imaginary part and are denoted as the sum
of the two parts. Based on a multiplying *i* against a real value and *i*.

The book goes over intervals, open and closed. What exponents are, the definition
of exponents and some properties of them.

Logarithms are introduced and explain with some detail, they are presented as the
operation that undoes the exponent. Goes into some detail on how to manually
calculate the logarithm of a number with a base.

## 1.2.3 Sums and Products

Goes over the definition of a summation. It is the cumulative sum over a set of values
indexed by a variable. Indices are over a set of constraints or an inclusive range.

The summation of zero items is always zero. Nested summations can be thought of like
this line of code.

```c
int i;
int j;
int n = INT_VALUE; // example value
int m = INT_VALUE; // example value
int sum = 0;
for (i = 0; i < n; i++){
  for(j = 0; j < m; j++){
      sum += 1;
  }
}
```

It is very similar to this.

\\(
\sum_{i=0}^{n}{\sum_{j=0}^{m}1}
\\)

Like normal function it can be divergent if the limit goes to infinity if the indexing
value approaches infinity and convergent if the limit goes approaches some finite
value as the indexing value approaches infinity.

Sums have certain algebraic properties that can and have been proven.

Summations have the distributive property, meaning that the multiplication of two
summations is the same as a nested summation.

\\(
(\sum_{R(i)}{a_i})(\sum_{S(j)}{b_j}) = \sum_{R(i)}{\sum_{S(j)}{a_i b_j}}
\\)

The variable and the conditions for a summation can be changed with a change in variable
that is actually just a permutation. This is a way to restate the same summation
without changing the actual value of the summation. Each value of the indexing
variable is mapped to a different value.

Nested summation can easily have the order of the summation reversed and changed.
It will not change the value of the summation.

Manipulating the domain of a summation is tricky. It involves changing the conditions
of the variables and allows for the summation conditions to be expressed in different
ways.

We are shown examples on how to use and derive the given laws and properties of summations.
This allows insight into how somebody managed to both figure them out and prove that
summations have these given properties.
The book also gives examples of conditional statements where a certain variable can
have a value depending on the value of a different variable.

\\(
  \begin{array}{ c l }
    \frac{x^2 - x}{2} & \quad \textrm{if } x \geq 1 \\
    0                 & \quad \textrm{otherwise}
  \end{array}
\\)

I read a mind blowing example in which conditional statements can be used to completely
ignore certain indices for the value if be make the conditional value zero, like
in this scheme procedure.

```scheme
(if (even? i) num 0)
```

Also, summation of different variables is possible, it is the same as nested summation,
but I did not understand the given example. Maybe an alternative instruction is
necessary.

## 1.2.4 Integer Functions and Elementary Number Theory

What is this section about? It is about how different properties of numbers
can be used to final solutions to problems that no one asked for.

We define the floor and ceiling functions over real numbers. The floor is
defined as the largest integer less than or equal to n. The ceiling is the
smallest integer greater than or equal to n.

\\(
\lfloor n \rfloor \le \lceil n \rceil
\\)

The mod operator does integer division between x and y and gives the remainder.

\\(
x \pmod y = r
\\)

This result in the properties that if y is greater than zero, the mod is greater
than zero and the reverse is true.

Putting the two concepts together, equation gives the quotient of the integer
division of x and y.

\\(
\lfloor \frac{x}{y} \rfloor = q
\\)

Any real number can be defined as the sum of its floor and fractional part.

\\(
x = \lfloor x \rfloor + (x\mod 1)
\\)

Congruence is the property that two integers can have, it is said that two integers
are congruent if when integer divided by the same value we get the same remainder

\\(
x \equiv y \pmod 9
\\)

If we have two values *x* and *y*, then these two are relatively prime is they have
no common factor other than 1.

\\(
x \perp y \iff GCD(x,y) = 1
\\)

When a fraction is set to the lowest terms it means that the numerator and denominator
are both relatively prime.

These ideas lead to creation of Fermat's Little Theorem with states that if we have
a prime value *p* and integer *a*, then that means a to the p minus a is an integer
multiple of p

\\(
a^p \equiv a \pmod p
\\)

I will not bother with the proof, yet.

### 1.2.5 Permutations and Factorials

We define in this chapter what permutations are. Given a set of n distinct objects
permutations are the number of different ways to order the set of objects into
a k sized array or thing. In other words given a deck of cards the permutations
are the number of different ways to shuffle them..

We define factorial to be this value. It can be described as this, if we have the
first object, there are \\( n-1 \\) different objects to choose from. Pick the next
item there are now \\( n - 2 \\) different objects to choose from, this continues
until we reach a certain value.

\\(
p_nk = n * (n - 1) * (n - 2) ... (n - k + 1)
\\)

Here is the definition of the factorial.

\\(
p_nn = n! = n * (n - 1) * (n - 2) ... (1)
\\)

Given a set X containing the permutations of set A, if one were to add a new item
to set A, generating the permutations is as simple is going trought each subset
in set X and adding the new item on each possible location, creating a new permutation
each time.

Another definition of factorial.

\\(
n! = 1 * 2 * ... * n = \prod_{k=1}^n {k} = n * (n - 1)!
\\)

Factorial is defined recursively, as n time the factorial of the previous number.
Due to this, factorials grow very fast and is considered one of the worst time
complexities for an algorithm to have.

Due to definition of factorials, all factorials where n is greater than 2 contain
prime numbers in them and so the values of factorials cannot possibly be prime.

Connections with other facts can be used to generate a function that can approximate
the value of a factorial without the use of as many multiplications.

Here is Euler's solution.

\\(
n! = \lim_{m->\infty}\frac{m^n * m!}{\prod_{k=1}^{m}{n + k}}
\\)

Here is Stirling's Solution.

\\(
\ln{n!} = a_1 n + a_2 n (n - 1) + ... = \sum_{k \leq 0}{a_{k+1} \prod_{0 <= j <= k}{n-j}}
\\)

These two expression have been proven to define n factorial for all real values and
even complex values. Using this new definition.

\\(
n \not \exists , n! = \Gamma(n + 10) = n * \Gamma (n)
\\)

Where the gamma function is another ridiculous thing

\\(
\Gamma(x) = \frac{x!}{x} = \lim_{m->\infty}{\frac{m^x * m!}
                                                 {\prod_{k=o}^{m}{x+k}}}
\\)

This new expression defines factorial for real and complex numbers.

\\(
(-z)! \Gamma(z) = \frac{\pi}{\sin(\pi z)}
\\)

We are also introduced to Factorial power of which there are two kinds

Raising a value n to k falling down

\\(
x^{\emph{k}} = \prod_{j=0}^{k-1}(x-j)
\\)

Raising a value n to k rising up.

\\(
x^{\bar{k}} = \prod_{j=0}^{k-1}(x+j)
\\)

These two concepts are very much linked but I am at a point where I just don't care.

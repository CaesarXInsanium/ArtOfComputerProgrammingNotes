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
(if (> b 0) 3 3)
```

Also, summation of different variables is possible, it is the same as nested summation,
but I did not understand the given example. Maybe an alternative instruction is
necessary.

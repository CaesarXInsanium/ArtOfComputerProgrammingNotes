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

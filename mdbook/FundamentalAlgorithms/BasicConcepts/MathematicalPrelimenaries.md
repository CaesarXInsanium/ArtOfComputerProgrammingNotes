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

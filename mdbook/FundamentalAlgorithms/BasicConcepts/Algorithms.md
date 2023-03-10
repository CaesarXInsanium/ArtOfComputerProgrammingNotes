# 1.1 Algorithms

Algorithm:
  Is a generic set of steps to solve a defined category of problem. First began
  be used in order to refer to Euclid's steps to find the Greatest Common Divisor
  of two numbers

```scheme
(define (gcd m n)
  (let ((r (// m n)))
       (if (== r 0)
           n
           (gcd n r))))
```

Algorithms are defined by first stating the sort of problem that is to be solved.
Then input data is defined, what quantity and type. Next the steps involved in
are stated, with any conditionals and branches.

The first step to proving the correctness of an algorithm is to manually try a simple
test case, whether it is small bits of data or manually in pencil and paper.

An algorithm has certain properties

1. It must always terminate
2. Defined precisely for all forms of data that it inputs. Can be defined with
   programming language
3. An algorithm must have inputs
4. Produce output
5. Good Algorithms must be proven to yield the correct results, at least good enough

## Defining Computational Methods with Set Theory

The book goes on to give a definition of Algorithms using tools from set theory.
A computational method is a somewhat universe of sets and subsets that define an
algorithm. A quadruped with terms

$$
(Q, I, \Omega, f)
$$

*F* denotes the computational rule, the algorithm, set of steps in order to
compute \\( \Omega \\) which is the set of all possible outputs of *f*. I denote
all possible inputs to *f* and *Q* denotes all possible inner states of the function
given the input and the output, all the possible machine states required in
order to compute problem.

Set I is an ordered set where

$$
x_0 = x
$$

Here x is any number. All the other items in sequence are defined in terms of the
previous item until the output is reached.

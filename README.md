# Hypergeometric calculator

### Symbols
- N: Total population size
- S: Number of succeses in the population
- n: Number of draws(sample size)
- k: Number of successes you want in your sample
- $\binom{a}{b} $: the number of ways to choose b items from a set of a, without regard to order
- $P(X = k)$: the probability of k succeses

### Formula


$$
P(X = k) = \frac{\binom{S}{k} \, \binom{N - S}{n - k}}{\binom{N}{n}}
$$

### Usage

1. compile `g++ main.cpp`

2. run `./a.out`

3. First you will be asked to select if you are calculating probability for the flop, turn, or river. Enter 1 for flop, 2 for turn, 3 for river.
<br><br>You will then be asked for the number of hits in deck (S) and the number of draws (n). Input these values followed by a new line, and you will then be told the probability of success

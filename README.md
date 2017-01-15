# Linear Programming

This is a collection of examples which show examples for applications of Linear Programming ([Wikipedia](https://en.wikipedia.org/wiki/Linear_programming)).

I added a Dockerfile for testing this inside a docker container using lp_solve ([Website](http://lpsolve.sourceforge.net)). The examples are in LP file format.

## Example 1: FX Arbitrage

Due to price inefficiencies sometimes a risk free return can be achieved by exchanging an amount of money in currency X to currency Y [...] and then back to X such that the resulting amount of money is bigger than the initially invested amount.

Example: FX exchange rates

|     | EUR | USD | 100JPY | GBP  |
|---  |---  | --- | --- | ---  | 
| EUR | 1   | 1.08| 130 | 0.76 | 
| USD | 0.92|  1  | 1.19 | 0.69 |
| 100JPY | 0.76 |0.84 |  1 | 0.58 |
| GBP | 1.31 | 1.43 | 1.72 | 1 |

This is of course not very realistic (for example due to transaction costs), but it serves as a nice example for linear programming.

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

## Example 2: Knapsack problems
Another example which can be solved using linear programming are Knapsack related problems (although for the Knapsack problem usually dynamic programming is used and is more efficient).

Some companies grant you a specified amount of money in order to buy something to eat at the internal restaurant. For some companies there is usually a leftover after main lunch (for example 1.20 Euro) which you can use to buy snacks at the kiosk.  If you want to maximize the weight of snacks you get at the kiosk for your leftover money linear programming can help you as well (or you want to maximize the kalories, ...).

Example: Snack Optimization
| Name  | Weight (g) | Price | 
| --- | --- | --- |
| Twix | 58 | 0.70 |
| Kinder Country | 23 | 0.30 |
| Bounty | 57 | 0.70  |

(this would only get interesting if there is much more items to consider).

This problem can be adapted in various ways:
* optimize for maximal weight but allow only up to n times the same item (for n=1 this is the standard knapsack problem)
* optimize for not only not exceeding the residual money but also a specified number of kcal


## Running the examples

Build the Docker image and then run lp_solve inside the container, the example files are already inside the container:

    docker build . -t lp_solve
    docker run -t -i lp_solve
    lp_solve [fx_arbitrage.lp|max_weight.lp]

A similar docker image for lp_solve can be found in DockerHub: (https://hub.docker.com/r/jamesshapiro/lpsolve/).

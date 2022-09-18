# Collatz conjecture

The Collatz conjecture is applied to positive integer and speculated that it is always possible to get _back to 1_ if you follow these steps:

- If the number is even, divide it by two.
- If the number is odd, triple it and add one.

### Modular arithmetic notation:

$$
f(n) =
\begin{cases}
n/2       & \quad \text{if } n \equiv 0\\
3n+1  & \quad \text{if } n \equiv 1
\end{cases}
$$
  
This definition yields smaller values for the stopping time and total stopping time without changing the overall dynamics of the process.

## Usage

The program is called with the starting number and calculates how many steps are needed until 1

`$ collatz [number]`

## Example

```
$ collatz 8
8 ->
4 ->
2 ->
1
Total steps: 3
```

```
15 ->
46 ->
23 ->
70 ->
35 ->
106 ->
53 ->
160 ->
80 ->
40 ->
20 ->
10 ->
5 ->
16 ->
8 ->
4 ->
2 ->
1
Total steps: 17
```

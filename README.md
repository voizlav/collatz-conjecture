# Collatz conjecture

The Collatz conjecture is applied to positive integer and speculated that it is always possible to get _back to 1_ if you follow these steps:

- If the number is even, divide it by two.
- If the number is odd, triple it and add one.

### Modular arithmetic notation:

$$
f(n) =
\begin{cases}
n/2   & \quad \text{if } n \equiv 0 & \pmod{2}\\
(3n+1)/2  & \quad \text{if } n \equiv 1 & \pmod{2}
\end{cases}
$$
  
This definition yields smaller values for the stopping time and total stopping time without changing the overall dynamics of the process.

## Usage

The program is called with the starting number and calculates how many steps are needed until 1

`$ collatz [number]`

## Example

```
$ collatz 6
6 -> 3 -> 5 -> 8 -> 4 -> 2 -> 1
Total steps: 6
```

```
$ collatz 7
7 -> 11 -> 17 -> 26 -> 13 -> 20 -> 10 -> 5 -> 8 -> 4 -> 2 -> 1
Total steps: 11
```

```
$ collatz 8
8 -> 4 -> 2 -> 1
Total steps: 3
```
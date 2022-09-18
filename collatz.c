#include <stdio.h>
#include <stdlib.h>

int steps = 0;

int colattz(int n)
{
    if (n == 1)
    {
        printf("%i\n", n);
        printf("Total steps: %i\n", steps);
        return n;
    }
    else if (n % 2 == 0)
    {
        steps++;
        printf("%i -> ", n);
        return colattz(n / 2);
    } 
    else
    {
        steps++;
        printf("%i -> ", n);
        return colattz((3 * n + 1) / 2);
    }
}

int main(int argc, char *argv[])
{
    if (argv[1])
    {
        int input = atoi(argv[1]);
        colattz(input);
    }
    else
    {
        printf("Usage: colattz [integer]\n\n");
        return 1;
    }
    return 0;
}
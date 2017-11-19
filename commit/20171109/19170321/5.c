#include <stdio.h>
    int countWays(int n);
    int main()
    {
        int N;
        printf ("Input the number n:\n");
        scanf ("%d", &N);
        printf ("%d\n", countWays(N));
        return 0;
    }
    int countWays(int n)
    {
        if (n == 1)
            return 2;
        return 2*countWays(n - 1) + 2;
    }

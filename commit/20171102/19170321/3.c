#include <stdio.h>
    int is_pow2(int n);
    int main()
    {
        int n;
        scanf ("%d", &n);
        printf ("%d\n", is_pow2(n));
        return 0;
    }
    int is_pow2(int n)
    {
        int x;
        x = n & (n - 1);
    if (x == 0)
    return x;
    else
    return -1;
    }

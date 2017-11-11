#include <stdio.h>
int GCD_recursive(int m, int n);
int GCD_iterative(int m, int n);
int main()
{
    int m, n, M, N;
    scanf("%d%d", &m, &n);
    M = m, N = n;
    GCD_recursive(m, n);
    m = M, n = N;
    GCD_iterative(m, n);
    return 0;
}
int GCD_recursive(int m, int n)
{
    int a, c;
    a = m % n;
    if (a == 0)
    {
        c = n;
        printf("%d\n", c);
    }
    else
    {
    m = n, n = a;
    return GCD_recursive(m, n);
    }
}
int GCD_iterative(int m,int n)
{
    int b, i = 0, d;
    for (i = 0;b > 0; )
    {
    b = m % n;
        if (b != 0)
        {
            m = n;
            n = b;
        }
    }
    printf("%d\n", n);
    return n;
}

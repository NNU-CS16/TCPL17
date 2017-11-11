#include <stdio.h>
int GCD_recursive(int m, int n);
int LCM(int m, int n);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    LCM(m, n);
    return 0;
}
int GCD_recursive(int m, int n)
{
    int a, c;
    a = m % n;
    if (a == 0)
    {
        c = n;
        return c;
    }
    else
    {
        m = n;
        n = a;
    return GCD_recursive(m, n);
    }
}
int LCM(int m, int n)
{
    int i, e;
    i = GCD_recursive(m, n);
    e = (m * n) / i;
    printf("%d\n", e);
    return e;
}

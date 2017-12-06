#include <stdio.h>
int seek (int n)
{
    int i, p;
    for (i = 1; i <= n; i += 2)
        if (n % i == 0)
            p = i;
    return p;
}
int main ()
{
    int i, m;
    int n, sum = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
        sum += seek (i);
    printf ("%d\n", sum);
    return 0;
}


#include <stdio.h>
int F (int n, int k)
{
    if (n == k)
        return 1;
    if (k == 0)
        return 1;
    if (n == 2 && k == 1)
        return 2;
    else
        return F (n - 1, k - 1) + F (n - 1, k);
}
int main ()
{
    int n , k;
    scanf ("%d%d", &n, &k);
    printf ("%d\n", F (n, k));
    return 0;
}

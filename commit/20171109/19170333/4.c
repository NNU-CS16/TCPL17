#include <stdio.h>
int step (int n, int k)
{
    int i, sum = 0;
    if (n == 1 || n == 0)
        return 1;
    if (2 == n)
        return 2;
    if (n >= k)
    {    
        for (i = 1; i <= k; i++)
            sum += step (n - i, k);
    }
    return sum % 100007;
}
int main ()
{
    int n, k;
    scanf ("%d%d", &n, &k);
    printf ("%d\n", step (n, k));
    return 0;
}

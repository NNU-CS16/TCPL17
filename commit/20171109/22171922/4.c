#include <stdio.h>
int fib (int n, int k);
int main ()
{
    int n, k;
    scanf ("%d %d", &n, &k);
    printf ("%d\n", fib (n, k));
    return 0;
}
int fib (int n, int k)
{
    int i, num;
    num = 0;
    if (n == 0 || n == 1)
        return 1;
    if (n > 1)
        for (i = 1; i <= k; i++)
            num = fib (n - i, k) + num;
    return num % 100007;
}      

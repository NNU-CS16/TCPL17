#include <stdio.h>
int sum(int n);

int main ()
{
    int n , res;
    scanf ("%d" , &n);
    res = sum (n);
    printf ("%d\n" , res);
    return 0;
}

int sum (int n)
{
    int res = 0;
    (n > 0) && (res = sum(n - 1) + n);
    return res;
}

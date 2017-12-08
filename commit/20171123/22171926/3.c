#include <stdio.h>
static int m = 0;
int sum (int n)
{
   m += n;
   return (n-1) && sum (n-1);
}
int main ()
{
    int n;
    scanf ("%d", &n);
    sum (n);
    printf ("%d\n",m);
    return 0;
}


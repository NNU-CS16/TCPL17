#include <stdio.h>
#include <math.h>
void to_binary (unsigned long n, unsigned m)
{
    int r;
    r = n % m;
    if (n >= m)
        to_binary ( n / m, m );
    putchar ( '0' + r );
    return;
}
int main ()
{
    unsigned long A, B;
    unsigned D;
    scanf ("%ld%ld%d",&A, &B, &D);
    to_binary ( A+B, D);
    printf ("\n");
    return 0;
}

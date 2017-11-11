#include <stdio.h>
int fac_bit_count (int n);

int main()
{
    int n,a;
    scanf ("%d",&n);
    a = fac_bit_count (n);
    printf ("%d\n",&a);
    return 0;
}

fac_bit_count (int n)
{
    int i;
    unsigned long m = 1;
    for (i = 0 ; m != 0 ; i++)
      for (n = n ; n > 0 ; n--)
         m = m * n;
         m = m / 10;
    return i;
}

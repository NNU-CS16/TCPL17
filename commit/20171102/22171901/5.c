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

int fac_bit_count (int n)
{
    int i , tmp = n;
    while (n > 1)
    {
      n--;
      tmp = tmp*n;
    }
    for (i = 1; tmp > 10 ; i++)
      tmp / =10;
    return i;
}

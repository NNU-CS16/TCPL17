#include <stdio.h>

int fac_bit_count(int n)
{
   int m, a;
   int sum = 1;
   for (m = n; m != 1; m--)
        sum=m*sum;
   int i = 0;
   while (sum != 0)
   {
          sum = sum / 10;
          i++;
   }
   a = i;
   return a;
}

int main()
{
   int n;
   scanf("%d",&n);
   int a = fac_bit_count(n);
   printf("%d\n", a);
   return 0;
}


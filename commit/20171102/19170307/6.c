#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
   int m, i, k;
   m = sqrt (n);
   for (i = 2; i <= m; i++)
   {
        if (n % i == 0)
            break;
   }
   if (i < m)
       k = -1;
   else k = 0;
   return k;
}

int main()
{
   int k, n, num=0;
   for (n = 2; num < 1000; n++)
   {
        k = is_prime(n);
        if ( k == 0)
        {
            num++;
            if ( num >= 100 && num <= 1000)
                 printf("%d ", n);
        }
   }
   printf("\n");
   return 0;
}

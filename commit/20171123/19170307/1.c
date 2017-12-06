#include <stdio.h>
#include <math.h>
 
int domax(int a)
{
   int i, n;
   for (i = 1; i <= sqrt(a); i++)
   {
        if (a % i == 0)
        {   if ((a / i) % 2 != 0)
                 break;
        }
   }
   if (i <= sqrt(a))
       n = a / i;
   if (i > sqrt(a))
       n = 1;
   return n;
}
 
int main()
{
   int N, a, n;   scanf("%d", &N);
   int sum = 0;
   for (a = 1; a <= N; a++)
   {
        n = domax(a);
        sum = sum + n;
   }
   printf ("%d\n", sum);
   return 0;
}

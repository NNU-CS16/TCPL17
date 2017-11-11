#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(void)
{
   int i=2, t=0;

   while (t <= 1000)
   {
      if (is_prime(i) == 0)
      {
        t++;
        if (t >= 100)  printf("%d\n", i);
      }
      i++;
   }

   return 0;
}

int is_prime(int n)
{
   int i, flag = 0;

   for (i=2; i <= sqrt(n); i++)
     if (n % i == 0)
     {
       flag = 1;
       break;
     }
   if (flag == 1)  return -1;
    else return 0;
}

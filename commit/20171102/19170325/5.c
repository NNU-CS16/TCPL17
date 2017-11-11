#include <stdio.h>
#include <string.h>

int fac_bit_count(int n);

int main(void)
{
   int n;

   printf("please input n:\n");
   scanf("%d", &n);
   printf("%d\n", fac_bit_count(n));

   return 0;
}

int fac_bit_count(int n)
{
   int m = 1, count = 0;

   while(n != 0)
   {
     m = m * n;
     n = n - 1;
   }
   while (m != 0)
  {
     count++;
     m = m / 10;
  }
  return count;
}


#include <stdio.h>

int GCD_recursive(int m, int n);
int GCD_iterative(int m, int n);

int main(void)
{
  int m, n;

  printf("please input two number:\n");
  scanf("%d%d", &m, &n);
  printf("最大公约数:%d\n", GCD_recursive(m,n));
  printf("最大公约数:%d\n", GCD_iterative(m,n));

  return 0;
}

int GCD_recursive(int m, int n)
{
  int temp, i;

  if (m < n)
  {
     i = m;
     m = n;
     n = i;
  }
  while (m % n != 0)
  {
     temp = m % n;
     m = n;
     n = temp;
  }

  return n;
}

int GCD_iterative(int m, int n)
{
   int temp, i;

   if (m < n)
   {
     i = m;
     m = n;
     n = i;
   }
   if (m % n != 0)
   {
   temp = m % n;
   m = n;
   n = temp;
   GCD_iterative(m ,n);
   }
   else return n;
}

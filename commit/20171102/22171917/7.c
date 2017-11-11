#include <stdio.h>
int GCD_recursive(int m, int n);
int GCD_iterative(int m, int n);

int main()
{
   int m, n;
   scanf("%d%d", &m, &n);
   printf("%d\n",GCD_recursive(m,n));
   printf("%d\n",GCD_iterative(m,n));
   return 0;
}

int GCD_recursive(int m, int n)
{ 
   if (m % n>0)
   return GCD_recursive(n, m % n);
   else 
   return n;
}

int GCD_iterative(int m,int n)
{
  int z;
  while (z != 0)
  {
    z = m % n;
    m = n;
    n = z;
  }
    return m;
}


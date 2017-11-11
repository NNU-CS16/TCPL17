#include <stdio.h>

int GCD_iterative(int m,int n)
{
   int a, max, min;
   max = m > n ? m : n;
   min = m < n ? m : n;
   while (min != 0)
   {
          a = min;
          min = max % min;
          max = a;
}
   return a;
}
int GCD_recursive(int m,int n)
{
   int q, k;
   q = m > n ? m : n;
   k = m < n ? m : n;
   if (q % k == 0)
       return k;
   else GCD_recursive(k,q%k);
}

int main()
{
   int m, n;
   scanf("%d %d",&m,&n);
   int a = GCD_iterative(m,n);
   printf("%d\n", a);
   int k = GCD_recursive(m,n);
   printf("%d\n", k);
   return 0;
}

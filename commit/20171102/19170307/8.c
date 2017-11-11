#include <stdio.h>

int LCM(int m,int n)
{
   int k, a, max, min;
   max = m > n ? m : n;
   min = m < n ? m : n;
   while (min != 0)
   {
          a = min;
          min = max % min;
          max = a;
   }
   k = (m * n) / a;
   return k;
}
int main()
{
   int m, n;
   scanf("%d %d",&m,&n);
   int k = LCM(m,n);
   printf("%d\n", k);
   return 0;
}

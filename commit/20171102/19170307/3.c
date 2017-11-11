#include <stdio.h>

int is_pow2(int n)
{
   int m, flag;
   while (n != 1)
   {
          m=n%2;
          if (m != 0) break;
          if (m == 0) n = n / 2;
   }
   if (m == 0) flag = 0;
   if (m != 0) flag = -1;
   return flag;
}

int main()
{
   int n;
   scanf("%d",&n);
   int flag = is_pow2(n);
   printf("%d\n", flag);
   return 0;
}


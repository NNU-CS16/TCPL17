#include <stdio.h>

int main()
{
   int a, b, D, n, str[100];
   scanf("%d %d %d",&a,&b,&D);
   long long c = (long long)a + (long long)b;
   int i = 0;
   while (c != 0)
   {
          str[i] = c % D;
          c = c / D;
          i++;
   }
   i = i - 1;
   while (i >= 0)
   {
          printf("%d", str[i]);
          i--;
   }
   printf("\n");
   return 0;
}


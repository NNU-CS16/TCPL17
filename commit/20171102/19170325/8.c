#include <stdio.h>

int LCM(int m, int n);

int main(void)
{
   int m, n;

   printf("please input two number:\n");
   scanf("%d%d", &m, &n);
   printf("最小公倍数:%d\n", LCM(m, n));

   return 0;
}

int LCM(int m, int n)
{
   int temp, a, b;

   a = m;
   b = n;
   while (m % n != 0)
   {
     temp = m % n;
     m = n;
     n = temp;
   }

   return a * b / n;
}

#include <stdio.h>

int Fn(int n);

int main(void)
{
   int n;

   printf("please input N;\n");
   scanf("%d", &n);
   printf("%d\n", Fn(n) % 100007);

   return 0;
}

int Fn(int n)
{
   if (n == 1)
      return 1;
   if (n == 2)
      return 2;
   if (n > 2)
      return Fn(n - 1) + Fn (n - 2);
}

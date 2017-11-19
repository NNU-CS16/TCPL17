#include <stdio.h>

int Feibo(int n);

int main(void)
{
   int n;

   printf("Please input n:\n");
   scanf("%d", &n);
   printf("%d\n", Feibo(n));

   return 0;
}

int Feibo(int n)
{
  if (n == 1 || n == 2)
     return 0;
  else
     return Feibo(n - 1) + Feibo(n - 2);
}

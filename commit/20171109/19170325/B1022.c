#include <stdio.h>

void hanshu(int n, int d);

int main(void)
{
  int a, b, d, n;

  printf("Please input A, B, D :\n");
  scanf("%d%d%d", &a, &b, &d);
  n = a + b;
  hanshu(n, d);
  printf("\n");

  return 0;
}

void hanshu(int n, int d)
{
   if (n / d != 0)
   {
      hanshu(n / d, d);
      printf("%d", n % d);
   }
   else if (n % d != 0)
     printf("%d", n % d);
}

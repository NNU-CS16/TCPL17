#include <stdio.h>

int BinomialCofficient(int n, int k);

int main(void)
{
   int n, k;

   printf("Please input n and k :\n");
   scanf("%d%d", &n, &k);
   printf("%d\n", BinomialCofficient(n, k));

   return 0;
}

int BinomialCofficient(int n, int k)
{
   if (n == k ||k == 0)
      return 1;
   else
      return BinomialCofficient(n - 1, k - 1) + BinomialCofficient(n - 1, k);
}

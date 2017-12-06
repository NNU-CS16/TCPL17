#include <stdio.h>

int jiyueshu(int n);

int main(void)
{
   int n, sum = 0;

   printf("Please input N :\n");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++)
      sum = sum + jiyueshu(i);
   printf("%d\n", sum);

   return 0;
}

int jiyueshu(int n)
{
    int i, temp;

    for (i = 1; i <= n; i = i + 2)
       if (n % i == 0)
         temp = i;

    return temp;
}

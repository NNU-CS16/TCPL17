#include <stdio.h>

int Han(int n);

int main(void)
{
   int n;

   printf("Please input n :\n");
   scanf("%d", &n);
   printf("%d\n", Han(n));

   return 0;
}

int Han(int n)
{
    if(n == 1)
       return 2;
    else
       return 2 * Han(n - 1) + 2;
}

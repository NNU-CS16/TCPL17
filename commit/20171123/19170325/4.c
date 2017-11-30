#include <stdio.h>

int add(int n1, int n2);

int main(void)
{
   int n1, n2;

   printf("Please input n1, n2 :\n");
   scanf("%d%d", &n1, &n2);
   printf("%d\n", add(n1, n2));

   return 0;
}

int add(int n1, int n2)
{
    int sum, carry;

    do{
         sum = n1 ^ n2;
         carry = (n1 & n2) << 1;
         n1 = sum;
         n2 = carry;
      } while (n2 != 0);

    return sum;
}

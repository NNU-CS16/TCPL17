#include <stdio.h>

int is_int_pal(int n);

int main(void)
{
  int n;

  printf("please input a number:\n");
  scanf("%d", &n);
  printf("%d\n", is_int_pal(n));

  return 0;
}

int is_int_pal(int n)
{
   int temp, a = 0;

   temp = n;
   while (n)
   {
     a = a * 10 + n % 10;
     n=n / 10;
   }
   if (a == temp)  return 0;
    else return -1;
}

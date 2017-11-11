#include <stdio.h>
#include <math.h>
int is_pow2(int n);

int main(void)
{
   int n;
   printf("please input n:\n");
   scanf("%d", &n);
   printf("%d\n", is_pow2(n));

   return 0;
}

int is_pow2(int n)
{
  int i, flag=0;
  for (i=0; i<=16; i++)
    if (n == pow(2, i))
      {
        flag=1;
        return 0;
        break;
      }
  if (flag == 0)  return -1;
}

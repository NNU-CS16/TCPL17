#include <stdio.h>
int is_pow2(int n)
{
     if (n & 1==1||n <= 0)
       return -1;
     else
      {
         while (n>1)
           {
              if (1 & n == 1)
              return -1;
              else n = n << 1;
           }
      }
      return 0;
}
 
int main ()
{
         int n;
         scanf("%d", &n);
         printf("%d\n", is_pow2(n));
         return 0;
}

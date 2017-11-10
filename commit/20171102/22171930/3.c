#include <stdio.h>
int is_pow2(int n);

int main()
{
   int n,a;
   scanf("%d", &n);
   a=is_pow2(n);
   printf("%d\n", a);
   return 0;
}
 int is_pow2(int n)
 {
   if((n>0) && ((n&(n-1)) == 0))
   return 0;  
   else
   return -1;
   }

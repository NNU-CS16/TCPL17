#include <stdio.h>
int is_int_pal(int n);

int main()
{
   int n;
   scanf("%d", &n);
   printf("%d\n", is_int_pal(n));
   return 0;
}

int is_int_pal(int n)
{
   int z = 0,x;
   x = n;
   while (x)
   z = z*10+x%10,x/=10;
   if (z == n)
     return 0;
   else 
     return -1;
}

 

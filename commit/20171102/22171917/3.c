#include<stdio.h>
int is_pow2(int n);

int main()
{
   int n;
   scanf("%d",&n);
   printf("%d\n",is_pow2(n));
   return 0;
}
 
int is_pow2(int n)
{
  int z=2;
  while (z < n) z<<=1;
  if (z==n)
   return 0;
  else
   return -1;
}

   

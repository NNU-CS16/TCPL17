#include <stdio.h>
int is_pow2(int n);
int main ()
{ 
    int n;
    scanf("%d",&n);
    printf("%d\n",is_pow2(n));
  return 0; 
}
int is_pow2(int n)
{
   int i=2;
   while(i<n) i<<=1;
   if(i==n)
   return 0;
   else
   return -1;
}
   


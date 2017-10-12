#include<stdio.h>
unsigned rightrot(unsigned int x,int n)
{
   while(n>0)
{
   if((x&1)==1)
   x=(x>>1)|~(~0>>1);
   else
   x=(x>>1);
   n--;
}
   return x;
}
   int main()
{
   unsigned int x=100;
   int n=3;
   unsigned int r;
   r=rightrot(x,n);
   printf("%d\n",r);
   return 0;
} 

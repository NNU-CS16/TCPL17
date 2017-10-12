#include<stdio.h>
   unsigned invert(unsigned x,int p,int n)
{
   return (x&~(~(~0<<n)<<(p-n+1)))&(x&~(~(~0<<n)<<(p-n+1)));
}
   int main()
{
   unsigned int x=75;
   int p=3;
   int n=3;
   int r;
   r=invert(x,p,n);
   printf("%d\n",r);
   return 0;
}

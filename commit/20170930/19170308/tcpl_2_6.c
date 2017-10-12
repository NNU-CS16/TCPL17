#include<stdio.h>

   unsigned setbits(unsigned x,int p,int n,unsigned y,unsigned r,unsigned s)
{   
   r=x&~((~(~0<<n))<<(p-n+1)),s=(~(~0<<n)&y)<<(p-n+1);
   return r|s;
}




   int main()
{
   unsigned int x=75;
   unsigned int y=35;
   int p=6;
   int n=3;
   unsigned r=x&~((~(~0<<n))<<(p-n+1));
   unsigned s=(~(~0<<n)&y)<<(p-n+1);
   int t;
   t = setbits(x,p,n,y,r,s);
   printf("%d\n",t);

   return 0;

} 

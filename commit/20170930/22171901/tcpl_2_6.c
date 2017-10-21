#include<stdio.h>
unsigned  setbits( unsigned x,int p,int n,unsigned y)
{
   return x &~(~(~0 << n) << (p+1-n));
         (y &  ~(~0 << n))<< (p+1-n);
}


int main()
{
   unsigned x,y;
   int p,n;
   printf("input the value of x,p,n,y",x,p,n,y);
   scanf ("%d%d%d%d",&x,&p,&n,&y);
   int A;
   A=setbits(x,p,n,y);
   printf ("%d\n",A);
   return 0;
}

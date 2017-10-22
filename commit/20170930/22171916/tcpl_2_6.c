#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
return x & ~(~(~0 << n)<<(p+1-n))|(y& ~(~0<<n))<<(p+1-n);

}
int main()
{
unsigned x=67,y=13;
int p=6,n=3,t;
t=setbits(x,p,n,y);
printf("%d\n",t);
return 0;

}

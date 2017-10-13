#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
return x & ~(~(~0 << n)<<(p+1-n))|(y& ~(~0<<n))<<(p+1-n);
}
int main()
{
unsigned x=1,y=2;
int p=3,n=4,m;
m=setbits(x,p,n,y);
printf("%d\n",m);
return 0;
}

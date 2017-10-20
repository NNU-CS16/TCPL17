#include<stdio.h>
unsigned invert(unsigned x,int p,int n)
{
return x ^ (~(~0<<n) << (p-n+1));
}
int main()
{
unsigned x=66;
int p=3,n=4;
printf("%u\n",invert(x,p,n));
return 0;
}

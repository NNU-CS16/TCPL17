#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{


    return x & ~(~(~0<<n)<<(p-n+1))|(y & ~(~0<<n))<<(p-n+1);
}
int main()
{
unsigned int x=66;
unsigned int y=26;
int p=5;
int n=4;
int s;
s=setbits(x,p,n,y);
printf("%d",s);
return 0;
}     

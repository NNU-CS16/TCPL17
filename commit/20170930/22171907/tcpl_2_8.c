#include<stdio.h>
unsigned rightrot(unsigned int x,int n)
{
unsigned int b;unsigned int c;
b=x<<(16-n);
c=x>>n;
c=c|b;
return c;
}
int main()
{
unsigned int x;int n;
printf("x=");
scantf("%d",&x);
printf("n=");
scanf("%d",&n);
printf("%d\n",rightrot(x,n));
return 0;
}

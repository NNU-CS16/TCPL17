#include<stdio.h>

unsigned int invert(unsigned int x,int p,int n)
{
  return x^(~(~0<<n)<<(p-n+1));
}

int main()
{
unsigned int x;int p;int n;
printf("x=");
scanf("%d",&x);
printf("p=");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
printf("%d\n",invert(x,p,n));
}

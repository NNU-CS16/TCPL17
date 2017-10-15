#include<stdio.h>
unsigned invert(unsigned x,int p,int n)
{
return x ^ (~(~0<<n) << (p-n));
}
int main()
{
unsigned x;
int p,n;
printf("x is");
scanf("%i",&x);
printf("p is");
scanf("%d",&p);
printf("n is");
scanf("%d",&n);
int A;
A=invert(x,n,p);
printf("%d\n",A);
return 0;
}



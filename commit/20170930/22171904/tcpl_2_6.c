#include<stdio.h>
unsigned setbits (unsigned x,int p,int n ,unsigned y)
{
return x & ~(~(~0<<n)<<(p+1-n))|(y&~(~0<<n))<<(p+1-n);
}
int main()
{
unsigned int x;unsigned int y;int p;int n;

printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);
printf("p=");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
printf("%d",setbits(x,y,p,n));
return 0;
}

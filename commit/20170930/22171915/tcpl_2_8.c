#include<stdio.h>
unsigned righrot(unsigned x,int n)
{
return (x& (~0<<n)^x)<<(sizeof(int)*8-n)|(x>>n);
}
int main()
{
unsigned int x,y;int n;
printf("x=");
scanf("%d",&x);
printf("n=");
scanf("%d",&n);
y=righrot(x,n);
printf("%u\n",y);
return 0;
}

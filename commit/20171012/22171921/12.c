#include<stdio.h>
int gcd(int i,int j)
{
int t;
do
{
t=i%j;
i=j;
j=t;
}
while(t);
return i;
}
int main(void)
{
int a,b;
scanf("%d/%d",&a,&b);
printf("%d/%d\n",a/gcd(a,b),b/gcd(a,b));
return 0;
}

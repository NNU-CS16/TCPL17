#include<stdio.h>
int main()
{
int n=10;
int i,j;
int sum=0;
int product;
for(i=1;i<=n;++i)
{
for(j=1,product=1;j<=i;++j)
{
product*=j;
}
sum+=product;
}
printf("sum=%d\n",sum);
return 0;
}



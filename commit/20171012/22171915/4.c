#include<stdio.h>
int main()
{
int i,a=1,sum;
for(i=1;i<=10;i++)
{
a=a*i;
sum=sum+a;
}
printf("sum=%d\n",sum);
return 0;
}

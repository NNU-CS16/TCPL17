#include<stdio.h>
int main()
{
int a,sum=0;
for(a=2;a<=100;a++)
{
if (a%2==0)
{
sum=sum+a;
}
}
printf("sum=%d\n",sum);
return 0;
}


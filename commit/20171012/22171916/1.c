#include<stdio.h>
int main()
{
 int sum,n;
sum=0, n=2;
while(n<=100)
{
sum=sum+n;
n=n+2;
}
printf("sum=%d\n",sum);
return 0;
}

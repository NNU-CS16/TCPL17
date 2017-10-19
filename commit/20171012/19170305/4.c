#include<stdio.h>
int main()
{
int sum,n,c;
sum=0;
c=1;
n=1;
do
{
c=c*n;
sum=sum+c;
n++;
}while(n<=10);
printf("sum=%d\n",sum);
return 0;
}

#include<stdio.h>
int main()
{
int sum,a,b,c,d;
sum=0,a=1,b=2,c=3,d=0;
while(c<=100)
{
d=a*b*c;
sum=d+sum;
a=a+1;
b=a+1;
c=b+1;
}
printf("sum=%d\n",sum);
return 0;
}

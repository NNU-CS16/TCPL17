#include<stdio.h>
int main()
{
int sum=0,a=1,b;
for(b=1;b<=10;b++)
{
a=a*b;

sum+=a;
}
printf("sum=%d\n",sum);
return 0;
 
}

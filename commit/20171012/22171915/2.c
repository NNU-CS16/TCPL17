#include<stdio.h>
int main()
{
int a=1,b=2,c=3,sum=0;
while(a<=97)
{
sum=sum+a*b*c;
a=a+3;
b=b+3;
c=c+3;
}
printf("sum=%d\n",sum);
return 0;
}


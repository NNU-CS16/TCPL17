#include <stdio.h>
int main()
{
int sum,n;
sum=0,n=2;
while(n<=100)
{
sum=sum+n;
n=n+2;
}
printf("2+4+6+...+100=%d\n",sum);
return 0;
}

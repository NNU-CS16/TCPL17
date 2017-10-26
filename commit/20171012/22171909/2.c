#include <stdio.h>
int main()
{
int sum,n;
sum=0,n=1;
while(n<=99)
{
sum=sum+n*(n+1)*(n+2);
n=n+3;
}
printf("%d\n",sum);
return 0;
}

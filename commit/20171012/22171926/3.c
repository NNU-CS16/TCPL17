#include <stdio.h>
int main()
{
int sum,n,a;
sum=0,n=a;
while(n!=pow(a,n+1))
{
sum=sum+n;
n=n*a;
}
printf("a+aa+aaa+...+aaa..a=%d\n",sum);
return 0;
}

#include<stdio.h>
int main()
{
int sum,n,i;
sum=1;
n=2;
i=1;
while(n<=10)
{
i*=n;
sum+=i;
n++;
}
printf("%d\n",sum);
return 0;
}

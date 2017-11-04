#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
int m=1,i;
for(i=2;i<=n/2;i++)
if(n%1==0)
{printf("0");
}
else
{
printf("-1");
}
return 0;
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_prime(n));
if(is_prime(n)==0)
{int i,k,t;
for(n=541;n<=7919;n=n+2)
{
k=sqrt(n);
for(i=2;i<=k;i++)
if(n%i==0)
break;
if(i>=k+1)
{printf("%d",n);
t=t+1;}
if(t%t==0)
printf("\n");
}
printf("\n");
}
return 0;
}

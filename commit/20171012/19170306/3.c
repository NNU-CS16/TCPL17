#include<stdio.h>
int main()
{
int i,j,sum=0,a,n,c;
scanf("%d,%d",&a,&n);
for (i=1;i<=n;i++)
{
c=1;
for (j=1;j<=i;j++)
{
sum+=a*c;
c=c*10;
}}
printf("%d",sum);
return 0;
}


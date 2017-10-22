#include<stdio.h>
int main()
{
int i,j,cache=1,sum=0;
for (i=1;i<=10;i++)
	{for (j=1;j<=i;j++)
	{cache*=j;}
	sum+=cache;
	cache=1;}
printf("%d",sum);
return 0;
}

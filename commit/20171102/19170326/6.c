#include<stdio.h>
int is_prime(int n)
{
	int i;
	int c=-1;
	for(i=2;i<=n;i++)
	{
		if(n%i==0&&n/i!=1&&n/i!=n)
		{
			c=0;
			break;
		}
	}
	return c;
}
int main()
{
	int n,m=0;
	for(n=1;;n++)
	{
		if(is_prime(n)==-1)
		{
			m++;
			if(m>=100&&m<=1000)
				printf("%d ",n);

		}
	}
	return 0;
}

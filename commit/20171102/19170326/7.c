#include<stdio.h>
int GCD_iterative(int m, int n)
{
	int max,min;
	int r;
	if(m>=n)
	{
		max=m;
		min=n;
	}
	else
	{
		max=n;
		min=m;
	}
	while(1)
	{
		r=max%min;
		if(r==0)
		{
			return min;
			break;
		}
		else
		{
			max=min;
			min=r;
		}
	}
}
int GCD_recursive(int m, int n)
{
        int max,min;
	int r;
	if(m>=n)
	{
		max=m;
		min=n;
	}
	else
	{
		max=n;
		min=m;
	}
	r=max%min;
	if(r==0)
		return min;
	else
	{
		max=min;
		min=r;
		GCD_recursive(max,min);
	}
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d\n",GCD_iterative(m,n));
	printf("%d\n",GCD_recursive(m,n));
	return 0;
}

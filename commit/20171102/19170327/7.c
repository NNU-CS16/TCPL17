#include <stdio.h>

int GCD_recursive(int m, int n)
{
	int y;
	if (m < n)
	m = n;
	y = m % n;
	if(y == 0)
	{
		printf("%d\n",n);
		return 0;
	}
	else
		return GCD_recursive(n,y);
}
int GCD_iterative(int m, int n)
{
	int max,min;
	int r;
	if(m>=n)
	{
		max=n;
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

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d\n",GCD_iterative(m,n));
	printf("%d\n",GCD_recursive(m,n));
	return 0;
}


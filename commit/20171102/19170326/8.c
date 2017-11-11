#include<stdio.h>
int LCM(int m, int n)
{
	int max,min;
	int i;
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
	for(i=max;;i++)
	{
		if(i%max==0&&i%min==0)
		{
			return i;
			break;
		}
	}
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",LCM(m,n));
	return 0;
}


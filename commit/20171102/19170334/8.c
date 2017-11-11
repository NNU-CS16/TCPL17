#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",LCM(m,n));
	return 0;
}

int LCM(int m, int n)
{
	int i;
	if(m >= n)
	{
		for(i = m; ; i++)
		{
			if((i%m==0)&&(i%n==0))
			break;
		}
	}
	else
	{
                for(i = n; ; i++)
                {
                        if((i%m==0)&&(i%n==0))
                        break;
                }
	}
	return i;
}

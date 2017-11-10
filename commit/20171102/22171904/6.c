#include <stdio.h>
#include <math.h>
													
int is_prime(int n)
{
	int j ,k;
	if((n&1)==0&&n>2) 
		return -1;
	else if(n==2)
		return 0;
	else
	{
		for(j=3;j<=sqrt(n);j++)
			if(n%j==0)
			break;
		if(j>sqrt(n))
		return 0;
		else return -1;
	}
}
int main()
{
	int m ,i=1, n=2;
	int a[1001];
	for(n=2;i<=1000;n++)
	{
		m=is_prime(n);
		if (m==0)
		{
			a[i]=n;
			i++;
		}
	}	
	for (i=100;i<=1000;i++)
	printf("%d\n",a[i]);
	return 0;
}

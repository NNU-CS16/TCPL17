#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fac_bit_count(n));
	return 0;
}

int fac_bit_count(int n)
{
	int i,j;
	double m;
	for(i = 1,m = n; i < n; i++)
	{
	m *= i;
	}
	while(m >= 1)
	{
	m /= 10;
	j++;
	}
	return j;
}

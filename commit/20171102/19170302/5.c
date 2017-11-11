#include <stdio.h>
int fac_bit_count(int n);

int main()
{
	int n,i;
	scanf("%d",&n);
	i = fac_bit_count(n);
	printf("i=%d\n",i);
        return 0;
}

int fac_bit_count(int n)
{
	int i, m, j = 0;
	for (i=1; i<=n; i++)
	{
		m = m * i;
	}
	while (m > 0)
	{
		m = m / 10;
		j++;
	}
	return j;
}

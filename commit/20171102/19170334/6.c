#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int k = 0;
	for(n = 2; n <= 100000; n++)
	{
		if((is_prime(n)) == 0)
		k++;
		if(k >= 100 && k <= 1000)
		printf("%d ",n);
		if(k == 1000)
		break;
	}
	return 0;
}

int is_prime(int n)
{
	int i;
	int j = 0;
	if(n < 4)
	return 0;
	else
	{
		for(i = 2; i < n; i++)
		{
			if((n % i) == 0)
			j++;
		}
                if(j > 0)
                return -1;
                else
                return 0;
	}
}

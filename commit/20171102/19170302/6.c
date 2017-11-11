#include <stdio.h>
int is_prime (int n);

int main()
{
	int m = 1, n = 3;
	int str[1000];
	int i = 0;
	while (m <= 1000)
	{
	while (is_prime(n) == 1)
	{
		m++;
	if (m >= 100)
		break;
	}
	while (m <= 1000)
	{
	str[i] = n;
	i++;
	}
	n++;
	}
	for (i = 0; i <= 900; i++)
		printf("%d\n",str[i]);
	return 0;
}

int is_prime (int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
	    if (n % i == 0)
		    return 0;
	    else
		    return 1;
	}
}



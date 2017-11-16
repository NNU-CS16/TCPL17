/*6.c素数*/
#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
	int i, res;
	if(n <= 1)
		return -1;
	else
	{
		for (i = 2; i <= sqrt(n); i++)
		{
			res = n%i;
			if (res == 0)
				break;
		}
		if (i > sqrt(n))
			return 0;
		else
			return -1;
	}
}

int main()
{
	int  n, i, j, res, result;
	for (n = 0,j = 0; j <= 1000; n++)
	{
	    result = is_prime(n);
		if (result == 0)
			j++;
		if (result == 0 && j >= 100)
			 printf("%d	", n);
	}	//判断是否是第100到第1000个素数，看上去成功了，但数太多了，没有验证(･_･;
	printf("\n");
	return 0;
}

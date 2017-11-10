#include <stdio.h>
#include <math.h>
int is_int_pal(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", is_int_pal(n));

	return 0;
}

int is_int_pal(int n)
{
	int m, mask;
	for (m = n, mask = 1; m > 9; )
	{
	     m = m / 10;
		 mask = mask * 10;
	}

	int a, b, flag;
	flag = 0;
	b = mask;
	for (a = 10; log10(mask) >  ((log10(b)) + 1) / 2 - 1;)
	{
	    if ((n / mask) % 10 != (n % a) / (a / 10))
		{
			flag = -1;
			break;
		}
		mask /= 10;
		a *= 10;
	}

	return flag;
}

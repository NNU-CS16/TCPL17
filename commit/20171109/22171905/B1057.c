#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, sum;
	int one, zero;
	char c;
	sum = 0;
	while ( ( c = getchar() ) != '\n' )
	{
		if (c >= 'a' && c <= 'z')
		{
			sum += c - 'a' + 1;
		}
		else if (c >= 'A' && c <= 'Z' )
		{
			sum += c - 'A' + 1;
		}
	}
	one = 0;
	zero = 0;
	while ( sum > 0 )
	{
		if (sum % 2 == 0)
		{
			zero++;
		}
		else
		{
			one++;
		}
		sum /= 2;
	}
	printf( "%d %d",zero, one);
	return 0;
}

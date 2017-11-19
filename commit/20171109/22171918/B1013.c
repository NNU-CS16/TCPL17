#include <stdio.h>
#include <math.h>
int is_prime(int n);
int main ()
{
	int a, b, i = 2, j = 0;
	scanf("%d%d", &a, &b);
	while (i <= 10000)
	{
		if (is_prime(i) == 1)
		{
			j++;
			if (j >= a && j <= b)
			{
				printf("%d", i);
				if ((j+1-a) > 0)
				{
					if((j+1-a) % 10 == 0)
					printf("\n");
					else if( j != b)
           			printf(" ");
				}
			}
		}
		i++;
        if (j > b) break;
	}
  return 0;
}
int is_prime(int n)
{
	int i;
	for (i=2; i <= sqrt(n); i++)
	if (n%i == 0) break;
	if (i <= sqrt(n))
		return 0;
	else
		return 1;
}

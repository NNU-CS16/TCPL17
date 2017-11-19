#include <stdio.h>
int main ()
{
	int a,b,d;
	int sum,i,j;
	int e[1000000];
	i = 0;
	scanf("%d %d %d", &a, &b, &d);
	sum = a + b;
	while (sum > 0)
	{
		e[i] = sum % d;
		sum = sum / d;
		i++;
	}
	for (j = i - 1 ; j >= 0 ; j--)
		printf ("%d", e[j]);
	if (i == 0)
		printf ("0");
	printf ("\n");
	return 0;
}

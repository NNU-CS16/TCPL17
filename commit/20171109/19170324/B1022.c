#include <stdio.h>

int main()
{
	int A, B, D;
	int sum, yu[1000], i;
	scanf("%d %d %d", &A, &B, &D);
	sum = A + B;
	
	for (i = 0; sum > 0; i++)
	{
		yu[i] = sum % D;
		sum = sum / D;
	}

	for (i -= 1; i >= 0; i--)
		printf("%d", yu[i]);
	printf("\n");

	return 0;
}

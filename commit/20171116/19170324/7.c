#include <stdio.h>

int main()
{
	int i, r, j, a, b, c;
	int A[1000], B[1000], C[10001]; 
	for (a = 999; a >= 0; a--)
		scanf("%d", &A[a]);
	for (b = 999; b >= 0; b--)
		scanf("%d", &B[b]);
	for (j = 0, j = 0; j <= 999; j++)
	{
		C[j] = A[j] + B[j] + r;
		if (C[j] > 9)
		{
			C[j] = C[j] % 10;
			r = C[j] / 10;
		}
	}
		
	for (i = 10000; i >= 0; i--)
	{
		if (C[i] == 0)
			continue;
		printf("%d", C[i]);
	}

	return 0;
}

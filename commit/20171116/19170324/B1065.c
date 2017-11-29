#include <stdio.h>

int main()
{
	int i, N, M, cp[10000], sum[20000];
	scanf("%d", &N);
	for (i = 0; i <= 2 * N + N - 2; i += 3)
		scanf("%d%d", &cp[i], &cp[i + 1]);
	scanf("%d", &M);
	for (i = 0; i <= M - 1; i++)
		scanf("%d", &sum[i]);

	int  p, r, k, j, flag, temp, dog = M;
	for (k = 0; k <= M - 1; k++)
	{
		flag = 0;
		for (j = 0; j <= 2 * N + N - 2; j++)
			if (sum[k] == cp[j])
			{
				flag = 1;
				break;
			}
		if (flag == 1)
		{
			for (r = k, p = 0; r <=  M -1; r++)
				if (sum[r] == cp[j + 1] || sum[r] == cp[j - 1])
				{
					sum[k] = 0;
					sum[r] = 0;
					dog -= 2;
				}
		}
	}

	for (i = 0; i <= M - 1; i++)
		for (j = 0; j <= M - i - 2; j++)
			if (sum[j] > sum[j + 1])
			{
				temp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = temp;
			}
				

	printf("%d\n", dog);
	for (i = 0; i <= M - 1; i++)
	{
		if (sum[i] != 0)
			printf("%d ", sum[i]);
	}
	printf("\n");

	return 0;
}


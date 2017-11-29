#include <stdio.h>

int main()
{
	int N;
	printf("input N;");
	scanf("%d",&N);
	int i, j, c = 0, n = 1;
	int num = N * N;
	int a[N][N];
	while (n <= num)
	{
		i = 0, j = 0;
		for (i += c,j += c; j < N - c; j++)
		{
			if (n > num)
				break;
			a[i][j] = n++;
		}
		for (j--, i++; i < N - c; i++)
		{
			if (n > num) break;
			a[i][j] = n++;
		}
		for (i--, j--; j >= c; j--)
		{
			if (n > num) 
				break;
			a[i][j] = n++;
		}
		for (j++, i--; i >= c + 1; i--)
		{
			if (n > num)
				break;
			a[i][j] = n++;
		}
		c++;
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

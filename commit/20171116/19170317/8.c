#include <stdio.h>

int main()
{
	int N, mat[20][20];
	int i = 0, j = 0, k = 0;
	int x, times;
	printf("输入N(N <= 20):");
	scanf("%d", &N);
	if (N % 2 == 0)
	  x = N / 2;
	else
	  x = N / 2 + 1;
	for (times = 0; times < x; ++times)
	{
	  i = times;
	  for (j = times; j <= N - times - 1; ++j)
	  {
		++k;
		mat[i][j] = k;
	  }
	  j -= 1;
	  for (i = times + 1; i <= N - times - 1 ; ++i)
	  {
		++k;
		mat[i][j] = k;
	  }
	  i -= 1;
	  for (j = i - 1; j >= times; --j)
	  {
		++k;
		mat[i][j] = k;
	  }
	  j += 1;
	  for (i = N - times - 2; i >= times + 1; --i)
	  {
		++k;
		mat[i][j] = k;
	  }
	}
	for (i = 0; i < N; ++i)
	{
	  for (j = 0; j < N; ++j)
		printf("%3d ", mat[i][j]);
	  printf("\n");
	}
	return 0;
}

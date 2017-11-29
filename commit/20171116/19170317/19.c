#include <stdio.h>
#include <math.h>

int main()
{
	int N, m, n;
	scanf("%d", &N);
	n = sqrt(N);
	m = N / n;
	int mem[100];
	int i, j, temp;
	for (i = 0; i < N; ++i)
	  scanf("%d", &mem[i]);
	for (i = 0; i < N - 1; ++i)
	  for (j = 0; j < N - 1 - i; ++j)
		if (mem[j] < mem[j+1])
		{
		  temp = mem[j+1];
		  mem[j+1] = mem[j];
		  mem[j] = temp;
		}
	int mat[10][10];
	int k = 0, times;
	for (times = 0; times < (n+1) / 2; ++times)
	{
	  i = times;
	  for (j = times; j < n - times; ++j)
	  {
		mat[i][j] = mem[k];
		++k;
	  }
	  j -= 1;
	  for (i = times + 1; i < m - times; ++i)
	  {
		mat[i][j] = mem[k];
		++k;
	  }
	  i -= 1;
	  for (j = j - 1; j >= times; --j)
	  {
		mat[i][j] = mem[k];
		++k;
	  }
	  j += 1;
	  for (i = i - 1; i > times; --i)
	  {
		mat[i][j] = mem[k];
		++k;
	  }
	}
	for (i = 0; i < m; ++i)
	{
	  for (j = 0; j < n - 1; ++j)
	  {
		printf("%d", mat[i][j]);
		printf(" ");
	  }
	  printf("%d",mat[i][j]);
	  printf("\n");
	}
	
	return 0;
}

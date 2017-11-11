#include <stdio.h>
#define M 4
#define N 5
void matrix_transpose(int mat[M][N], int transposed[N][M]);

int main()
{
	int mat[M][N], transposed[N][M];
	int i, j;
	printf("输入原矩阵mat中的元素, %d * %d:\n", M, N);
	for (i = 0; i < M; ++i)
	  for (j = 0; j < N; ++j)
		scanf("%d", &mat[i][j]);
	matrix_transpose(mat, transposed);
	return 0;
}

void matrix_transpose(int mat[M][N], int transposed[N][M])
{
	int i, j;
	for (i = 0; i < M; ++i)
	  for (j = 0; j < N; ++j)
		transposed[j][i] = mat[i][j];
	printf("转置矩阵transposed, %d * %d:\n", N, M);
	for(i = 0; i < N; ++i)
	{
	  for(j = 0; j < M; ++j)
	    printf("%d ", transposed[i][j]);
	  printf("\n");
	}
}

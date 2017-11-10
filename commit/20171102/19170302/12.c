#include <stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product (int mat1[ ][K], int mat2[ ][N], int produtct[ ][N]);

int main()
{
	int i, j;
	printf("mat1:\n")
	int mat1[ ][K];
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < K; j++)
			scanf("%d", &mat1[i][j]);
	}
	printf("mat2:\n");
	int mat2[ ][N];
	for (i = 0; i < K; i++)
	{
		for (j = 0; j < N; j++)
			scanf("%d", &mat2[i][j]);
	}
	int produtct[ ][N];
	matrix_product (mat1, mat2, produtct);
	return 0;
}

void matrix_product (int mat1[ ][K], int mat2[ ][N], int produtct[ ][N])
{
	int i, j, k;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < n; j++)
			
		{
			for (k = 0; k < K; k++)
				produtct[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
	printf("produtct:\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d", produtct[i][j]);
	}
}



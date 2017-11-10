#include <stdio.h>
#define M 2
#define N 2
#define K 2
void matrix_product(int mat1[2][K], int mat2[K][N], int product[2][N]);

int main()
{
	int mat1[2][K], mat2[K][N], product[2][N];
	printf("请输入数组mat1, 2 * %d:\n", K);
	int i = 0, j = 0;
	for ( ; i <= 2; ++i)
	  for ( ; j <= K; ++j)
		scanf("%d\n", &mat1[i][j]);
	printf("请输入数组mat2, %d * %d:\n", K, N);
	for (i = 0; i <= K; ++i)
	  for(j = 0; j <= N; ++j)
		scanf("%d", &mat2[i][j]);
	matrix_product(mat1, mat2, product);
	printf("矩阵mat1 * mat2 == product[2][%d]:\n", N); 
    for (i = 0; i <= 2; ++i)
	{
	  for (j = 0; j<= N; ++j)
		printf("%d\n", product[i][j]);
	  printf("\n");
	return 0;
	}
}

void matrix_product(int mat1[2][K], int mat2[2][N], int product[2][N])
{
	int i = 0, j = 0, q = 0;
	product[0][0] = 0;
	for ( ; i <= 2; ++i)
	{
	  for ( ; j <= N; ++j)
	  {
		for ( ; q <= K; ++q)
		  product[i][j] = product[i][j] + mat1[i][q] * mat2[q][i];
	  }
	}
}

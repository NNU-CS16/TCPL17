/*12.c_二维数组相乘*/
#include <stdio.h>

#define M 4
#define N 5
#define K 6

void matrix_product(int mat1[][K],
	int mat2[][N], int produtct[][N])
{   
    int i, j, k, sum = 0;
	printf("请输入mat1：\n");
    for (i = 0; i < M; i++)   
        for (j = 0; j < K; j++)   
            scanf("%d", &mat1[i][j]);
	printf("请输入mat2：\n");
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &mat[i][j]);
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			for (k = 0; k < K; k++)
				sum = sum + mat1[i][k] * mat2[k][i];
			product[i][j] = sum;
			printf("%d\t", product[i][j]);
		}
	printf("\n");
	}
}

int main()
{
	int mat1[M][K], mat2[K][N], product[M][N];
	int i, j, k;
	matrix_product(mat1[][K], mat2[][N], produtct[][N]);
	return 0;
}

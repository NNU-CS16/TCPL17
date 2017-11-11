/*13.c_二维数组转置*/
#include <stdio.h>

#define M 4
#define N 5

void matrix_transpose (int mat[][N],
					 int transposed[][M])
{
	int i, j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &mat[i][j]);
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			transposed[i][j] = mat[j][i];
			printf("%d\t", transposed[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int mat[M][N], transposed[N][M], i, j;
	printf("请输入20个整数\n");
	matrix_transpose (mat, transposed);
	return 0;
}

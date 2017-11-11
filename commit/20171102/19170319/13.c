#include <stdio.h>
#define M 4
#define N 5
void matrix_transpose(int mat[][N],int transposed[][M])
{
	int i, j;
    for ( i = 0; i < M; i++)
    	for ( j = 0; j < N; j++)
        	transposed[j][i] = mat[i][j];
}
int main()
{
	int i,j;
	int mat[M][N] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,
					5,6,7},{4,5,6,7,8}};
	int transposed[N][M];
	matrix_transpose(mat,transposed);
	for (i = 0;i <= N - 1;++i)
	{
		for (j = 0;j <= M - 1;++j)
        	printf("%-2d",transposed[i][j]);
		printf("\n");
	}
	return 0;
}

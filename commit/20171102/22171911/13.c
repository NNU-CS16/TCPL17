#include <stdio.h>
#define M 4
#define N 5
void matrix_transpose (int mat[][N], int transposed[][M])
{
    int i, j, k;
    for (i = 0; i < M; i++)
    {
	for (j = 0; j < N; j++)
	{
	    transposed[j][i] = mat[i][j];
	}
    }
    for (j = 0; j < N; j++)
    {
	for (i = 0; i < M; i++)
    	{
	    printf ("%d ",transposed[j][i]);
	}
        printf ("\n");
    }
}
int main( )
{
    int  mat[M][N], transposed[N][M];
    int a, b;
    printf ("请输入一个矩阵；");
    for (a = 0; a < M; a++)
        for (b = 0; b < N; b++)
	    scanf ("%d", &mat[a][b]);
    matrix_transpose (mat,transposed);
    return 0;
}











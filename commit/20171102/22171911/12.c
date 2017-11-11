#include <stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[ ][K],int mat2[ ][N],int product[ ][N])
{
    int i, j, k, sum = 0;
    for (i = 0; i < 4; i++)
    {
	for (j = 0; j < 6; j++)
	{
	    for (k = 0; k < 5; k++)
		{
		    sum = sum + mat1[i][k] * mat2[k][j];
		}
            product[i][j] = sum;
	    printf ("%d ", product[i][j]);
        }
    printf ("\n");    
    }
}
int main( )
{
    int mat1[M][K],  mat2[K][N], product[M][N];
    int a, b, c, d;
    printf ("请输入一个矩阵：");
    for (a = 0; a < M; a++)
        for (b = 0; b < K; b++)
	    scanf ("%d", &mat1[a][b]);
    printf ("请输入一个矩阵；");
    for (c = 0; c < K; c++)
	for (d = 0; d < N; d++)
	    scanf ("%d", &mat2[c][d]);
    matrix_product(mat1,mat2,product);
    return 0;
}

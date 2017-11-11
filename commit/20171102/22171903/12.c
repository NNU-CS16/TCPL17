#include <stdio.h>

#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N]);
int main()
{
    int mat1[M][K] = {1, 1, 1, 1, 1,
                      2, 2, 2, 2, 2,
                      3, 3, 3, 3, 3,     
                      4, 4, 4, 4, 4};
    int mat2[K][N] = {4, 4, 4, 4, 4, 4,
                      5, 5, 5, 5, 5, 5,
                      6, 6, 6, 6, 6, 6,
                      7, 7, 7, 7, 7, 7,
                      8, 8, 8, 8, 8, 8};
    int produtct[M][N];
    matrix_product(mat1, mat2, produtct);
    return 0;
}

void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N])
{
    int m, n, k, o = 0;
    for (m = 0; m < M; m++)
    {
        for (n = 0; n < N; n++)
	{
	    for (k = 0; k < K; k++)
    	    {
		o = o + mat1[m][k] * mat2[k][n];
	    }
	produtct[m][n] = o;
	}
    }
    for (m = 0; m < M; m++)
    {
	for (n = 0; n < N; n++)
	{
	    printf("%d\t", produtct[m][n]);
	}
        printf("\n");
    }
}

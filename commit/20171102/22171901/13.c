#include <stdio.h>
#define M 4
#define N 5
void matrix_transpose (int mat[][N] , int transposed[][M]);
int main()
{
    int mat[M][N]={1,1,1,1,1,
                   2,2,2,2,2,
                   3,3,3,3,3,
                   4,4,4,4,4};
    int transposed[N][M];
    matrix_transpose(mat, transposed);
    return 0;
}

void matrix_transpose(int mat[][N], int transposed[][M])
{
    int m, n;
    for (n = 0; n < N; n++)
    {
        for (m = 0; m < M; m++)
	{  
	    transposed[n][m] = mat[m][n];    
	    printf("%d\t", transposed[n][m]);
        }
    }	   
	
}
                   

#include<stdio.h>
#define M 2
#define N 3
void matrix_transpose (int mat[][N], int transposed[][M])
{
	int m, n;
	for(n=0;n<=N-1;n++)
	{
		for(m=0;m<=M-1;m++)
		{
			transposed[n][m]=mat[m][n];
			printf("%d ",transposed[n][m]);
		}
		printf("\n");
	}
}
int main()
{
	int mat[][N]={{1,2,3},{4,5,6}};
	int transposed[N][M];
	matrix_transpose (mat, transposed);
	return 0;
}


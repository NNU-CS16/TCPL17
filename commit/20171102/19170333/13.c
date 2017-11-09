#include <stdio.h>
#define M 4
#define N 5
void matrix_transpose(int mat[][N], int transposed[][M])
{
   	int i, j, m = 0;
   	for (i = 0; i < M; i++)
   	{ 
    	for (j = 0; j < N; j++)
     	transposed[j][i] = mat[i][j];
   	}
   	for (i = 0; i < N; i++)
   	{
    	for (j = 0; j < M; j++)
    	{
    		printf("%-3d", transposed[i][j]);
     		m++;
     		if (m % M == 0)
     		printf("\n");
    	}
   	}
}
int main()
{
  	int mat[M][N], transposed[N][M] = {0};
  	int i, j;
  	for (i = 0; i < M; i++)
   	{ 
     	for (j = 0; j < N; j++)
      	scanf("%d", &mat[i][j]);
   	} 
  	matrix_transpose(mat, transposed);
  	printf("\n");
  	return 0;
}

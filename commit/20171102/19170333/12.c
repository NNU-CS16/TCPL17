#include <stdio.h>
#include <string.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K], int mat2[][N], int product[][N])
{ 
  	int i, j, m = 0;
    for (i = 0; i < M; i++) 
    {
      	for (j = 0; j < K; j++)
       	product[i][j] = mat1[i][j] * mat2[i][j];
    }
    for (i = 0; i < M; i++)
      	product[i][5] += mat2[i][5];
    for (i = 0; i < M; i++)
    {
    	for (j = 0; j < N; j++)
        {
          	printf("%-4d", product[i][j]) ;   
          	m++;       
          	if (m % N == 0)
          	printf("\n") ; 
      	}
    }  
}
int main()
{
   	int mat1[M][K], mat2[K][N], product[M][N] = {0};
   	int i, j;
   	for (i = 0; i < M; i++) 
    {
      	for (j = 0; j < K; j++)
       		scanf("%d ", &mat1[i][j]);
    }
   	for (i = 0; i < K; i++)
    {
      	for (j = 0; j < N; j++)
       		scanf("%d", &mat2[i][j]);
    }
   	matrix_product(mat1, mat2, product) ;
   	printf("\n");
   	return 0;
}  

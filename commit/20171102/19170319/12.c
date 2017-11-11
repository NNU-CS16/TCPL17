#include <stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K],int mat2[][N],int product[][N])
{
	int i,j,k;
    for (i=0;i<M;i++)
    	for (j=0;j<N;j++)
        	for (k=0;k<K;k++)
          		product[i][j]+=mat1[i][k]*mat2[k][j];
}
int main()
{
	int mat1[M][K];
	int mat2[K][N];
	int product[M][N];
	int i,j;
	for (i = 0;i <= M - 1;++i)
		for (j = 0;j <= K - 1;++j)
			scanf("%d",&mat1[i][j]);
	for (i = 0;i <= K - 1;++i)
		for (j = 0;j <= N - 1;++j)
			scanf("%d",&mat2[i][j]);
	matrix_product(mat1,mat2,product);
    for (i = 0;i <= M - 1;++i)
	{
		for (j = 0;j <= N -1;++j)
			printf("%d ,",product[i][j]);
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
#define M 2
#define K 2
#define N 2
void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N])
{
	int k,m,n;
	int sum=0;
	for(m=0;m<=M-1;m++)
	{
		for(n=0;n<=N-1;n++)
		{
			for(k=0;k<=K-1;k++)
				sum+=mat1[m][k]*mat2[k][n];
			produtct[m][n]=sum;
			sum=0;
			printf("%d ",produtct[m][n]);
		}
		printf("\n");
	}
}
int main()
{
	int mat1[][K]={{1,2},{3,4}};
       	int mat2[][N]={{1,0},{0,1}};
       	int produtct[M][N];
	matrix_product(mat1, mat2, produtct);
	return 0;
}

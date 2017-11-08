#include<stdio.h>
#define M 4 
#define N 5
void matrix_transpose(int * ,int *);
int main()
{
int i,j;
int mat[M][N]={{1,2,3,4,5},{5,4,3,2,1},{0,0,0,0,0},{1,4,5,67,8}},transposed[N][M];
matrix_transpose(mat[0],transposed[0]);
for (i=0;i<N;i++)
	{
	for (j=0;j<M;j++)
	printf("%d\t",transposed[i][j]);
	printf("\n");
	}
return 0;
}

void matrix_transpose(int * before,int * after)
{
int i,j;
for (i=0;i<M;i++)
	for (j=0;j<N;j++)
	*(after+j*M+i)=*(before+i*N+j);
}

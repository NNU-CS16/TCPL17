#include<stdio.h>
#define M 4
#define K 5
#define N 6
void input(int *,int,int);
void output(int *,int,int);
void matrix_product(int *,int *,int *);
int main()
{
int mat1[M][K],mat2[K][N],product[M][N];
input(mat1[0],M,K);
input(mat2[0],K,N);
matrix_product(mat1[0],mat2[0],product[0]);
output(product[0],M,N);
return 0;
}


void input(int * mat,int row,int column)
{	
for(int i=0;i<row;i++)
		for(int j=0;j<column;j++)
		scanf("%d",mat+i*column+j);
}

void output(int * mat,int row,int column)
{
for(int i=0;i<row;i++)
                {
			for(int j=0;j<column;j++)
			printf("%d\t",*(mat+i*column+j));
		printf("\n");
		}
}

void matrix_product(int * mat1,int * mat2,int *  product)
{
for (int i=0;i<M;i++)
	for (int j=0;j<N;j++)
	{
	*(product+i*N+j)=0;
		for (int mid=0;mid<K;mid++)
		*(product+i*N+j)+=(*(mat1+i*N+j))*(*(mat2+i*N+j));
	}
}

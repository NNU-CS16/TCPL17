#include<stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K],int mat2[][N],int product[][N])
{
int i,j,k;
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
for(k=0;k<K;k++)
product[i][j]=(mat1[i][k])*(mat2[k][j]);
}
}
}
int main()
{
int i,j,k;
int mat1[M][K];int mat2[K][N];int product[M][N];
scanf("%d",mat1);
scanf("%d",mat2);
matrix_product(mat1,mat2,product);
for(j=0;j<N-1;j++)
printf("%d",product[i][j]);
return 0;
}

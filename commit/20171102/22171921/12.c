#include<stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N])
{
int i,j,k;
int temp[6]={0};
for(i=0;i<M;i++)
{temp[k]=0;
for(j=0;j<k;j++)
{for(k=0;k<N;k++)
{temp[k]+=mat1[i][j]*mat2[j][k];
}
}
for(k=0;k<N;k++)
{produtct[i][k]=temp[k];
printf("%d/t",produtct[i][k]);
}printf("%d/n");
}}
int main()
{
int mat1[M][K]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int mat2[K][N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int produtct[M][N]={0};
matrix_product(mat1,mat2,produtct);    
return 0;
}

#include<stdio.h>
#define M 4

#define N 5
void matrix_transpose (int mat[][N], int transposed[][M])
{
int i,j;
for(i=0;i<M;i++)
{
  for(j=0;j<N;j++)
  transposed[j][i]=mat[i][j];
}
for(i=0;i<N;i++)
{
 for(j=0;j<M;j++)
{
 printf("%d ",transposed[i][j]);
 if(j==M-1)
 printf("\n");
}
}
}
int main()
{
int mat[M][N];
int transposed[N][M];
int i,j; 
printf("mat=\n");
  for(i=0;i<M;i++)
{
  for(j=0;j<N;j++)
  scanf("%d",&mat[i][j]);
}
printf("transposed=\n");
matrix_transpose(mat,transposed);
return 0;
}

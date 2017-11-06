#include<stdio.h>
#define M 4
#define N 5
void matrix_transpose(int mat[][N],int transposed[][M])
{
 for(int i=0;i<=M-1;i++)
 {
   for(int j=0;j<=N-1;j++)
   transposed[j][i]=mat[i][j];
 }
}
int main()
{
 int mat[M][N],transposed[N][M];
 int i,j;
 for(i=0;i<=M-1;i++)
 {
  for(j=0;j<=N-1;j++)
  scanf("%d",&mat[i][j]);
 }
 matrix_transpose(mat,transposed);
 for(i=0;i<=N-1;i++)
 {
  for(j=0;j<=M-1;j++)
  printf("%d  ",transposed[i][j]);
  printf("\n");
 }
 return 0;
}

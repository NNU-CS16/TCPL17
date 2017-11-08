#include<stdio.h>
#define M 4

#define K 5

#define N 6
void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N])
{
  int i, j, k;  
  int t=0;
  for(i=0;i<M;i++)
{
 for(j=0;j<N;j++)
{
 t=0;
 for(k=0;k<K;k++)
{ t+=mat1[i][k]*mat2[k][j];}
 produtct[i][j]=t;
}
}
 for(i=0;i<4;i++)
{
 for(j=0;j<6;j++) 
{ printf("%d ",produtct[i][j]);
  if(j==5)
  printf("\n");
}
}
}
 int main()
{
int mat1[M][K];
int mat2[K][N];
int product[M][N];
int i,j;
printf("mat1=\n");
for(i=0;i<M;i++)
{   for(j=0;j<K;j++)
    scanf("%d",&mat1[i][j]);
}
printf("mat2=\n");
for(i=0;i<K;i++)
{   for(j=0;j<N;j++) 
    scanf("%d",&mat2[i][j]);
}
printf("produtct=\n");
matrix_product(mat1,mat2,product);
printf("\n");
return 0;
}

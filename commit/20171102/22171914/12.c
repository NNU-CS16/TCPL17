#include <stdio.h>
#include <stdlib.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K],int mat2[][N],int product[][N])
{
  int i,j,k;
  printf("请输入矩阵mat1的元素: ");
  for(i=0;i<M; i++)
  {
    for(j=0;j<K;j++)
    {
      scanf("%d",&mat1[i][j]);
    }
  }

 for(i=0;i<M;i++)
 {
   for(j=0;j<K;j++)
   {
     printf("%3d",mat1[i][j]);
   }
 }
 printf("请输入矩阵mat2的元素: ");
 for(i=0;i<K;i++)
 {
   for(j=0;j<N;j++)
   {
     scanf("%d",&mat2[i][j]);
   }
 }

 for(i=0;i<K;i++)
 {
   for(j=0;j<N;j++)
   {
     printf("%3d",mat2[i][j]);
   }
 }
  printf("矩阵相乘的结果是: \n");
  for(i=0;i<M;i++)
  {
    for(j=0;j<N;j++)
    {
      product[i][j]=0;
      for(k=0;k<N;k++)
      product[i][j]=product[i][j]+mat1[i][j]*mat2[i][j];
    }
  }

  for(i=0;i<M;i++)
  {
    for(j=0;j<N;j++)
    {
      printf("%3d",product[i][j]);
    }
  }
}
int main()
{

  matrix_product;
  printf("\n");
  return 0;
}





  

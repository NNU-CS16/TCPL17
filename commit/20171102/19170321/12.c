#include<stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N])
{
   int mat3[N][K] ;
   int i,j,k,a=0;
   for(i=0;i<K;i++)
      for(j=0;j<N;j++)
       mat3[j][i]=mat2[i][j];
   for(i=0;i<M;i++)
     { for(j=0;j<N;j++)
      {
        for(k=0;k<K;k++)
        a=a+mat1[i][k]*mat3[i][k];
        produtct[i][j]=a;
        a=0;
        printf("%d ", produtct[i][j]);
       }
       printf("\n");
    }
}
int main()
{
  int i,j;
  int a[M][K],b[K][N],c[M][N];
  printf("input 20 numbuer:");
   for(i=0;i<M;i++)
      for(j=0;j<K;j++)
      scanf("%d",&a[i][j]);
 printf("input 30 numbuer:");
  for(i=0;i<K;i++)
      for(j=0;j<N;j++)
      scanf("%d",&b[i][j]);
  matrix_product(a, b, c);
return 0;
}

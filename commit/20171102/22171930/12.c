#include <stdio.h>

#define M 2
#define K 3
#define N 2
void matrix_product(int mat1[M][K],int mat2[K][N],int product[M][N]);

int main()
{
    int mat1[M][K] = {{1,2,3},{4,5,6}};
    int mat2[K][N] = {{1,2},{3,4},{5,6}};
    int product[M][N];
    matrix_product(mat1, mat2, product);
    return 0;
}  
   void matrix_product(int mat1[M][K],int mat2[K][N],int product[M][N])
  {
      int i,j,k;
      for(i=0; i<M; i++)
       for(j=0; j<K; j++)
      { 
        for(k=0; k<N; k++)
         product[i][j] += mat1[i][k] * mat2[k][j];
      }
      for(i=0; i<M ; i++)
      for(j=0; j<N ; j++)
      printf("%d\t", product[i][j]);
      
  }
       
       
      
      

 
     

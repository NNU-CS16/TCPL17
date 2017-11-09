#include<stdio.h>
#define M 2
#define N 3
#define K 4
void matrix_product(int mat1[][K], int mat2[][N], int product[][N]); 
int main()
{
    int mat1[M][K]={1,2,3,1,2,3};
    int mat2[K][N]={1,2,3,4,1,2,3,4,1,2,3,4};
    int product[M][N]={0};

    matrix_product(mat1,mat2,product);
    return 0;
}

void matrix_product(int mat1[][K], int mat2[][N], int product[][N]) 
{   
     int i,j,k;
  
     for(i=0;i<M;i++)
     
         for(j=0;j<N;j++)
         
             for(k=0;k<K;k++)
                 product[i][j]+=mat1[i][k]*mat2[k][j];

     for(i=0;i<M;i++)  
        {
          for(j=0;j<N;j++)
              printf("%d ",product[i][j]);
          printf("\n"); 
         }
}    

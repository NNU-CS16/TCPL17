#include<stdio.h>
#define M 2
#define N 3
void matrix_transpose(int mat[][N],int transposed[][M]);
int main()
{
    int mat[M][N]={1,2,3,4,5,6};
    int transposed[N][M]={0};

    matrix_transpose(mat,transposed);

    return 0;
}


void matrix_transpose(int mat[][N],int transposed[][M])
{
     int i,j;
     for(i=0;i<M;i++)
         for(j=0;j<N;j++)
              transposed[j][i]=mat[i][j];
     
     for(j=0;j<N;j++)
         {
         for(i=0;i<M;i++)
            printf("%d ",transposed[j][i]); 
         printf("\n");
         }      
             
            
}  

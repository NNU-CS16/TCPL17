#include<stdio.h>
#define M 4
#define N 5
void matrix_transpose(int mat[][N],int transposed[][M])
{
     int i,j;
     for(i=0;i<M;i++)
     {
        for(j=0;j<N;j++)
           transposed[j][i]=mat[i][j];
     }
}
int main()
{
    int i,j; 
    int mat[M][N],transposed[N][M];
    for(i=0;i<M;i++)
    {
       for(j=0;j<N;j++)
          scanf("%d",&mat[i][j]);
    }
    matrix_transpose(mat,transposed);
    for(j=0;j<N;j++)
    {
       for(i=0;i<M;i++)
          printf("%-5d",transposed[j][i]);
    }
    return 0;
} 


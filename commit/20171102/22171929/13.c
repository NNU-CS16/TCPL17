#include <stdio.h>
#define M 4 
#define N 5 
void matrix_transpose (int mat[][N], int transposed[][M]);
int main()
{
   int mat[M][N]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
   int transposed[N][M]={0};
   matrix_transpose (mat,transposed);
   return 0;
}
void matrix_transpose (int mat[][N], int transposed[][M])
{
    int i,j;
    for (j = 0;j<4;j++)
    {
        for (i = 0;i<5;i++)
            transposed[i][j]=mat[j][i];
     }
    for (i = 0;i<5;i++)
    {
        for (j = 0;j<4;j++)
            printf("%d\t",transposed[i][j]);
        printf("\n");
    }
}
     

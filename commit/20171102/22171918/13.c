#include <stdio.h>
#define M 4
#define N 5
void matrix_transpose(int mat[][N],int transposed[][M]);
int main ()
{
   int mat[M][N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
   int product[N][M];
   int i,j;
   matrix_transpose(mat,product);
   for(i=0;i<N;i++)
   {
     for(j=0;j<M-1;j++)
         printf("%-3d",product[i][j]);
     printf("%d\n",product[i][M-1]);
   }
 return 0;
}
void matrix_transpose(int mat[][N],int transposed[][M])
{
   int i,j;
   for(i=0;i<M;i++)
       for(j=0;j<N;j++)
          transposed[j][i]=mat[i][j];
}


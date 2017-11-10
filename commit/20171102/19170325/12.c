#include <stdio.h>
#define M 4
#define K 5
#define N 6

void matrix_product(int mat1[][K], int mat2[][N], int product[][N]);

int main(void)
{
   int i, j, mat1[M][K], mat2[K][N], product[M][N]={ 0 };

   printf("please input mat1[4][5]\n");
   for (i=0; i<M; i++)
     for (j=0; j<K; j++)
       scanf("%d", &mat1[i][j]);
   printf("please input mat2[5][6]\n");
   for (i=0; i<K; i++)
     for (j=0; j<N; j++)
        scanf("%d", &mat2[i][j]);
   matrix_product(mat1, mat2, product);

   return 0;
}

void matrix_product(int mat1[][K], int mat2[][N], int product[][N])
{
   int i, j, a, b;

   for (i=0; i<M; i++)
     for (j=0; j<N; j++)
       for (a=0, b=0; a<K, b<K; a++, b++)
         product[i][j] += mat1[i][a] * mat2[b][j];
   for (i=0; i<M; i++)
   {
      for (j=0; j<N; j++)
        printf("%5d", product[i][j]);
      printf("\n");
   }
}

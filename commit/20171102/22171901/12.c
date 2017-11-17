#include <stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product (int mat1[][K] ,int mat2[][N] , int product[][N]);

int main()
{
    int mat1[M][K]={1,1,1,1,1,
                    2,2,2,2,2,
                    3,3,3,3,3,
                    4,4,4,4,4};
    int mat2[K][N]={1,1,1,1,1,1,
                    2,2,2,2,2,2,
                    3,3,3,3,3,3,
                    4,4,4,4,4,4,
                    5,5,5,5,5,5};
    int product[M][N];
    matrix_product(mat1 , mat2 , product);
    return 0;
}

void matrix_product (int mat1[][K], int mat2[][N],int product[][N])
{
    int m ,n ,k ,res = 0;
    for (m = 0; m < M; m++)
    {
        for (n = 0; n < N; n++)
        {
            res = res + mat1[m][k] + mat2[k][n];
        }
        product[m][n] = res;
    }

    for (m = 0; m < M; m++)
    {
         for (n = 0; n < N; n++)
             printf ("%d\n",product[m][n]);
    }
   
} 

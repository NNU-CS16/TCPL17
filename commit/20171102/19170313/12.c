#include<stdio.h>
#define M 2
#define K 3
#define N 2
void matrix_product(int mat1 [ M ] [ K ], int mat2 [ K ] [ N ], 
                    int product [ M ] [ N ] );
int main()
{
    int mat1 [ M ] [ K ], mat2 [ K ] [ N ], product [ M ] [ N ], i = 0, j = 0, p    = 0, q = 0;
    for (i = 0;i < M;i++)
    {
        for (j = 0;j < K;j++)
        {
            scanf("%d", &mat1 [ i ] [ j ] );
        }
    }
    for (p = 0;p < K;p++)
    {
        for (q = 0;q < N;q++)
        {
            scanf("%d", &mat2 [ p ] [ q ] );
        }
    }
    matrix_product(mat1, mat2, product);
    return 0;
}
void matrix_product(int mat1 [ M ] [ K ], int mat2 [ K ] [ N ], 
                    int product [ M ] [ N ] )
{
    int a = 0, b = 0, c = 0, d = 0, m = 0, n = 0;
    for (m = 0;m < M;m++)
    {
        for (n = 0;n < N;n++)
        {
            product [ m ] [ n ] = mat1 [ a ] [ b ] * mat2 [ c ] [ d ] + 
                                  mat1 [ a ] [ b + 1 ] * mat2 [ c + 1 ] [ d ] +
                                  mat1 [ a ] [ b + 2 ] * mat2 [ c + 2 ] [ d ] ;
            printf("%d ", product [ m ] [ n  ] );
            d++;
        }
        printf("\n");
        d--;
        d--;
        if ( m == 0)
        {
            n--;
            n--;
            a++;
        }
    }
    return;
}

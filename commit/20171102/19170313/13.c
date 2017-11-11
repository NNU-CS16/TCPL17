#include <stdio.h>
#define M 3
#define N 4
void matrix_transpose(int mat [] [ N ] , int transposed [] [ M ] );
int main()
{
    int mat [ M ] [ N ] ,transposed [ N ] [ M ] , i = 0, j = 0;
    for (i = 0;i < M;i++)
    {
        for (j = 0;j < N;j++)
        {
            scanf("%d", &mat [ i ] [ j ] );
        }
    }
    matrix_transpose(mat, transposed);
    return 0;
}
void matrix_transpose(int mat [] [ N ] , int transposed [] [ M ] )
{
    int i = 0, j = 0;
    for (j = 0;j < N;j++)
    {
        for (i = 0;i < M;i++)
        {
            transposed [ j ] [ i ] = mat [ i ] [ j ] ;
            printf("%d ",transposed [ j ] [ i ] );
        }
        printf("\n");
    }
    return;
}

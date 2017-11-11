#include <stdio.h>
    #define M 4
    #define N 5
    void matrix_transpose (int mat[][N], int transposed[][M]);
    int main ()
    {
        int i, j;
        int a[M][N], b[N][M];
        for  (i = 0; i < M; i++)
            for (j = 0; j < N; j++)
                scanf ("%d", &a[i][j]);
        matrix_transpose (a,b);
        return 0;
    }
    void matrix_transpose (int mat[][N], int transposed[][M])
    {
        int i, j;
        for (i = 0; i < M; i++)
            for (j = 0; j < N; j++)
                transposed[j][i] = mat[i][j];
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < M; j++)
                 printf ("%d ", transposed[i][j]);
            printf ("\n");
         }
    }

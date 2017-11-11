    #include <stdio.h>
    #define M 4
    #define K 5
    #define N 6
    void matrix_product( int mat1[][K], int mat2[][N], int product[][N])
    {
        int i, j, l;
        int temp;
        for ( i = 0; i < M; i++)
            for ( j = 0; j < N; j++)
            {
                for ( l = 0; l < K; l++)
                    temp = mat1[i][l] * mat2[l][j];
                product[i][j] = temp;
            }
                    
    }
    
    int main()
    {
        int i, j;
        int mat1[M][K], mat2[K][N], product[M][N];
        for (i = 0; i < M; i++)
            for (j =0; j < K;j++)
                scanf("%d",&mat1[i][j]);
        for (i = 0; i < K; i++)
            for (j =0; j < N;j++)
                scanf("%d",&mat2[i][j]);
        matrix_product(mat1,mat2,product);
        for ( i = 0; i < M; i++)
        {
            for ( j = 0; j < N; j++)
                printf("%d ",product[i][j]);
            printf("\n");
        }
        return 0;
    }
        

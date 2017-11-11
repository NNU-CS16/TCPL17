    #include <stdio.h>
    #define M 4 
    #define K 5 
    #define N 6 
    void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N]);
    int main()
    {  
       int mat1[M][K] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
       int mat2[K][N] = {1,2,3,4,5,6,7,8,9,1,1,1,1,1,1,
                       1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
       int produtct[M][N] = {0};
    matrix_product(mat1,mat2,produtct);
        return 0;
    } 
    void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N])
    { 
        int i = 0,j = 0,k = 0;
        for (;i<M;i++)
        { 
            for (j=0;j<N;j++)
            {
                for (k=0;k<K;k++)    
                    produtct[i][j]+= mat1[i][k] * mat2[k][j];
            }
        }
        for (j=0;j<4;j++)
        {
            for (k=0;k<6;k++)    
               printf("%d\t",produtct[j][k]);
        }
        printf("\n");
        }	 

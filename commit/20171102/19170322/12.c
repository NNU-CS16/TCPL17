    #include <stdio.h>
    #define M 6
    #define K 5
    #define N 4
    void matrix_product(int mat1[M][K], int mat2[K][N], int product[M][N])
    {
	int a = 0, x, y ;
	for(int i = 0; i <= M-1; i++)
	    for(int j = 0; j <= N - 1; j++)
	        for(x = 0, y = 0; x <= K - 1; x++, y++)
		{
		    a = a + mat1[i][x] * mat2[y][j];
		    product[i][j] = a;
		}
    }
    int main()
    {
        int mat1[M][K], mat2[K][N], product[M][N];
	int x, y;
	printf("please input mat1[M][K](30):");
        for(x = 0; x <= M - 1; x++)
	    for(y = 0; y <= K - 1; y++)
	        scanf("%d", &mat1[x][y]);
	printf("please input mat2[K][N](20):");
	for(x = 0; x <= K - 1; x++)
	    for(y = 0; y <= N - 1; y++)
	        scanf("%d", &mat2[x][y]);
	matrix_product(mat1, mat2, product);
	int i, j;
        for(i = 0; i <= M - 1; i++)
            for(j = 0; j <= N - 1; j++)
	    {
	        printf("%d ", product[i][j]);
		if(j == N - 1)
		printf("\n");
	    }
        return 0;
    }


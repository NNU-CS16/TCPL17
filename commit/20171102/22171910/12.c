  /*二维数组相乘*/
  #include <stdio.h>
  #define M 4         //定义宏
  #define K 5
  #define N 6
  void matrix_product(int mat1[ ][K],
		      int mat2[ ][N],
		      int product[ ][N]);

  int main()
  {
    int mat1[M][K], mat2[K][N], product[M][N];
    int i, j;
    printf("请输入矩阵1元素:");         //输入矩阵1
    for (i = 0; i < M; i++)
	for (j = 0; j < K; j++)
	    scanf("%d", &mat1[i][j]);
    printf("请输入矩阵b元素:");        //输入矩阵2
    for (i = 0; i < K; i++)
	for (j = 0; j < N; j++)
	    scanf("%d", &mat2[i][j]);
    matrix_product(mat1, mat2, product);
    return 0;
  }

  void matrix_product(int mat1[ ][K],
		      int mat2[ ][N],
		      int product[ ][N])
  {
    int i, j, m, n;
    for (i = 0; i < M; i++)
	{
	  for (j = 0; j < N; j++)
	      {
	         m = 0;
	         for (n = 0; n < K; n++)
		     m = m + mat1[i][n] * mat2[n][j];   //将矩阵1 2相乘，结果记入矩阵3
	         product[i][j] = m;	  
	         printf("%d ", product[i][j]);
	      }
	  printf("\n");
	}
  }

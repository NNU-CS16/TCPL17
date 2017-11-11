  /*将一个矩阵转置后输出*/
  #include <stdio.h>
  #define M 4            //定义宏
  #define N 5
  void matrix_transpose(int mat[ ][N],
			int transposed[ ][M]);

  int main()
  {
    int mat[M][N], transposed[N][M], i, j;
    printf("请输入矩阵:");
    for (i = 0; i < M; i++)                     //读入供转换的矩阵
	for (j = 0; j < N; j++)
	    scanf("%d", &mat[i][j]);
    matrix_transpose(mat, transposed);
    return 0;
  }

  void matrix_transpose(int mat[ ][N],
			int transposed[ ][M])
  {
    int i, j;
    for (i = 0; i < N; i++)                //转置矩阵
	{
	  for (j = 0; j < M; j++)
	      {
		transposed[i][j] = mat[j][i];
		printf("%d ", transposed[i][j]);
	      }
	  printf("\n");
	}
  }

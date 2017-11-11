  #include <stdio.h>
  #define M 4
  #define K 5
  #define N 6
  void matrix_product(int mat1[M][K], int mat2[K][N], int product[M][N]);
  
  int main()
  {
      int mat1[M][K], mat2[K][N];
      int product[M][N]={0};
      int i, j;
      for( i = 0; i < M; i++)
      {
          for( j = 0; j < K; j++)
          {
              scanf("%d",&mat1[i][j]);
          }
      }
      for( i = 0; i < K; i++)
      {
          for(j = 0; j < N; j++)
          {
              scanf("%d",&mat2[i][j]);
          }
      }
      matrix_product(mat1, mat2, product);
      printf("\n");
      return 0;
  }

  void matrix_product(int mat1[M][K], int mat2[K][N], int product[M][N])
  {
      int p, q, x;
      for( p = 0; p < M; p++)
      {
          for( q = 0; q < N; q++)
          {
              for( x = 0; x < K; x++ )
              {
                  int i=mat1[p][x] * mat2[x][q];
                  product[p][q] += i;
              }
          }
      }
      for( p = 0; p < M; p++)
      {
          for( q = 0; q < N; q++)
          {
              printf("%d ",product[p][q]);
          }
      printf("\n");
      }
  }	


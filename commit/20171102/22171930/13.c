#include <stdio.h>
#define M 3
#define N 4
void matrix_transpose (int mat[M][N], int transposed[N][M]);

int main()
{
    int mat[M][N] = {{1.2,3,4},{2,3,4,5},{3,4,5,6}};
    int transposed[N][M];
    matrix_transpose ( mat, transposed);
    return 0;
}
  void matrix_transpose (int mat[M][N], int transposed[N][M])
 {
    int i,j;
    for (i = 0; i < M ; i++) 
  {
    for (j = 0; j < N; j++)
  {
    transposed[j][i] = mat[i][j];
  }
  }
    for (i = 0; i < N; i++)
  {
   for (j = 0; j < M; j++)
  {
   printf ("%d\t", transposed[i][j]);
  }
   printf("\n");
  }
 } 

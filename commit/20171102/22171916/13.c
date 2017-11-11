#include<stdio.h>
#define M 4
#define N 5
void transpose( int mat[][N], int transposed[][M]);
int main()
{
  int mat[M][N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
  int product[N][M];
  transpose( mat, product );
  for ( int i = 0; i < N; i++ )
     {
       for ( int j = 0; j < M-1; j++ ) printf( "%-3d", product[i][j] );
       printf( "%d\n", product[i][M-1] );

     }
  return 0;
}
void transpose( int mat[][N], int transposed[][M] )
{
    for ( int i = 0; i < M; i++ )
        for ( int j = 0; j < N; j++ )
            transposed[j][i] = mat[i][j];

}

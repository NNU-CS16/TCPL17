 #include <stdio.h>
   #define M 4
   #define K 5
   #define N 6
 void matrix_product(int mat1[][K], int mat2[][N], int product[][N])
 {
  int c,i = 0, j, n, m;
  for (j = 0; j < 4; ++j)
  {
     for (n = 0; n < 6; ++n)
     {
         for (m = 0; m < 5; ++m)
         {
              i += mat1[j][m] * mat2[m][j];
         }
         product[j][n] = i;
     }
  }
  for (i = 0; i < 4; ++i)
   {
      for (j = 0; j < 6; ++j)
      {
           return c = product[i][j];

      }
   }
 
 }

 int main()
 {
   int i,j,n,m;
   int mat1[M][K],mat2[K][N],product[M][N];
   printf("请输入mat1");
   for (i = 0; i < 4; ++i)
   {
      for (j = 0; j < 5; ++j)
      {
           scanf ("%d",&mat1[i][j]);
      }
   }
   printf("请输入mat2");
   for (n = 0; n < 5; ++i)
   { 
      for (m = 0; m < 6; ++j)
      {
           scanf ("%d",&mat2[n][m]);
      }
   }
  matrix_product(mat1,mat2,product);   
   return 0;
 }


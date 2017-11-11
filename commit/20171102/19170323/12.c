 #include <stdio.h>
 #define m 4
 #define k 5
 #define n 6

 void matrix_product(int mat1[][k],int mat2[][n],int product[][n])
{
	int i, j, x;
	for (i = 0; i < m; i++)
	for (j = 0; j < n; j++)
    for (x = 0; x < k; x++)
	product[i][j] += mat1[i][x]*mat2[x][j];
}

 int main()
{
	int mat1[m][k], mat2[k][n], product[m][n];
	int i, j, x;

	for (i = 0; i < m; i++)
   { 
    for (j = 0; j < k; j++)
    scanf("%d", &mat1[i][j]);
   }

	for (j = 0; j < k; j++)
   {
    for (x = 0; x < n; x++)
    scanf("%d", &mat2[j][x]);
   }
  
	for (i = 0; i < m; i++)
   {
    for (x = 0; x < n; x++)
		product[i][x] = 0;
   }

	matrix_product(mat1, mat2, product);

	for (i = 0; i < m; i++)
   {
    for (x = 0; x < n; x++)
    printf("%3d", product[i][x]);
    printf("\n");
   }
	return 0;
}

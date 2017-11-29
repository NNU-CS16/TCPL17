#include <stdio.h>

int main()
{
   int n, i, j, k = 0;
   scanf("%d", &n);
   int mat[n][n];
   for (i = 0; i < (n + 1) / 2; i++)
   {
        for (j = i; j <= n - i - 1; j++)
             mat[i][j] = ++k;

        for (j = i + 1; j <= n - i - 1; j++)
             mat[j][n-i-1] = ++k;

        for (j = n - i - 2; j >= i; j--)
             mat[n-i-1][j] = ++k;

        for (j = n - i - 2; j >= i + 1; j--)
             mat[j][i] = ++k;
   }
   for (i=0;i<n;i++)
   {
        for (j = 0; j < n; j++)
             printf("%4d",mat[i][j]);
        printf("\n");
   }
   return 0;
}

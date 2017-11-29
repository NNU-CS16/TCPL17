#include <stdio.h>
int main()
{
   int n, i, j, s;
   printf("请输入N:\n");
   scanf("%d", &n);
   int a[n][n];
   s = 0;
   for(i = 0; i < (n + 1) / 2; i++)
       for(j = 0; j < n; j++)
           if(i == j + 1)
             a[i][j] = s + 4 * ( n - (2 * i - 1)),
             s = a[i][j];
             else if(i == 0 && j == 0)
                 a[i][j] = 1;
                 else if(j >= i && j < n - i && j != 0)
                     a[i][j] = a[i][j - 1] + 1;
                     else if(j < n/2)
                         a[i][j] = a[i-1][j] - 1;
                         else
                             a[i][j] = a[i-1][j] + 1;
    s = 0;
    for(i = n - 1;i >= (n + 1)/2; i--)
       for(j = n - 1; j >= 0 ; j--)
          if(i == j)
		  a[i][j] = a[(n + 1)/2 - 1][j] + j - (n + 1)/2 + 1;
            else if(j >= n - i - 1 && j < i + 1)
                  a[i][j] = a[i][j+1] + 1;
                  else if(j < n/2)
                         a[i][j] = a[i + 1][j] + 1;
                         else
                             a[i][j] = a[i + 1][j] - 1;
   for(i = 0; i < n; i++)
       {
       for(j = 0; j < n; j++)
          printf("%5d", a[i][j]);
          printf("\n");
       }
   return 0;
}


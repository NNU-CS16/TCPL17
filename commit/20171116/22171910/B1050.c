/*螺旋矩阵*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int N, c, d, i, j, k = 0, temp, m, n, a[10000], b[1000][1000];
  scanf("%d", &N);
  for (i = 0; i < N; i++)
	scanf("%d", a[i]);
  for (i = 0; i < N; i++)
    for (j = 0; j < N - 1; j++)
        if (a[j] > a[j + 1])
        {
          temp = a[j];
          a[j] = a[j + 1];
          a[j + 1] = temp;
        }
  for (d = 1; !(d * d >= N && N % d == 0); d++);
  c = N / d;
  for (i = 0; i < n; i++)
	  for (j = 0; j < m; j++)
	  {
		b[i][j] = a[k];
		k++;
	  }
  		for (n = 0; n <= m / 2; n++)
  		{
    	  for (j = n; j <= m - n - 1; j++)
       	    b[n][j] = k++;
  		  for (i = n + 1; i < m - n - 1; i++)
            b[i][m - n - 1] = k++;
    	  for (j = m - n - 1; j > n; j--)
        	b[m - n - 1][j] = k++;
    	  for (i = m - n - 1; i > n; i--)
        	b[i][n] = k++;
  		}
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < m; j++)
    printf("%3d", b[i][j]);
    printf("\n");
  }
}

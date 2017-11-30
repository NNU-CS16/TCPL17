/*打印螺旋矩阵*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int m, n, i, j, k = 1;
  int a[20][20] = {0};
  printf("请输入螺旋矩阵阶数:");
  scanf("%d", &m);
  for (n = 0; n <= m / 2; n++)
  {
	for (j = n; j <= m - n - 1; j++)
		a[n][j] = k++;
	for (i = n + 1; i < m - n - 1; i++)
		a[i][m - n - 1] = k++;
	for (j = m - n - 1; j > n; j--)
		a[m - n - 1][j] = k++;
	for (i = m - n - 1; i > n; i--)
		a[i][n] = k++;
  }
  for (i = 0; i < m; i++)
  {
	for (j = 0; j < m; j++)
	printf("%3d", a[i][j]);
	printf("\n");
  }
  return 0;
}

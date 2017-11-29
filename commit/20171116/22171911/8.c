#include <stdio.h>
#include <stdlib.h>
int main( )
{
    int m, n, i, j, num = 1;
    int a[10][10] = {0};
    printf ("请输入阶：");
    scanf ("%d", &m);
    for (n = 0; n <= m/2; n++)
    {
	for (j = n; j <= m - n - 1; j++)
	    a[n][j] = num++;
	for (i = n + 1; i < m - n - 1; i++)
	    a[i][m-n-1] = num++;
	for (j = m - n - 1; j > n; j--)
	    a[m-n-1][j] = num++;
        for (i = m - n - 1; i > n; i--)
	    a[i][n] = num++;
    }
    for (i = 0; i < m; i++)
    {
	for (j = 0; j < m; j++)
	    printf ("%2d", a[i][j]);
	printf ("\n");
    }
    return 0;
}

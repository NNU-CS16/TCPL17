#include <stdio.h>
void spiral(int n);
int main()
{
    int n;
    printf("输入N的值\n");
    scanf("%d", &n);
    spiral(n);
    return 0;
}

void spiral(int n)
{
    int i, j, b = 1;
    int a[n][n];
    for (i = 0; i <= n / 2; i++)
    {
	for (j = i; j <= n - 1 - i; j++)
	    a[i][j] = b++;
	for (j = i + 1; j <= n - 1 - i; j++)
	    a[j][n - 1 - i] = b++;
	for (j = n - 1 - i - 1; j >= i; j--)
	    a[n - 1 - i][j] = b++;
	for (j = n - 1 - i - 1; j > i; j--)
	    a[j][i] = b++;
    }
    for (i = 0; i < n; i++)
    {
	for (j = 0; j < n; j++)
	    printf("%d\t", a[i][j]);
	printf("\n");
    }
}


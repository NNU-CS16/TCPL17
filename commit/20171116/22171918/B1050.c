#include <stdio.h>
#include <math.h>
int main()
{
	int n, i, j, temp;
	int a[1000], b[1000][1000];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
    	scanf("%d", &a[i]);
	for (i = n - 1; i > 0; i--)
  	{
		for (j = 0; j < i; j++)
		{
			if (a[j] < a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	int x, y = sqrt(n), z;
	int p, q;
	while (n % y != 0) y--;
	x = n / y - 1;
	y--;
	p = x;
	q = y;
	z = 0;
	int num = 0;
	while (num < n)
	{
		if (z == x && z == y)
		b[x][y] = a[num++];		
		for (i = z; i < y && num < n; i++)
		b[z][i] = a[num++];
		for (i = z; i < x && num < n; i++)
		b[i][y] = a[num++];
		for (i = z; i < y && num < n; i++)
		b[x][y - i + z] = a[num++];
		for (i = z; i < x && num < n; i++)	
		b[x - i + z][z] = a[num++];
		z++;
		x--;
		y--;
	}
	for (i = 0; i <= p; i++)
	{
		for (j = 0; j < q; j++)
		printf("%d ", b[i][j]);
		printf("%d\n", b[i][q]);
	}
	return 0;
}

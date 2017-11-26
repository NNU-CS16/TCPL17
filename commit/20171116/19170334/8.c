#include <stdio.h>/*N X N螺旋矩阵*/

int main()
{
	int n;
	scanf("%d", &n);
	int a[100][100];
	int i, j;
	int x = 0, y = 0;
	int s = 0;
	for(i = n; i > 0; i -= 2)
	{
		if(i == 1) a[x][y] = (n * n);
		for(j = 1; j < i && s <= (n * n); j++)
		{
			s++;
			a[x][y] = s;
			y++;
		}
		for(j = 1; j < i && s <= (n * n); j++)
		{
			s++;
			a[x][y] = s;
			x++;
		}
		for(j = 1; j < i && s <= (n * n); j++)
		{
			s++;
			a[x][y] = s;
			y--;
		}
		for(j = 1; j < i && s <= (n * n); j++)
		{
			s++;
			a[x][y] = s;
			x--;
		}
		x++;
		y++;
	}
	for(x = 0; x < n; x++)
	{
		printf("%3d", a[x][0]);
		for(y = 1; y < n; y++)
		{
			printf("%6d", a[x][y]);
		}
		printf("\n");
	}
	return 0;
}

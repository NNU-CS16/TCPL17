#include <stdio.h>
int way(int n, int i, int j);
int main ()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", way(n, 1, 2));
	return 0;
}
int way(int n, int i, int j)
{
	if (0 == n || 1 == n)
	return i;
	if (2 == n)
	return j;
	return way(n-1, j % 100007, (i+j) % 100007);
}

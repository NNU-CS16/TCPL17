#include <stdio.h>
int k;
int a[1000] = {0};
void way(int n);
int main ()
{
	int n;
	scanf("%d%d", &n, &k);
	a[0] = 1;
	a[1] = 1;
	way(n);
	printf("%d\n", a[n]);
	return 0;
}
void way(int n)
{
	int i;
	if (n > 1)
	{
		way(n - 1);
		for (i = (n - k >= 0) ? (n - k) : 0; i < n; i++)
			a[n] = (a[n] + a[i]) % 100007;
	}
}

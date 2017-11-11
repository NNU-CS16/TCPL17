#include <stdio.h>
int LCM (int m, int n);

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
    LCM (m, n);
	printf("%d\n", LCM(m, n));
    return 0;
}

int LCM (int m, int n)
{
	int i, j, min;
	j = m * n;
	if ( m < n)
		min = m;
	else
		min = n;
	for (i = min; i <= j; i++)
	{
		if ( i % m == 0 && i % n == 0)
			break;
		}
	return i;
}

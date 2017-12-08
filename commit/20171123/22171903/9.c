#include <stdio.h>

int main()
{
    int a[100], b[100], n = 0, i, m;
    scanf("%d", &m);

    for (i = 1; i <= m; i++)
    	scanf("%d", &a[i]);
    if (a[1] < a[2])
    {
	b[n] = a[1];
	n++;
    }
    for (i = 2; i < m; i++)
    {
	if (a[i] < a[i + 1] && a[i] > a[i - 1])
	{
	    b[n] = a[i];
	    n++;
	}
    }
    if (a[m] > a[m - 1])
    {
	b[n] = a[m];
	n++;
    }
    printf("%d\n", n);
    for (i = 0; i < n; i++)
	printf("%d ", b[i]);
}

#include <stdio.h>

void b1030(int a[], int n, int p);
int main()
{
    int n, p;
    scanf("%d%d", &n, &p);
    int a[n], i;
    for (i = 0; i < n; i++)
	scanf("%d", &a[i]);
    b1030(a, n, p);
    return 0;
}

void b1030(int a[], int n, int p)
{
    int i, j;
    int t;
    for (i = 1; i < n; i++)
    {
	for (j = i - 1; j >= 0; j--)
	{
	    if (a[i] < a[j])
	    {
	 	t = a[j];
		a[j] = a[i];
		a[i] = t;
	    }
	}
    }
    int o = 0;
    for (i = n; i > 0; i--)
    {
	for (j = 0; j < i; j++)
  	{
	    if (a[i] <= a[j] * p)
	    {
		if (o < i - j)
		{
		    o = i - j;
		}
		break;
	    }
	}
    }
    printf("%d\n", o);
}

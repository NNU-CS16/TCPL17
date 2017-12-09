#include <stdio.h>

int nxd(int a[], int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
   	scanf("%d", &a[i]);
    printf("%d\n", nxd(a, n));
    return 0;
}

int nxd(int a[], int n)
{
    int i, j, o = 0;
    for (i = 0; i < n; i++)
    {
	for (j = i + 1; j < n; j++)
	{
	    if (a[i] > a[j])
	    	o++;
	}
    }
    return o;
}

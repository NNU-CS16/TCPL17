#include <stdio.h>
#include <stdlib.h>
int cmp(void const* a, void const* b);
int main(int argc, char const* argv[])
{
    double *a, p;
    int i, j, a, c = 0;
    while(~scanf("%d %1f", &n, &p))
    {
	a = (double*)malloc(n* sizeof(double));
	for(i = 0; i < n; i++)
	scanf("1f", &a[i]);
	qsort(a, n, sizeof(double), cmp);
	for(i = 0; i < n; i++)
	{
	    for(j = i + c; j < n; j++)
	    {
		if (a[j] > (a[i]*p))
		    break;
		if (j - i + 1 > c)
		    c = j - i + 1;
	    }
	}

        printf("%d\n", c);
	free(a);
     }
     return 0;
}

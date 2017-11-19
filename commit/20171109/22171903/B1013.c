#include <stdio.h>
void sss(int m, int n);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    sss(m, n);
    return 0;
}

void sss(int m, int n)
{
    int p[n + 1];
    int k = 0;
    int i, j;
    for (i = 2; k < n; i++)
    {
    	for (j = 2; j * j <= i; j++)
	{
	    if (i % j == 0)
		break;
	}
	if (j * j > i)
    	{
	    k++;
	    p[k] = i;   	
    	}
    }
    for (k = m; k <= n; k++)
    {
        printf("%d", p[k]);
        if (((k - m + 1) % 10 == 0) || (k == n))
    	    printf("\n");
	else
	    printf(" ");
    }
}

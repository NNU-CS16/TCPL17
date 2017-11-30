#include <math.h>
#include <stdio.h>

void around(int a[], int m, int n);
int main()
{
    int n, i, j, tem, o, p;
    int a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
	scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
	for (j = 0; j < n - 1- i; j++)
	{
	    if (a[j] < a[j + 1])
	    {
		tem = a[j];
		a[j] = a[j + 1];
		a[j + 1] = tem;
	    }
	}
    }
    
    for (i = sqrt(n); i < n; i++)
    {
	for(j = sqrt(n); j > 0; j--)
	{
	    if (i * j == n)
            {
	        o = i;
		p = j;
		break;
	    }
	}
	if (i * j == n)
            break;
    }

    around(a, o, p);
    return 0;
}

void around(int a[], int m, int n)
{
    int b[m][n];
    int i, j, k;
    k = 0;
    printf("%d %d\n", m, n);
    for (i = 0; i < m * n; i++)
    {
	printf("%d", a[i]);
    }
    printf("\n");
    for(i = 0; i <= m / 2 && i < (n + 1) / 2; i++)
    {
	for (j = i; j < n - i; j++, k++)
	{
	    b[i][j] =  a[k];
	}
	for (j = i + 1; j < m - i; j++, k++)
        {
            b[j][n - 1 - i] =  a[k];
            
        }
	for (j = n - 1 - i - 1; j >= i; j--, k++)
        {
            b[m - 1 - i][j] =  a[k];
            
        }
	for (j = m - 1 - i - 1; j > i && i < n / 2; j--, k++)
        {
            b[j][i] =  a[k];
            
        }
    }
    for (i = 0; i < m; i++)
    {
	for (j = 0; j < n; j++)
	{
	    printf("%d\t", b[i][j]);
	}
	printf("\n");
    }
}

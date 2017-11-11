#include <stdio.h>

int GCD_recursive(int m, int n);
int GCD_iterative(int m, int n);

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    GCD_recursive(m, n);
    GCD_iterative(m, n);

    return 0;
}

int GCD_recursive(int m, int n)
{
    int yu;
    if (m < n)
	m = n;
    yu = m % n;

    if (yu == 0)
    { 
        printf("%d\n", n);
	return 0;
    }
    else
        return GCD_recursive(n, yu);
}

int GCD_iterative(int m, int n)
{
    int max, min, yu;
    if (m > n)
    {
        max = m;
	min = n;
    }
    else
    {
        max = n;
	min = m;
    }

    for (; max >= min;)
    {
        yu = max % min;
	if (yu == 0)
	{
	    printf("%d\n", min);
	    break;
	}
	max = min;
	min = yu;
    }
}

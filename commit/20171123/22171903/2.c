#include <stdio.h>
int  bin_insert(int n, int m, int j, int i);
int main()
{
    int m, n, i, j;
    scanf("%d %d %d %d", &n, &m, &j, &i);

    printf("%d\n", bin_insert(n, m, j, i));

    return 0;
}

int bin_insert(int n, int m, int j, int i)
{
    int k, o = 0;
    for (k = m; k != 0; )
    {
        o++;
        k = k >> 1;
    }
    if (((n >> j) << (32 - (i - j + 1))) != 0 || o < (i - j +1))
    {
     	return 0;
    }
    else
    {
	m = m << j;
    	n = n + m;
   	return n;
    }
}

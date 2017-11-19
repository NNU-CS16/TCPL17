#include <stdio.h>
int LCM(int m,int n)
{
    int r, j, k, i, a, b;
    a = m;
    b = n;
    if (a < b)
    {
	j = a;
	a = b;
        b = j;
    }
    r = a % b;
    while (r != 0)
    {
	a = b;
        b = r;
	r = a % b;
    }
    k = m*n;
    i = k/b;
    printf ("%d", i);
}
int main( )
{
    int m, n;
    scanf ("%d%d", &m, &n);
    LCM(m,n);
    return 0;
}

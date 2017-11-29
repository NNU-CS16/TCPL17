#include <stdio.h>
#include <string.h>
int main( )
{
    char a[1000], b[1000];
    int c[2000];
    int len_a, len_b;
    int i, j, k, r = 0, m = 0, n;
    printf ("请输入字符串a,b：");
    scanf ("%s%s", a, b);
    len_a = strlen(a);
    len_b = strlen(b);
    for (i = len_a - 1, j = len_b -1; i >= 0 && j >= 0; i--, j--)
    {
	k = (a[i] - '0') + (b[i] - '0') + r;
        r = k / 10;
	c[m++] = k % 10;
    }
    while (i >= 0)
    {
        int k = (a[i] - '0') + r;
        r = k / 10;
	c[m++] = k % 10;
	i--;
    }
    while (j >= 0)
    {
	int k = (b[j] - '0') + r;
	r = k / 10;
	c[m++] = k % 10;
	j--;
    }
    if (r)
    {
	c[m++] = r;
    }
    for ( n = m - 1; n >= 0; n--)
	printf ("%d", c[n]);
    return 0;
}





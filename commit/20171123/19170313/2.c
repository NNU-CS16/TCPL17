#include <stdio.h>
#include <math.h>
int bin_insert(int n, int m, int j, int i);
int main()
{
    int n, m, j, i, w;
    printf("m的二进制位数小于等于i-j+1\n");
    scanf("%d%d%d%d", &n, &m, &j, &i);
    w = bin_insert(n, m, j, i);
    printf("%d\n", w);
    return 0;
}
int bin_insert(int n, int m, int j, int i)
{
    int a [ 100 ] , b [ 100 ] , p = 0, q = 0, k, l = 0, s = 0, e, f;
    for (p = 0; ; )
    {
        if (n != 0)
        {
            a [ p ] = n % 2;
            p++;
            n = n / 2;
        }
        if (m != 0)
        {
            b [ q ] = m % 2;
            q++;
            m = m / 2;
        }
        if (n == 0 && m == 0)
            break;
    }
    p--;
    q--;
    for (k = j;k < i + 1;k++)
    {
        a [ k ] = b [ l ] ;
        l++;
    }
    for (e = 0;e < p + 1;e++)
    {
        f = pow(2, e);
        s = s + a [ e ] * f;
    }
    return s;
}

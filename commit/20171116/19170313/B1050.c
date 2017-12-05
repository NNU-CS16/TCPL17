#include <stdio.h>
#include <math.h>
int dg(int a [ 100 ] [ 100 ] , int b [ 10000 ] , int i, int j, int k, int l, 
       int N, int m, int n, int c);
int main()
{
    int i = 0, j = 0, k, N, m, n, p, b [ 10000 ] , q, temp, l, c, 
        a [ 100 ] [ 100 ] ;
    printf("不是质数,<=10^4\n");
    scanf("%d", &N);
    for(p=0;p<N;p++)
        scanf("%d",&b[p]);
    for (q = 1;q <= sqrt(N);q++)
    {
        if (N % q == 0)
            n = q;
    }
    m = N / n;
    k = m, l = n;
    for (q = 0;q < N - 1;q++)
    {
        for (p = 0;p < N - 1 - q;p++)
        {
            if (b [ p ] < b [ p + 1 ] )
            {
                temp = b [ p ] ;
                b [ p ] = b [ p + 1 ] ;
                b [ p + 1 ] = temp;
            }
        }
    }
    dg(a, b, i, j, k, l, N, m, n, c);
    return 0;
}
int dg(int a [ 100 ] [ 100 ] , int b [ 10000 ] , int i, int j, int k, int l,
       int N, int m, int n, int c)
{
    int x = 0,p,q;
    if (N == 1)
        printf("%d\n", b [ 0 ] );
    if (N > 1)
    {
        for (x = 0;x < n;x++)
        {
            a [ i ] [ j ] = b [ c ] ;
            j++;
            c++;
        }
        j--;
        i++;
        for (x = 0;x < m - 1;x++)
        {
            a [ i ] [ j ] = b [ c ] ;
            i++;
            c++;
        }
        i--;
        j--;
        for (x = 0;x < n - 1;x++)
        {
            a [ i ] [ j ] = b [ c ] ;
            j--;
            c++;
        }
        j++;
        i--;
        for (x = 0;x < m -2;x++)
        {
            a [ i ] [ j ] = b [ c ] ;
            i--;
            c++;
        }
        i++;
        if (m > 2)
            dg(a, b, i, j + 1, k, l, N, m - 2, n - 2, c);
        if (m == 1 || m == 2)
        {
            for (p = 0;p < k;p++)
            {
                for (q = 0;q < l;q++)
                    printf("%d ", a [ p ] [ q ] );
                printf("\n");
            }
        }
    }
        return 0;
}

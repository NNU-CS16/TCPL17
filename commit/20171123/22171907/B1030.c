#include <stdio.h>
#include <stdlib.h>
#define max( a, b ) ( a > b ? a : b )

int cmp( const void *a, const void *b )
{

    return *( int * )a - *( int * )b;

}

int main()
{

    int m, n, p, i, j;
    int a[100010];
    int b[100010] = { 0 };
    scanf( "%d%d", &n, &p );
    for ( i = 0; i < n; i++ )
        scanf( "%d", &a[i] );
    qsort( a, n, sizeof( int ), cmp );
    for ( i = n - 1; i > 0; i-- )
        for ( j = i - 1; j >= 0; j-- )
            if ( a[i] <= a[j] * p ) b[i] = i - j + 1;

    int maxn = -1;
    for ( i = 0; i < n; i++ ) maxn = max( maxn, b[i] );
    printf( "%d\n", maxn );

    return 0;

}

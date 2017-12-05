#include <stdio.h>

int main()
{

    int n, i, j, k = 0;
    int a[100000], b[100000];
    scanf( "%d", &n );
    for ( i = 0; i < n; i++ ) scanf( "%d", &a[i] );
    for ( i = 0; i < n; i++ )
    {
        int flag = 1;
        for ( j = 0; j < n; j++ )
            if ( j < i && a[j] > a[i] || j > i && a[j] < a[i] ) { flag = 0; break; }
        if ( flag ) { b[k] = a[i]; k++; }

    }

    for ( i = k - 1; i > 0; i-- )
        for ( j = 0; j < i; j++ )
            if ( b[j] > b[j + 1] )
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }

    printf( "%d\n", k );
    for ( i = 0; i < k - 1; i++ ) printf( "%d ", b[i] );
    printf( "%d\n", b[k - 1] );

    return 0;

}

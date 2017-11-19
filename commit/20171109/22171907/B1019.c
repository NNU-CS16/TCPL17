#include <stdio.h>

int main()
{

    int n, i, j, t, t1, t2;
    int a[4];
    scanf( "%d", &n );
    do
    {
        for ( i = 0; i < 4; i++ )
        {
            a[i] = n % 10;
            n /= 10;
        }

        for ( i = 1; i < 4; i++ )
        {
            t = a[i];
            for ( j = i - 1; j >= 0; j-- )
            {
                if ( t <= a[j] ) a[j + 1] = a[j];
                else break;
            }
            a[j+1] = t;
        }
         t1 = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
         t2 = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
         printf( "%04d - %04d = %04d\n", t1, t2, t1 - t2 );
         n = t1 - t2;
    } while ( n != 6174 && n != 0 );

    return 0;

}

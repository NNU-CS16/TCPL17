#include <stdio.h>
/*用递归调用来实现用辗转相除法求最大公约数*/
int GCD_recursive( int m, int n )
{
    if ( m % n > 0 ) return GCD_recursive( n, m % n );
    else return n;
}
/*用循环来实现用辗转相除法求最大公约数*/
int GCD_iterative( int m, int n )
{
    int z = m % n;
    while ( z )
    {
        m = n;
        n = z;
        z = m % n;
    }
    return n;
}

int main()
{

    int m, n;
    scanf( "%d%d", &m, &n );
    if ( n > m ) { m = m ^ n; n = m ^ n; m = m ^ n; }
    printf( "%d %d\n", GCD_recursive( m, n ), GCD_iterative( m, n ) );
    return 0;

}

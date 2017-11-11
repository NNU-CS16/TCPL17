#include <stdio.h>
int GCD_iterative( int m, int n )
{
    int a = m % n;
    while ( a != 0 )
    {
        m = n;
        n = a;
        a = m % n;
    }//辗转相除法
    return n;
}

int GCD_recursive( int m, int n )
{
    if ( m % n > 0 ) 
    return GCD_recursive( n, m % n );
    else return n;
}//递归法


int main()
{

    int m, n;
    scanf( "%d%d", &m, &n );
    if ( n > m ) 
    { m = m+n; 
      n = m-n; 
      m = m-n; 
    }
    printf( "%d %d\n", GCD_recursive( m, n ), GCD_iterative( m, n ) );
    return 0;

}

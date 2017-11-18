#include<stdio.h>
int Hanoi( int n )
{
    if ( n == 1) return 0;
    return 2 * Hanoi( n-1 ) + 2;
}
int main()
{
    int n;
    scanf( "%d", &n );
    printf( "%d\n", Hanoi( n ) );
    return 0;
}

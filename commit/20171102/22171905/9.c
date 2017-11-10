#include <stdio.h>
#include <string.h>

int is_int_pal( int n )
{
    char a[1000];
    sprintf( a, "%d", n );
    int l = strlen( a );
    for ( int i = 0; i < l / 2; i++)
    if ( a[i] != a[l-i-1] )
    return -1;
    return 0;
}

int main()
{
    
    int n;
    scanf( "%d", &n );
    printf( "%d\n", is_int_pal( n ) );
    return 0;

}

#include <stdio.h>
#include <string.h>

int is_int_pal( int n )
{
    char s[1000];
    sprintf( s, "%d", n );
    int len = strlen( s );
    for ( int i = 0; i < len / 2; i++)
        if ( s[i] != s[len-i-1] ) return -1;
    return 0;
}

int main()
{
    
    int n;
    scanf( "%d", &n );
    printf( "%d\n", is_int_pal( n ) );
    return 0;

}

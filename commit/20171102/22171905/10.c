#include <stdio.h>
#include <string.h>

int is_str_pal( const char * str)
{
    int l = strlen( str );
    for ( int i = 0; i < l; i++ )
    if ( str[i] != str[l-i-1] )
    return -1;
    return 0;
}

int main()
{
   
    char a[1000];
    scanf( "%s", a );
    printf( "%d\n", is_str_pal( a ) );
    return 0;  

}

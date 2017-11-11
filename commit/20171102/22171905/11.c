#include <stdio.h>
#include <string.h>

void reverse( char * str )
{
    char s[1000];
    strcpy( s, str );
    int l = strlen( s );
    for ( int i=0; i<l; i++)
        str[i] = s[l-i-1];
}

int main()
{
    char s[1000];
    scanf( "%s", s );
    reverse( s );
    printf( "%s\n", s );
    return 0;
}

#include <stdio.h>
int main()
{
    int a[] = {0, 0};
    long int n = 0;
    char c = getchar();
    while ( c != '\n' )
    {
        if ( c >= 'A' && c <= 'Z' ) n += c - 64;
        if ( c >= 'a' && c <= 'z' ) n += c - 96;
        c = getchar();
    }
    while ( n > 0 )
    {
        a[n%2]++;
        n >>= 1;
    }
    printf( "%d %d\n", a[0], a[1] );
    return 0;
}

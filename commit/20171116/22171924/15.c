#include <stdio.h>
int main()
{
 char c;
 freopen( "test.txt", "r", stdin );
 while ( scanf( "%c", &c )!=EOF )
 printf( "%c", c );
 return 0;
}

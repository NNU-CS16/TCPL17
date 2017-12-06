#include <stdio.h>
#include <stdlib.h>
int compare( const void *a, const void *b );

int main()
{

        int n = 9;
        int *p;
        int a[] = { 0, 1, 2, 3, 4, 5, 9, 10, 11, 12 };
        p = ( int * )bsearch( &n, a, 10, sizeof( int ) , compare );
        if ( p != NULL )
          printf( "%d is in array.\n" );
        else
          printf( "%d is not in array.\n" );
        return 0;
}

int compare( const void *a, const void *b )
{

	return *( int * )a - *( int * )b;
}

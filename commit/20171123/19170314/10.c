#include <stdio.h>
#include <stdlib.h>

int cmp( const void *a, const void *b )
{

	return *( int * )a - *( int * )b;

}

int main()
{

	int a[10] = { 1, 3, 8, 5, 2, 9, 0, 6, 7, 4 };
	qsort( a, 10, sizeof( int ), cmp );
	for ( int i = 0; i < 10; i++ ) printf( "%d ", a[i] );
	printf( "\n" );

	return 0;

}

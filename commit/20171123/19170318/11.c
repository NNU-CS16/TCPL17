#include <stdio.h>
#include <stdlib.h>

int cmp( const void *a, const void *b )
{

	return *( int * )a - *( int * )b;

}

int main()
{

	int n = 9;
	int *p;
	int a[10] = { 0, 1, 2, 3, 4, 5, 9, 10, 11, 12 };
	p = ( int * )bsearch( &n, a, 10, sizeof( int ) , cmp );
	if ( p != NULL ) printf( "Got it!\n" );
	else printf( "Miss it...\n" );

	return 0;

}

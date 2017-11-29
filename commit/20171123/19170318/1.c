#include <stdio.h>

int doit( int n )
{

	int i;
	for ( i = n; i >= 1; i-- )
		if ( i % 2 && n % i == 0 ) return i;

}

int main()
{

	int n, i, sum = 0;
	scanf( "%d", &n );
	for ( i = 1; i <= n; i++ ) sum += doit( i );
	printf( "%d\n", sum );

	return 0;

}

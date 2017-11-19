#include <stdio.h>

int step( int n, int a, int b )
{

		if ( n == 1 || n == 0 ) 
		return a;
		if ( n == 2 ) 
		return b;
		return step( n-1, b % 100007, ( a + b ) % 100007 );

}

int main()
{

		int n;
		scanf( "%d", &n );

		printf( "%d\n", step( n, 1, 2 ) );
		return 0;

}

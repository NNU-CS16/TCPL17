#include <stdio.h>

int k;
int a[1010] = { 0 };

void f( int n )
{
	if ( n > 1 )
	{
		f( n - 1 );
		for ( int i = ( n - k >= 0 ) ? (n - k) : 0; i < n; i++ ) 
		{
			a[n] = ( a[n] + a[i] ) % 100007 ;
		}
	}
}

int main()
{
	int n;
	scanf( "%d%d", &n, &k );
	a[0] = 1;
	a[1] = 1;
	f( n );
	printf( "%d\n", a[n] );	
	return 0;
}

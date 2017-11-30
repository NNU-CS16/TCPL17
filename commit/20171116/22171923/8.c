#include <stdio.h>

int main()
{

	int n, i, j, num = 1;
	int a[1010][1010];
	scanf( "%d", &n );
	int p = 0;
	int q = n - 1;
	while ( p < q )
	{
		for ( i = p; i < q; i++ )
			a[p][i] = num++;
		for ( i = p; i < q; i++ )
			a[i][q] = num++;
		for ( i = p; i < q; i++ )
			a[q][q + p - i] = num++;
		for ( i = p; i < q; i++ )
			a[q + p - i][p] = num++;
		p++;
		q--;
	}
	if ( p == q ) a[p][q] = num;

	for	( i = 0; i < n; i++ )
	{
		for ( j = 0; j < n - 1; j++ )
			printf( "%-4d", a[i][j] );
		printf( "%d\n", a[i][n - 1]);
	}

	return 0;

}

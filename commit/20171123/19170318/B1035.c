#include <stdio.h>
#include <stdlib.h>
#define max( a, b ) ( a > b ? a : b )
#define min( a, b ) ( a < b ? a : b )

int a[1000], b[1000];
int n;

void Do_Merge( int arr[] )
{

	int c[1000];
	int i, j, k, gap, t;
	int _flag = 0;
	for ( gap = 1; gap < 2 * n; gap *= 2 )
	{
		if ( _flag == 0 ) _flag = 1;
		else _flag = 2;

		for ( i = 0; i <= max( n - 2 * gap, 0 ); i += 2 * gap )
		{
			int p = 0;
			j = i;
			k = i + gap;
			while ( j < i + gap && k < min( n, i + 2 * gap ) )
			{
				if ( arr[j] < arr[k] ) { c[p] = arr[j]; j++; }
				else { c[p] = arr[k]; k++; }
				p++;
			}
			if ( j < i + gap ) for ( t = j; t < i + gap; t++ ) { c[p] = arr[t]; p++; }
			else for ( t = k; t < min( n, i + 2 * gap ); t++ ) { c[p] = arr[t]; p++; }
			for ( t = i; t < i + 2 * gap; t++ ) arr[t] = c[t - i];
		}

		if ( _flag == 1 )
			for ( t = 0; t < n; t++ ) if ( arr[t] != b[t] ) _flag = 0;
		if ( _flag == 2 )
		{
			for ( t = 0; t < n - 1; t++ ) printf( "%d ", arr[t] );
			printf( "%d\n", arr[n - 1] );
			break;
		}
	}
}

void Do_Insertion( int arr[] )
{
	
	int i, j, k, temp, flag;
	for ( i = 1; i < n; i++ )
	{
		flag = 1;
		temp = a[i];
		for ( j = i; j > 0; j-- )
			if ( arr[j - 1] > temp ) arr[j] = arr[j - 1];
			else break;
		arr[j] = temp;
		for ( k = 0; k < n; k++ )
			if ( arr[k] != b[k] ) { flag = 0; break; }
		if ( flag )
		{
			temp = a[i + 1];
			for ( j = i + 1; j > 0; j-- )
				if ( arr[j - 1] > temp ) arr[j] = arr[j - 1];
				else break;
			arr[j] = temp;
			printf( "Insertion Sort\n" );
			for ( j = 0; j < n - 1; j++ ) printf( "%d ", arr[j] );
			printf( "%d\n", arr[n - 1] );
			break;
		}
	}
	if ( flag == 0 )
		{
			printf( "Merge Sort\n" );
			Do_Merge( a );
		}
	

}


int main()
{

	int c[1000];
	int i;
	scanf( "%d", &n );
	for ( i = 0; i < n; i++ )
		scanf( "%d", &a[i] );
	for ( i = 0; i < n; i++ )
		scanf( "%d", &b[i] );
	for ( i = 0; i < n; i++ ) c[i] = a[i];
	Do_Insertion( c );

	return 0;

}

#include <stdio.h>

int Merge_Sort( int arr[], int left, int right )
{

	int sum = 0, temp[40000] = { 0 };
	int mid = ( left + right ) / 2;
	if ( left < mid ) sum += Merge_Sort( arr, left, mid );
	if ( mid + 1 < right ) sum += Merge_Sort( arr, mid + 1, right );
	int i = left, j = mid + 1, p = 0;
	while ( i <= mid && j <= right )
	{
		if ( arr[i] <= arr[j] )
		{
			temp[p] = arr[i];
			++i;
		}
		else
		{
			temp[p] = arr[j];
			sum += mid - i + 1;
			++j;
		}
		++p;
	}
	if ( i <= mid ) for ( j = i; j <= mid; ++j, ++p ) temp[p] = arr[j];
	else for ( i = j; i <= right; ++i, ++p ) temp[p] = arr[i];
	for ( i = left; i < p + left; ++i ) arr[i] = temp[i - left];
	
	return sum;
}

int main()
{

	int n, i, a[40000];
	scanf( "%d", &n );
	for ( i = 0; i < n; ++i )
		scanf( "%d", &a[i] );
	printf( "%d\n", Merge_Sort( a, 0, n  - 1 ) );
	
	return 0;

}

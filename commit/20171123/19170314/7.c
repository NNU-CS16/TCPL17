void MergeSort( int arr[], int left, int right )
{

	int temp[10000] = { 0 };
	int mid = ( left + right ) / 2;
	if ( left < mid ) MergeSort( arr, left, mid );
	if ( mid + 1 < right ) MergeSort( arr, mid + 1, right );
	int i = left;
	int j = mid + 1;
	int p = 0;
	while ( i <= mid && j <= right )
	{
		if ( arr[i] < arr[j] ) { temp[p] = arr[i]; i++; }
		else { temp[p] = arr[j]; j++; }
		p++;
	}
	if ( i > mid )
		for ( int k = j; k <= right; k++, p++ )
			temp[p] = arr[k];
	else
		for ( int k = i; k <= mid; k++, p++ )
			temp[p] = arr[k];

	for ( int k = left; k <= right; k++ )
		arr[k] = temp[k - left];

}

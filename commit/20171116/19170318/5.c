void SelectionSort( int arr[], int left, int right )
{

	int i, j, t;
	for ( i = left; i <= right; i++ )
		for ( j = i; j <= right; j++ )
			if ( arr[i] > arr[j] )
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}

}

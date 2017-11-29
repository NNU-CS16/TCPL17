void BubbleSort( int arr[], int left, int right )
{

	int t, flag;
	for ( int i = left; i < right; i++ )
	{
		flag = 1;
		for ( int j = left; j < right - i + left; j++ )
			if ( arr[j] > a[j + 1] )
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				flag = 0;
			}
		if ( flag ) break;
	}

}

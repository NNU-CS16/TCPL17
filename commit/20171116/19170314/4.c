void insertionSort( int arr[], int left, int right )
{

        int i, j, t;
        for ( i = left + 1; i <= right; i++ )
        {
                t = arr[i];
                for ( j = i - 1; j >= left; j-- )
                        if ( t < arr[j] ) arr[j + 1] = arr[j];
                        else break;
                arr[j + 1] = t;
        }

}





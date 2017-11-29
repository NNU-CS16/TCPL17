nt is_sorted( int arr[], int left, int right )
{

        for ( int i = left + 1; i <= right; i++ )
                if ( arr[i - 1] > arr[i] ) return 0;
        return 1;

}
~                                                                               
~                  

nt binary_search_recursive( int arr[], int left, int right, int query )
{

        if ( left == right && query != arr[left] ) return -1;
        int mid = ( left + right ) / 2;
        if ( query == arr[mid] ) return mid;
        else
                if ( query > arr[mid] )
                        return binary_search_recursive( arr, mid, right, query );
                else return binary_search_recursive( arr, left, mid, query );

}

int binary_search_iterative( int arr[], int left, int right, int query )
{

        int mid;
        while ( left < right )
        {
                mid = ( left + right ) / 2;
                if ( query == arr[mid] ) return mid;
                else if ( query > arr[mid] ) left = mid;
                         else right = mid;

        }

        return -1;

}


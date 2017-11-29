int is_sorted( int arr[], int left, int right )
{
    int i;
    for ( i = left ; i <= right - 1; i++ )
    {
     if ( arr[i] > arr[i + 1] ) 
     return 0;
     else return 1;
    }
}

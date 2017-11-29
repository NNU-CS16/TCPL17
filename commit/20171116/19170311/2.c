void BubbleSort (int arr[], int left, int right)
 {
    int i, j, temp;
    for (i = left; i < right; i++)
        for (j = left; j < right ; j++)
            if (arr[j] > arr[j+1])
            {   
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }          
 }
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
 

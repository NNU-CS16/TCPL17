void InsertionSort(int arr[], int left, int right)
{
    int i, j, temp;
    for(i = left + 1; i <= right; i++)
    {
        temp = arr[i]; 
        for(j = i - 1; j >= left; j--)
        {
            if(arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
        }
        if(j != i - 1)
            arr[j + 1] = temp;
    }
    for(i = left; i < right; i++)
    printf("%d ", arr[i]);
    printf("%d\n", arr[right]);
}

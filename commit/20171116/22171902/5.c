void SelectionSort(int arr[], int left, int right)
{
    int min , i , j , temp;
    for (i = left; i <= right - 1; i++)
    {
        min = i;
        for (j = i + 1; j <= right; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

    }


    for (i = left; i<= right; i++)
        printf ("%d\t" , arr[i]);
}



    #include <stdio.h>
    void exchange(int* data1, int* data2)
    {
        int temp;
	temp = *data1;
	*data1 = *data2;
	*data2 = temp;
    }
    void SelectionSort(int arr[], int left, int right)
    {
	for(int i = left - 1; i < right; i++)
	{
	    int i1 = i;
            for(int j = i + 1; j < right; j++)
	        if(arr[j] < arr[i1])
	            i1 = j;
	    if (i1 != i)
		exchange(&arr[i1], &arr[i]);
	}
    }
    int main()
    {
        int arr[20], right, left;
	int i;
	printf("please input arr[20]:");
	for(i = 0; i <= 19; i++)
	    scanf("%d", &arr[i]);
	printf("please input left:");
	scanf("%d", &left);
	printf("please iput right:");
	scanf("%d", &right);
	SelectionSort(arr, left, right);
	for(i = 0; i <= 19; i++)
	    printf("%d ", arr[i]);
	return 0;
    }

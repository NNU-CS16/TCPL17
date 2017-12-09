    #include <stdio.h>
    #include <stdlib.h>
    void MergeSort( int arr[], int left, int right )
    {
        int temparr[100] = { 0 };
	int mid = ( left + right ) / 2;
	if (left < mid)
	    MergeSort(arr, left, mid);
	if (mid + 1 < right)
	    MergeSort(arr, mid + 1, right);
        int i = left;
	int j = mid + 1;
	int p = 0;
	while(i <= mid && j <= right)
	{
	    if(arr[i] < arr[j])
	    {
	        temparr[p] = arr[i];
		i++;
	    }
	    else
	    {
		temparr[p] = arr[j];
		j++;
	    }
	    p++;
	}
	if(i > mid)
	    for(int k = j; k <= right; k++, p++)
	        temparr[p] = arr[k];
	else
	    for(int k = i; k <= mid; k++, p++)
	        temparr[p] = arr[k];
	    for(int k = left; k <= right; k++)
		arr[k] = temparr[k - left];
    }
    int main()
    {
        int arr[15], left, right;
	printf("please input arr[15]:");
	for(int i = 0; i <= 14; i++)
	    scanf("%d", &arr[i]);
	printf("please input left:");
	scanf("%d", &left);
	printf("please input right:");
	scanf("%d", &right);
	MergeSort(arr, left, right);
	for(int i = 0; i <= 14; i++)
	    printf("%d ", arr[i]);
	printf("\n");
	return 0;
    }

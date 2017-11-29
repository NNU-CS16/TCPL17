    #include<stdio.h>  
    void InsertionSort(int arr[], int left, int right)
    {  
        int i = 0;  
	int j = 0;  
	int tmp = 0;  
	for(i = left - 1; i < right; i++)
	{  
	    tmp = arr[i];
	    j = i - 1;
	    while(j >= 0 && tmp < arr[j])
	    {  
	        arr[j + 1] = arr[j];
		j--;   
	    }  
	    arr[j + 1] = tmp;
	}
    }  
    int main()   
    {  
        int i = 0, left, right;
	int arr[10];
	printf("please input arr[]:");
	for(i = 0; i <= 9; i++)
	    scanf("%d", &arr[i]);
	printf("please input left:");
	scanf("%d", &left);
	printf("please input right");
	scanf("%d", &right);
	InsertionSort(arr, left, right);
	for(i = 0; i <= 9; i++)
        {
	    printf("%d ", arr[i]);
	}  
	return 0;
    }  

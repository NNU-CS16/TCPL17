    #include <stdio.h>
    int binary_search_recursive(int arr[], int left, int right, int query)
    {
	if(left > right)
	    return -1;
	int middle;
	middle = (left + right) / 2;
        if(arr[middle - 1] == query)
	    return middle;
	if(arr[middle - 1] < query)
	{
	    left = middle + 1;
	    return binary_search_recursive(arr, left, right, query);
	}
	if(arr[middle - 1] > query)
	{
	    right = middle - 1;
	    return binary_search_recursive(arr, left, right, query);
	}
    }
    int binary_search_iterative(int arr[], int left, int right, int query)
    {	
        while (left <= right)
	{
	    int middle = (left + right) / 2;
	    if (arr[middle - 1] == query)
	        return middle;
	    else 
		if(arr[middle - 1] > query)
		    right = middle - 1;
		else
		    left = middle + 1;
	}
	return -1;
    }
    int main()
    {
        int a[30];
	int i, j, temp;
        int left, right, query;
	for(i = 0; i < 30; i++)
	    a[i] = 1 + (int)(rand()%100);
	for(i = 0; i<=29; i++)
	{
	    for(j = i; j <= 29; j++)
	        if(a[i] > a[j])
		{
		    temp = a[i];
		    a[i] = a[j];																							       a[j] = temp;
		}
	}
	for(i = 0; i <= 29; i++)
	    printf("%d ",a[i]);
	printf("\n");
	printf("please input left:");
	scanf("%d", &left);
	printf("please input right:");
	scanf("%d", &right);
	printf("plase input query:");
	scanf("%d", &query);
	printf("%d\n",binary_search_iterative(a, left, right, query));
	printf("%d\n",binary_search_recursive(a, left, right, query));
	return 0;
    }


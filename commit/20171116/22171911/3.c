#include <stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query)
{
    int mid;
    while (left <= right)
    {
	mid = (left + right) / 2;
	if (query < arr[mid])
	    right = mid - 1;
	else if (query > arr[mid])
	    left = mid + 1;
        else if (query == arr[mid])
            return mid;
    }
    return -1;    
}
int binary_search_recursive(int arr[], int left, int right, int query)
{
    int mid;
    if (left > right)
	return -1;
    else
    {
	mid = (left + right) / 2;
        if (arr[mid] == query)
	{
	    return mid;
	}
	else if (arr[mid] > query)
	    binary_search_recursive(arr, left, right - 1, query);
	else if (arr[mid] <query)
	    binary_search_recursive(arr, left + 1, right, query);
    }
}


int main( )
{
    int query, left, right, arr[1000];
    int i = 0;
    printf ("请输入区间，查找元素：");
    scanf ("%d%d%d", &left, &right, &query);
    printf ("请输入数组：");
    for (i = left; i <= right; i++)
    {
	scanf ("%d", &arr[i]);
    }
    binary_search_iterative(arr, left, right, query);
    binary_search_recursive(arr, left, right, query);
    return 0;
}

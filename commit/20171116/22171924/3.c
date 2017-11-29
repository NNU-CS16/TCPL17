#include <stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query)
{
    int mid = (left + right) / 2;
    if (arr[left] == query) 
	return left;
    if (arr[right] == query)
	return right;
    if (arr[mid] == query)
	return mid;
    if (arr[mid] > query)
	return binary_search_recursive(arr, left, mid, query);
    if (arr[mid] < query)
	return binary_search_recursive(arr, mid, right,query);
    else
	return -1;
}
int binary_search_iterative(int arr[], int left, int right, int query)
{
    int mid = (left + right) / 2;
    while (left <= right)
    {
	if (arr[mid] == query)
            return mid;
	if (arr[mid] > query)
            right = mid - 1;
	if (arr[mid] < query)
	    left = mid +1;
	    mid = (left +right) / 2;
    }
    if (left >right)
        return -1;
} 
int main()
{
    int arr[1000];
    int left, right, query;
    int i;
    scanf("%d%d%d", &left, &right, &query);
    for (i = 0; i <= right; i++)
	scanf("%d", &arr[i]);
    printf("%d %d\n", binary_search_recursive(arr, left, right, query), binary_search_iterative(arr, left, right, query));
    return 0;
}

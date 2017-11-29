#include <stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);

int binary_search_recursive(int arr[], int left, int right, int query)
{
	int mid = (left + right) / 2;
	if (left == right && query != arr[left])
	return -1;
	if (query == arr[mid]) 
		return mid;
	else if (query > arr[mid])
		return binary_search_recursive(arr, mid, right, query);
	else return binary_search_recursive(arr, left, mid, query);
}

int binary_search_iterative(int arr[], int left, int right, int query)
{
	int mid = (left + right) / 2;
	while (left < right)
	{
		if (query == arr[mid]) 
			return mid;
		else if (query > arr[mid]) 
			left = mid;
		else right = mid;
	}
	return -1;
}

int main()
{
	int arr[10];
	int left, right,query;
	int i = 0;
	printf("输入arr[]:\n");
	for (;i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("输入left,right,query:");
	scanf("%d %d %d", &left, &right, &query);
	binary_search_recursive(arr, left, right, query);
	binary_search_iterative(arr, left, right, query);
	printf("%d\n", binary_search_recursive(arr, left, right, query));
	printf("%d\n", binary_search_iterative(arr, left, right, query));
	return 0;
}

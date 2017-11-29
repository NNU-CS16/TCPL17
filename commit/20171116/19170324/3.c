#include <stdio.h>

int binary_search_recursive(int arr[], int left, int right, int query)
{
   	int mid = (right + left) / 2;
	if (arr[mid] = query)
		return mid;
	if (arr[mid] > query)
		binary_search_recursive(arr, left, mid + 1, query);
	if (arr[mid] < query)
		binary_search_recursive(arr, mid + 1, right, query);
	else
		return -1;
}

int binary_search_iterative(int arr[], int left, int right, int query)
{
	int i, mid, r = right, l = left;
	for (i = 0; i <= r - l; i++)
	{
		mid = (right + left) / 2;
		if (arr[mid] == query)
		{
			return mid;
			break;
		}
		if (arr[mid] > query)
			right = mid + 1;
		if (arr[mid] < query)
			left = mid + 1;
	}

	return -1;
}

int main()
{
	int k, arr[20], left, right, query;
	for (k = 0; k <= 9; ++k)
		scanf("%d", &arr[k]);
	scanf("%d%d%d", &left, &right, &query);
	printf("%d\n", binary_search_recursive(arr, left, right, query));
	printf("%d\n", binary_search_iterative(arr, left, right, query));

	return 0;
}

/*3.c_二分法*/
#include <stdio.h>

int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);

int main()
{
    int arr[1000], left, right;
    int i,query;
    printf("请输入左、右区间：");
    scanf("%d%d", &left, &right);
	printf("请输入待查找数：");
	scanf("%d", &query);
    printf("请输入严格升序数组：");
    for (i = left; i <= right; ++i)
        scanf("%d", &arr[i]);

    printf("%d\n", binary_search_iterative(arr, left, right, query));
    printf("%d\n", binary_search_iterative(arr, left, right, query));

    return 0;
}

int binary_search_recursive(int arr[], int left, int right, int query)
{
	int mid;
	mid = (right - left) / 2;
	if (left < right - 1 && query <= arr[right] && query >= arr[left])
	{
		if (query > arr[mid])
			return binary_search_recursive(arr, mid, right, query);
		else if (query < arr[mid])
			return binary_search_recursive(arr, left, mid, query);
		else if (query == arr[mid])
			return mid;
	}
	else
		return -1;
}

int binary_search_iterative(int arr[], int left, int right, int query)
{
	int mid;
	while (left < right - 1 && query <= arr[right] && query >= arr[left])
	{
		mid = (right - left) / 2;
		if (query > arr[mid])
			left = mid;
		else if (query < arr[mid])
			right = mid;
		else if (query == arr[mid])
			return mid;
	}
	return -1;
}


#include <stdio.h>
int binary_search_iterative(int arr[], int left, int right, int query)
{
	int i = (left + right) / 2;
	while (arr[i] != query)
		if (arr[i] > query)
			i = (i + left) / 2;
	    else
		    i = (right + i) / 2;
	printf("循环方式:待查找关键字的下标为");
	printf("%d\n", i);
}

int binary_search_recursive(int arr[], int left, int right, int query)
{
	int i = (left +right) / 2;
	if (arr[i] == query)
	{
		printf("递归方式:待查找关键字的下标为");
	    printf("%d\n", i);
	    return 0;
	}
	else
	{
	    if (arr[i] > query)
		    right = i;
	    else
		    left = i;	
	    return binary_search_recursive(arr, left, right, query);
	}
}

int main()
{
	int arr[100], len, left, right, query;
	int i;
	printf("输入数组长度:");
	scanf("%d", &len);
	printf("输入一组严格升序的数组:");
	for (i = 0; i < len; ++i)
		scanf("%d", &arr[i]);
	printf("输入待查找的区间和关键字:");
	scanf("%d%d%d", &left, &right, &query);
	binary_search_iterative(arr, left, right, query);
	binary_search_recursive(arr, left, right, query);
	return 0;
}




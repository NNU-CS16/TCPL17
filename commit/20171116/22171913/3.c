#include <stdio.h>
#include <string.h>
int binary_search_recursive(int arr[], int right, int left, int query);
int main()
{
    int i,right, left, query, arr[i];
    scanf("%d %d\n", &right, &left);
    for(i = 0; i <= right - left; i++)
    {
	scanf("%d\n", &arr[i]);
    }
    printf("输入要查询的元素: ");
    scanf("%d\n", &query);
    binary_search_recursive(arr, right, left, query);
    return 0;
}
int binary_search_recursive(int arr[], int right, int left, int query)
{    
    int flag = 0;
    int mid = (right + left) / 2;
    while (right >= left)
    {
	if (arr[mid] == query)
	{
	    flag = 1;
	    break;
	}
	if (arr[mid] > query)
	    right = mid - 1;
	else if (arr[mid] < query)
	    left = mid + 1;
    }
    if (flag == 1)
	printf("要查询的元素在%d位置.\n", mid + 1);
    else
	printf("-1");

}


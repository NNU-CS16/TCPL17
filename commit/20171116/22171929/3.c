#include <stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);

int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int query,left = 0,right = 9;
    scanf("%d",&query);
    binary_search_recursive(arr,left,right,query); 
    //binary_search_iterative(arr,left,right,query); 
    return 0;
}
int binary_search_iterative(int arr[], int left, int right, int query)
{
    int mid,i,flag = 0;
    while (left <= right)
    {
	mid = (left + right) / 2;
	if (query==arr[mid])
	{
	    flag = 1;
            break;
	}
	if (query>arr[mid])
            left = mid + 1;
	else 
	    right = mid - 1;
    }
    if (flag == 1)
	printf("要查询的元素在%d位置",mid+1);
    else 
        printf("没有这样的元素");
    return 0;
}
int binary_search_recursive(int arr[], int left, int right, int query)
{
    int mid;
    mid = (left + right) / 2;
    if (query == arr[mid])
	printf("要查找的元素在%d位置",mid+1);
    else if (query > arr[mid])
    {
	left = mid + 1;
	return binary_search_recursive(arr,left,right, query);
    }
    else if (query < arr[mid])
    {
	right = mid -1;
	return binary_search_recursive(arr,left,right,query);
    }
    return 0;
}

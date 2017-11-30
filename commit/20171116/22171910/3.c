/*数组二分查找*/
#include <stdio.h>
int binary_search_recursive(int arr[1000], int left,
							int right, int query);
int binary_search_iterative(int arr[1000], int left,
							int right, int query);

int main()
{
  int arr[1000], left, right, query, i;
  printf("请输入数组区间及关键字:");
  scanf("%d%d%d", &left, &right, &query);
  printf("请输入有序数组:");
  for (i = 0; i < right; i++)
	  scanf("%d", &arr[i]);
  printf("%d", binary_search_recursive(arr, left, right, query));
  printf("%d", binary_search_iterative(arr, left, right, query));
  return 0;
}

int binary_search_recursive(int arr[1000], int left,
							int right, int query)
{
  int mid;
  for ( ; left <= right; )
  {
	mid = (left + right) / 2;
	if (arr[mid] < query)
	  mid = left;
	else if (arr[mid] > query)
	  mid = right;
	else if (arr[mid] == query)
	  return mid;
  }
  return -1;
}

int binary_search_iterative(int arr[1000], int left,
							int right, int query)
{
  int mid;
  if (left <= right)
  {
	mid = (left + right) / 2;
	if (arr[mid] == query)
	   return mid;
	else if (arr[mid] > query)
	   return binary_search_iterative(arr, left, mid - 1, query);
	else if (arr[mid] < query)
	   return binary_search_iterative(arr, mid + 1, right, query);
  }
  return -1;
}

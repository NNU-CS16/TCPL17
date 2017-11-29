#include <stdio.h>
int binary_search_recursive(int arr[],int left,int right,int query);
int binary_search_iterative(int arr[],int left,int right,int query);

int main()
{
  int i, left, right, query, arr[100];
  for ( i = left; i <= right-left; i++)
  {
   scanf("%d", &arr[i]);
  }

  scanf("%d%d%d", &left, &right, &query);
  printf("%d\n", binary_search_recursive(arr, left, right, query));
  printf("%d\n", binary_search_recursive(arr, left, right, query));
  return 0;
}

int binary_search_recusive(int arr[], int left, int right, int query)
{
  int mid = (left+right)/2;
  if(arr[mid] = query)
    return mid;
  if(arr[mid] > query)
   return binary_search_recusive(arr, left, (mid-1), query);
  if(arr[mid] < query)
   return binary_search_recusive(arr, (mid+1), right, query);
  if(arr[left] = query)
   return left;
  if(arr[right] = query)
   return right;
}

int binary_search_recursive(int arr[], int left, int right, int query)
{
  int mid;
  while (left <= right)
  {
    mid = (left+right)/2;
    if(arr[mid] > query)
     right = mid-1;
    if(arr[mid] < query)
     left = mid+1;
    if(arr[mid] = query)
     return mid;
  }
     return -1;
}

 
  
  

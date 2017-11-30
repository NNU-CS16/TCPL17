#include<stdio.h>
int binary_search_iterative(int arr[], int left, int right, int query);
int binary_search_recursive(int arr[], int left, int right, int query);
int main()
{
 int left,right,query,i;
 int arr[1000];
 printf("请输入数组：");
 for (i = 0; i < 10; i++)
   scanf("%d",&arr[i]);
 printf("请输入查找区间和代查找数:");
 scanf("%d%d%d",&left,&right,&query);
 printf("%d %d\n",binary_search_recursive(arr, left, right, query), binary_search_iterative(arr, left, right, query));
 return 0;
 
}
int binary_search_iterative(int arr[10], int left, int right, int query)
{
 int mid=(left+right)/2;
 while(left<=right)
  {
    if (arr[mid]==query)
         return mid;
    if (arr[mid] > query)
        right=mid-1;
    if (arr[mid] < query)
        left=mid+1;
    mid=(left+right)/2;
  }
  if(left>right)
  return -1;
}
int binary_search_recursive(int arr[], int left, int right, int query)
{
 int mid=(left+right)/2;
 if(arr[left]==query)
     return left;
 if(arr[right]==query)
     return right;
 if(arr[mid]==query)
     return mid;
 if(arr[mid]>query)
     return binary_search_recursive(arr, left, mid, query);
 if(arr[mid]<query)
     return binary_search_recursive(arr, mid, right, query);
 else
   return -1;
}

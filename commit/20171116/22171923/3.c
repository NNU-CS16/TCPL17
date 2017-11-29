#include <stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);
int main()
{
    int arr[10];
    int left, right;
    int i;
    int query;
    int k;
    int l;
    printf("Please input arr[10]:");
    for (i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("Please input query:");
    scanf("%d", &query);
    printf("Please input left, right:");
    scanf("%d%d", &left, &right);
    k=binary_search_iterative(arr, left, right, query);
    if (k == -1)
        printf("没有这样的数值.\n");
    else
        printf("要查明的数值在%d位置.\n");
    l=binary_search_recursive(arr, left, right, query);
    if (l == -1)
        printf("没有这样的数值.\n");
    else
        printf("要查明的数值在%d位置.\n");
}
int binary_search_iterative(int arr[], int left, int right, int query)
{
    int mid;
    int flag;
    while (left <= right)
    {
        mid=(left+right)/2;
        if (query == arr[mid])
        {
            flag=1;
            break;
        }
        if (query>arr[mid])
            left=mid+1;
        else
            right=mid-1;
    }
    if (flag == 1)
        return mid+1;
    else
        return -1;
}
int binary_search_recursive(int arr[], int left, int right, int query)
{
    int mid;
    int flag;
    mid=(left+right)/2;
    if ((query<arr[left]) || (query>arr[right]))
        return -1;
    if (query == arr[mid])
        return mid+1;
    else if (query>arr[mid])
    {
        left=mid+1;
        binary_search_recursive(arr, left, right, query);
    }
    else
    {
        right=mid-1;
        binary_search_recursive(arr, left, right, query);
    }
}

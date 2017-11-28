#include<stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);
int main()
{
    int a, b, n;
    int str[10] = {72, 74, 76, 78, 80, 82, 84, 86, 88, 90};
    scanf("%d", &n);
    a = binary_search_recursive(str, 0, 9, n);
    b = binary_search_iterative(str, 0, 9, n);
    if(a == -1)
        printf("没有这个数\n");
    else
        printf("位置为%d 结果为%d\n", a, b);
    return 0;
}

int binary_search_recursive(int arr[], int left, int right, int query)
{    
    int low = left, high = right, mid, flag = 0;
    while (low <= high)
{
    mid = (low+high)/2;
    if (arr[mid] ==query)
    {
        flag = 1;
        break;
    }
    if (query > arr[mid])
        low = mid +1;
    if (query < arr[mid])
        high = mid - 1;
}
    if (flag == 1)
        return mid+1;
        return -1;
}
int binary_search_iterative(int arr[], int left, int right, int query)
{
    int mid, low =left, high =right;
    if (low > high)
        return -1;
    mid =(low +high)/2;
    if(arr[mid] ==query)
        return 0;
    if(query < arr[mid])
        return binary_search_iterative(arr, low, mid-1, query);
    if(query >arr[mid])
        return binary_search_iterative(arr, mid+1, high, query);
}


























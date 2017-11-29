#include <stdio.h>
int binary_search_resursive (int arr[], int left, int right, int query);
int binary_search_iterative (int arr[], int left, int right, int query)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > query)
            right -= 1;
        else if (arr[mid] < query)
                left += 1;
             else  return mid;
    }
    return -1;
}
int binary_search_resursive (int arr[], int left, int right, int query)
{
    int mid = (left + right) / 2;
    if (arr[mid] == query)
        return mid;
    if (arr[mid] > query)
        return binary_search_resursive(arr, left, right + 1, query);
    else if (arr[mid] < query)
        return binary_search_resursive(arr, left + 1, right, query);
}


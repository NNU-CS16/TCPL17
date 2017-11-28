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

int main ()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 32, 45,
                64, 78, 87, 98};
    int query = 64;
    printf ("%d\n", binary_search_iterative (arr, 3, 10, query));
    printf ("%d\n", binary_search_resursive (arr, 3, 10, query));
    return 0;
}



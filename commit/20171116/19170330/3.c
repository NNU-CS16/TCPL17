#include <stdio.h>

int binary_search_recursive(int arr[], int left, int right, int query)
{
    int middle;
    if (left > right)
    {
        return -1;}
    else 
        {
        middle = (left + right)/2;
        if (arr[left] == query)
            return left;
        else if (arr[right] == query)
            return right;
        else if (arr[middle] == query)
            return middle;
        else if (arr[middle] < query)
            binary_search_recursive(arr, middle +1, right, query);
        else if (arr[middle] > query)
            binary_search_recursive(arr, middle +1, right, query);
        }
}

int binary_search_iterative(int arr[], int left, int right, int query)
{
    int middle;
    if (left <= right)
    {
        middle = (left + right)/2;
        if (arr[left] == query)
            return left;
        else if (arr[right] == query)
            return right;
        else if (arr[middle] == query)
            return middle;
        else if (arr[middle] < query)
            left = middle + 1;
        else if (arr[middle] > query)
            right = middle - 1;
     }
     else 
         return -1;
}

int main ()
{
    int arr[100];
    int left,right,query;
    int i;
    for (i = 0;i<100; i++)
    {
        scanf("%d",arr[i]);
        if (getchar() == '\n')
            break;
    }
    scanf("%d%d%d",&left,&right,&query);
    printf("digui:%d\n",binary_search_recursive(arr, left, right, query));
    printf("xunhuan:%d\n",binary_search_iterative(arr, left, right, query));

    return 0;
}

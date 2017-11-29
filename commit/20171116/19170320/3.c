#include <stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_itcursive(int arr[], int left, int right, int query);

int n;
int main()
{
    scanf("%d",&n);
    int *arr[n],i;
    printf("input the 有序數組");
    for (i=0; i<n; i++)
        scanf("%d",&*arr[i]);
    int left,right,query;
    scanf("%d %d %d",&left,&right,&query);
    binary_search_recursive(arr[n], left, right, query);
    binary_search_itcursive(arr[n], left, right, query);
    return 0;
}

int binary_search_recursive(int arr[], int left, int right, int query)
{
    int mid=(left+right)/2;
    while (left<=right)
    {
        if (arr[mid]==query)
            return arr[mid];
        else
            if (arr[mid]<query)
                return binary_search_recursive(arr, mid+1, right, query);
            else 
                if (arr[mid]>query)
                    return binary_search_recursive(arr, left, mid-1, query);
    }
    printf("%d",mid);
}

int binary_search_itcursive(int arr[], int left, int right, int query)
{
    int mid=(left+right)/2;
    while (left<=right)
    {
        if (arr[mid]==query)
            return arr[mid];
        else
            if (arr[mid]<query)
            {
                left=mid+1;
                mid=(left+right)/2;
            }
            else
                if(arr[mid]>query)
                {
                    right=mid-1;
                    mid=(left+right)/2;
                }
    }
    printf("%d",mid);
}

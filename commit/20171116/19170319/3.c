#include <stdio.h>
int binary_search_recursive(int arr[],int left,int right,int query)
{
    if ((query < arr[left]) || query > arr[right])
        return -1;
    if (query != arr[(left + right)/2]&&left == right)
        return -1;
    if (arr[(left + right)/2] == query)
        return (left + right)/2;
    else if (arr[(left + right)/2] > query)
        return binary_search_recursive(arr,left,(left + right)/2,query);
    else if (arr[(left + right)/2] < query)
        return binary_search_recursive(arr,(left + right)/2,right,query);
}
int binary_search_iterative(int arr[],int left,int right,int query)
{
    if ((query < arr[left]) || (query > arr[right]))
        return -1;
    while(1)
    {
        if (query != arr[(left + right)/2]&&left == right)
                    return -1;
        if (arr[(left + right)/2] == query)
            return (left + right)/2;
        else if (left == right)
            return -1;
        else if (arr[(left + right)/2] > query)
            right = (left + right) / 2;
        else if (arr[(left + right)/2] < query)
            left = (left + right) / 2;
    }
}
int main()
{
    int i,left,right,query;
    int arr[1000];
    for (i = 0;i <= 999;i++)
        arr[i] = i;
    scanf("%d%d%d",&left,&right,&query);
    printf("递归方法：%d\n",binary_search_recursive(arr,left,right,query));
    printf("循环方法：%d\n",binary_search_iterative(arr,left,right,query));
    return 0;
}

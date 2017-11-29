#include<stdio.h>

int binary_search_recursive(int arr[], int left, int right, int query)
{  
    int mid = (left + right) / 2;
    if (left > right)  
        return -1;
        if (query == arr[mid])  
            return mid;  
            else if (query < arr[mid])  
                return binary_search_recursive(arr, left, mid - 1, query);  
                else  
                    return binary_search_recursive(arr, mid + 1, right, query);  
}
  
int binary_search_iterative(int arr[], int left, int right, int query)
{ 
    int mid;        
    while (left <= right) 
    {  
        mid = (left + right) / 2;  
        if (query == arr[mid]) 
            return mid;  
            else if (query < arr[mid]) 
                right = mid - 1;  
                else if (query > arr[mid]) 
                    left =  mid + 1;  
    }  
    return -1;  
}    

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int i = 0, j = 0;
    int m =sizeof(arr) / sizeof(arr[0]);
    int query = 4;
    i = binary_search_iterative(arr, 2, 7, query);
    if (i == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("找到了，下标是%d\n",i);
    }
    j = binary_search_recursive(arr, 2, 7, query);
    if (j == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("找到了，下标是%d\n",j);
    }
    return 0;
}

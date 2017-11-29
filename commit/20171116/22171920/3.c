#include <stdio.h>
#include <string.h>
int main()
{
    int arr[25], left, right, query, i, m, n;
    
    printf("输入数组:");
    for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
    scanf("%d%d%d", &left, &right, &query);
    m = binary_search_iterative(arr,left,right,query);
    n = binary_search_recursive(arr,left,right,query);
    printf("%d%d", m, n);

    return 0;
}

int binary_search_recursive(int arr[],int left,int right,int query) 
{  
    if (left <= right)  
    {  
        int mid = (left+right)/2;  
        if(query == arr[mid])  
            return mid;  
        else if(query<arr[mid])  
            return binary_search_recursive(arr,left,mid-1,query);  
        else if(query>arr[mid])  
            return binary_search_recursive(arr,mid+1,right,query);  
    }  
    else  
        return -1;  
} 

int binary_search_iterative(int arr[],int left,int right,int query)
{
    int len;
    len=strlen(arr);
    int mid =len/2; 
    if (query == arr[mid]) 
    {  
        return mid;  
    }  
    int start = 0;  
    int end = len - 1;  
     while (start <= end)
     {  
         mid = (end - start) / 2 + start;  
         if (query < arr[mid]) 
         {  
         end = mid - 1;  
         }
         else if (query > arr[mid])
         {  
              start = mid + 1;  
         }
         else
         {  
            return mid;  
         }  
      }  
        return -1;  
}

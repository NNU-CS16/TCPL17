#include <stdio.h>
#include <string.h>
int binary_search_recursive(int arr[],int left,int right,int query) 
{  
    if (left<=right)  
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

   

  

#include<stdio.h>
int binary_search_recursive(int arr[],int left,int right,int query); 
int binary_search_iterative(int arr[],int left,int right,int query); 
int main()
{
    int left，right，query;
    scanf("%d%d%d",&left,&right,&query);
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    printf("%d,%d\n",binary_search_recursive(arr,0,10,query),binary_search_iterative(arr,0,10,query));
    return 0; 
}

int binary_search_recursive(int arr[],int left,int right,int query)
{
    if (right-1==left)
    {
        if (arr[left]==query) return left;
        if (arr[right]==query) return right;
        return -1;
     }
    int middle;
    middle=(left+right)/2;
    if(arr[middle]==query)
        return middle;
    if (arr[middle]>query) 
        right=middle;
    else 
        left=middle;
    return binary_search_recursive(arr,left,right,query);
}

int binary_search_iterative(int arr[], int left, int right, int query)
{
    int middle;
    while (1)
    {
        middle=(left+right)/2;
        if (arr[middle]==query)
           return middle;
        if (arr[middle]>query) 
           right=middle;
        else 	
           left=middle;
        if (right-1==left)
        {
           if (arr[left]==query) 
                return left;
           if (arr[right]==query) return right;
                return -1;
         }
      }
}

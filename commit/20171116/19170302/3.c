#include<stdio.h>

int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);

int main()
{
        int arr[100];


        for(int i=0;;i++)
        {
                scanf("%d",&arr[i]);
                if(getchar()=='\n')
                        break;
        }
        int left,right,query;
        scanf("%d%d%d",&left,&right,&query);
        printf("%d\n",binary_search_recursive(arr,left,right,query));
        printf("%d\n",binary_search_iterative(arr,left,right,query));
        return 0;
}

int binary_search_recursive(int arr[], int left, int right, int query)
{
        int mid=(left+right)/2;
if(right<left)
return -1;
if(arr[mid]=query)
return mid;
else
if(arr[mid]>query)
return binary_search_recursive(arr, left, (mid-1), query);
else
return binary_search_recursive(arr, (mid+1), right, query);
}

int binary_search_iterative(int arr[], int left, int right, int query)
{
while(left<right)
{
        int mid=(left+right)/2;
        if(arr[mid]>query)
                right=mid-1;
        else if(arr[mid]<query)
                left=mid+1;
        else
                return mid;
}
        return -1;
}



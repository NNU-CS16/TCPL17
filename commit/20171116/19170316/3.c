#include<stdio.h>
int binary_search_recursive(int arr[10],int left,int right,int query)
{
	while(left<=right)
	{
	int mid=(right/2+left/2);
 	if(query<arr[mid])
		right=mid-1;
	if(query>arr[mid])
		left=mid-1;
	if(query==arr[mid])
		return mid;
	}
		return -1;
}

int binary_search_iterative(int arr[10],int left,int right,int query)
{
	int mid=(left+right)/2;
	if(query==arr[mid])
		return mid;
	if(query<arr[mid])
		return binary_search_iterative(arr,left,mid-1,query);
	if(query>arr[mid])
		return binary_search_iterative(arr,mid -1,right,query);
	if (query>arr[right] || query<arr[left])
		return -1;
}

int main()
{
int left,right,query;
int arr[11]={1,2,3,4,5,6,7,8,9,10};
scanf("%d%d%d",&left,&right,&query);
printf("%d",binary_search_iterative(arr,left,right,query));
return 0;
}

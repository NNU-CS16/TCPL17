#include <stdio.h>

int binary_search_iterative(int arr[],int left,int right,int query)
{
	int mid=(left+right)/2;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]>query)
			right=mid-1;
		else if(arr[mid]<query)
			left=mid+1;
		else
			return mid;
	}
	if(left>right)
		return -1;
}

int binary_search_recursive(int arr[],int left,int right,int query)
{
	int mid=(left+right)/2;
	while(right>=left)
	{
		if(arr[mid]>query)
			return binary_search_recursive(arr,left,mid-1,query);
		else if(arr[mid]<query)
			return binary_search_recursive(arr,mid+1,right,query);
		else
			return mid;
	}
	if(left>right)
		return -1;
}

int is_sorted(int arr[],int left ,int right)
{
	for(int i=left;i<right;i++)
	{
		if(arr[i]>arr[i+1])
			return 0;
	}
	return 1;
}

int main()
{
	int left,right ,query;
	int a[100];
	printf("请输入要查找的区间和数字：");
	scanf("%d %d %d\n",&left ,&right,&query);
	for(int i=0;i<=right;i++)
		scanf("%d",&a[i]);
	if(is_sorted(a,left,right)==1)
	{	
		printf("%d\n",binary_search_recursive(a,left,right,query));
		printf("%d\n",binary_search_iterative(a,left,right,query));
	}
	else
		return -1;
}

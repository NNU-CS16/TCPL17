#include<stdio.h>

int binary_search_recursive(int arr[], int left, int right, int query)
{
	int mid;
	int flag=0;
	if(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]>query)
		{
			right=mid-1;
			return binary_search_recursive(arr, left, right, query);
		}
		else if(arr[mid]<query)
		{
			left=mid+1;
			return binary_search_recursive(arr, left, right, query);
		}
		else if(arr[mid]==query)
		{
			return mid;
			flag=1;
		}
	}
	else
		return -1;

}

int binary_search_iterative(int arr[], int left, int right, int query)
{
	int mid;
	int flag=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(query==arr[mid])
		{
			return mid;
			flag=1;
		}
		else if(arr[mid]>query)
			right=mid-1;
		else if(arr[mid]<query)
			left=mid+1;
	}
	if(flag==0)
		return -1;
}

int main()
{
	static int arr[10]={3,4,5,6,8,9,10,15,28,54};
	int left,right;
	int query;
	scanf("%d%d%d",&left, &right, &query);
	printf("%d\n",binary_search_recursive(arr, left, right, query));
	printf("%d\n",binary_search_iterative(arr, left, right, query));
	return 0;
}

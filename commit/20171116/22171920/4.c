#include<stdio.h>
void Insertionsort(int arr[],int left,int right)
{
	int n,j,k;
	scanf("%d%d%d",&left,&right,&n);
	for(int i = 0;i < n ;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < n;i++)
	{
		if(arr[i] == left)
		{
			j = i;
			break;
		}
		
	}
	for(int i = 0;i < n;i++)
	{
		if(arr[i] == right)
		{
			k = i;
			break;
		}
	}
	int x,l;
	for(int i = j + 1;i < k + 1;i++)
	{
		for(l = i;l > j&&arr[l] < arr[l-1];l--)
		{
			x = arr[l];
			arr[l] = arr[l - 1];
			arr[l - 1] = x;
		}
	}
	for(int i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
} 
int main()
{
	int arr[100];
	int left,right;
	Insertionsort(arr,left,right);
	return 0;
}


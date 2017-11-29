#include<stdio.h>
void Selectionsort(int arr[],int left,int right)
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
	int x,l,max;
	for(int i = j;i < k;i++)
	{
		max = arr[i];
		for(l = i;l < k;l++)
		{
			if(arr[l] <= max)
			{
				max = arr[l];
				x = l;
			}
		}
		arr[x] = arr[i];
		arr[i] = max;
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
	Selectionsort(arr,left,right);
	return 0;
}


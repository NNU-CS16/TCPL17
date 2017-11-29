#include <stdio.h>
#include <stdlib.h>

int min(int arr[],int left,int right)
{
	for(int i=left;i<=right;i++)
	{
		int flag=0;
		for(int j=left;j<=right;j++)
		{
			if(arr[i]>arr[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0) return i;
	}
}
			
void SelectionSort(int arr[],int left,int right)
{
	int k;
	for(int i=left;i<right;i++)
	{
		k=arr[i];
		arr[i]=arr[min(arr,i,right)];
		arr[arr,i,right]=k;
	}
}

int is_sorted(int arr[],int left,int right)
{
	for(int i=left;i<right;i++)
	{
		if(arr[i] > arr[i+1])
			return 0;
	}
	return 1;
}
			  
int main()
{
	int left,right,i;
	scanf("%d %d",&left,&right);
	int a[100];
	for(i=0;i<=right;i++)
		a[i]=rand()%(101);
	SelectionSort(a,left,right);
	if(is_sorted(a,left,right)==1)
	{
		printf("Yes.\n");
		for(i=left;i<=right;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	else 
		printf("NO.\n");
	return 0;
}



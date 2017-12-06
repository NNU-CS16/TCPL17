#include <stdio.h>
#include <stdlib.h>

void MergeSort(int arr[],int left,int right)
{
	int SourceArr[10000]={0};
	int mid=(left+right)/2;
	if(left<mid)
		MergeSort(arr,left,mid);
	if(mid+1<right)
		MergeSort(arr,mid+1,right);
	int i=left;
	int j=mid+1;
	int k=0;
	while(i<=mid&&j<=right)
	{
		if(arr[i]<arr[j])
		{
			SourceArr[k]=arr[i];
			i++;
		}
		else
		{
			SourceArr[k]=arr[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		for(int s=j;s<=right;s++,k++)
			SourceArr[k]=arr[s];
	}
	else
	{	
		for(int s=i;s<=mid;s++,k++)
			SourceArr[k]=arr[s];
	}
	for(int s=left;s<=right;s++)
		arr[s]=SourceArr[s-left];
}

int is_sorted(int arr[],int left,int right)
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
	int left,right,i;
	printf("请输入left ,right的值：");
	scanf("%d %d",&left,&right);
	int a[100];
	for(i=0;i<=right;i++)
		a[i]=rand()%(101);
	MergeSort(a,left,right);
	if(is_sorted(a,left,right)==1)
	{
		printf("Yes.\n");
		for(i=left;i<=right;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	else
		printf("No.\n");
	return 0;
}

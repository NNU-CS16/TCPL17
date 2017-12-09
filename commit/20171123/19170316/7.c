#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int left, int right)
{
	int i,j,k;int a[100];int mid=(left+right)/2;
	i=left;j=mid+1;k=left;
	while(i<=mid&&j<=right)
	{	if(arr[i]<=arr[j])
		{a[k]=arr[i];k++;i++;}
		else
		{a[k]=arr[j];k++;j++;}
	}
	while(i<=mid)
	{a[k]=arr[i];k++;i++;}
	while(j<=right)
	{a[k]=arr[j];k++;j++;}
	for(i=left;i<=right;i++)
		arr[i]=a[i];
}
void Merge_Sort(int arr[], int left, int right)
{	
	int mid=(left+right)/2;
	if(left<right)
	{
		Merge_Sort(arr,left,mid);
		Merge_Sort(arr,mid+1,right);
		merge(arr,left,right);
	}
}
int main()
{
int arr[10]={1,9,2,8,3,7,4,6,5};
Merge_Sort(arr,0,9);
int i;
for(i=0;i<10;i++)
	printf("%d ",arr[i]);
return 0;
}


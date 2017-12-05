#include <stdio.h>
#include <stdlib.h>
void MergeSort(int arr[], int left, int right);
void Merge(int arr[], int temparr[], int left, int mid, int right);
int main()
{
	int arr[10];
	int i;
	printf("Please input arr[10]:");
	for (i = 0; i < 10; i++)
		scanf("%d",&arr[i]);
	int left,right;
	printf("Please input left,right:");
	scanf("%d%d",&left,&right);
	MergeSort(arr,left,right);
	for (i = left; i <= right; i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

void MergeSort(int arr[], int left, int right)
{
	int mid;
	int temparr[10];
	if (left < right)
	{
		mid = (left + right)/2;
		MergeSort(arr,left,mid);
		MergeSort(arr,mid+1,right);
		Merge(arr,temparr,left,mid,right);
	}
}
void Merge(int arr[],int temparr[],int left,int mid,int right)
{
	int i = left, j = mid + 1, k = left;
	while (i != mid + 1 && j != right + 1)
	{
		if (arr[i] > arr[j])
			temparr[k++] = arr[j++];
		else 
			temparr[k++] = arr[i++];
	}
	while (i != mid + 1)
		temparr[k++] = arr[i++];
	while (j != right + 1)
		temparr[k++] = arr[j++];
	for (i = left; i <= right; i++)
		arr[i] = temparr[i];
}
		

		

#include <stdio.h>
void Merge(int arr[],int start,int mid,int end);
void MergeSort(int arr[], int left, int right);

int main()
{
    int arr[10];
    int left,right,i;
    scanf("%d%d",&left,&right);
    for (i = 0; i < 10; i++)
	scanf("%d",&arr[i]);
    MergeSort(arr,left,right);
    for (i = 0; i < 10; i++)
	printf("%d",arr[i]);
    return 0;
}
void MergeSort(int arr[],int left,int right)
{
    int mid;
    if (left < right)
    {
	mid = (left + right) / 2;
	MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);
        Merge(arr,left,mid,right);
    }
}
void Merge(int arr[],int start,int mid,int end)
{
    int i = start,j = mid + 1,k = start;
    int temp[10];
    while ((i != mid + 1)&&(j != end + 1))
    {
	if (arr[i] > arr[j])
	    temp[k++] = arr[j++];
	else
	    temp[k++] = arr[i++];
    }
    while (i != mid + 1)
	temp[k++] = arr[i++];
    while (j != end + 1)
	temp[k++] = arr[j++];
    for (i = start; i <= end; i++)
	arr[i] = temp[i];
}

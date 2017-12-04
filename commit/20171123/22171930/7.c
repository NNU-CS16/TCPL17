#include <stdio.h>
#include <stdlib.h>
void Merge(int arr[],int temp[], int left, int mid, int right);
void MergeSort(int arr[], int left, int right);
int main()
{
    int arr[10],left,right;
    int i,j;
    printf("left,right is:");
    scanf("%d%d", &left, &right);
    printf("the number is:");
    for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
    MergeSort(arr,left,right);
    for (j = left; j <= right; j++)
    printf("%d ",arr[j]);
    return 0;
}
void Merge(int arr[],int temp[],int left, int mid, int right)
{
    int i = left, j = mid + 1, k = left;
    while (i != mid + 1 && j != right + 1)
    {
	if(arr[i] > arr[j])
	    temp[k++] = arr[j++];
	else 
	    temp[k++] = arr[i++];
    }
    while (i != mid + 1)
	temp[k++] = arr[i++];
    while (j != right + 1)
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++)
         arr[i] = temp[i];
} 
void MergeSort(int arr[], int left, int right)
{
    int mid;
    int temp[10];
    if (right > left)
    {
	mid = (right + left) / 2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);
        Merge(arr,temp,left,mid,right);
    }
}

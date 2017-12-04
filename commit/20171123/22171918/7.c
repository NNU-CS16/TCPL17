#include <stdio.h>
#include <stdlib.h>
void MergeSort(int arr[], int left, int right);
void Merge(int arr[], int temp[], int left, int mid, int right);
int main()
{
	int arr[10];
	int left, right;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	scanf("%d%d", &left, &right);
	MergeSort(arr, left, right);
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
void MergeSort(int arr[], int left, int right)
{
	int temp[10];
	int mid;
	if (left < right)
	{
		mid = ( left + right) / 2;
		MergeSort(arr, left, mid);
		MergeSort(arr, mid + 1, right);
		Merge(arr, temp, left, mid, right);
	}
}
void Merge(int arr[], int temp[], int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left;
	while (i != mid + 1 && j != right + 1)
	{
		if (arr[i] > arr[j])
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

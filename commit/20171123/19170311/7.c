#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int low, int mid, int high)
{
	int i, k;
	int *tmp = (int *)malloc((high - low + 1) *sizeof(int));
	int left_low = low;
	int left_high = mid;
	int right_low = mid + 1;
	int right_high = high;

	for (k = 0; left_low <= left_high && right_low <= right_high; k++)
	{
		if (arr[left_low] <= arr[right_low])
			tmp[k] = arr[left_low++];
		else
			tmp[k] = arr[right_low++];
	}

	if (left_low <= left_high)
		for (i = left_low; i <= left_high; i++)
			tmp[k++] = arr[i];

	if (right_low <= right_high)
		for(i = right_low; i <= right_high; i++)
			tmp[k++] = arr[i];

	for (i = 0; i < high - low + 1; i++)
		arr[low + i] = tmp[i];
	free(tmp);
	return;
}

void merge_sort(int arr[], int first, int last)
{
	int mid = 0;
	if (first < last)
	{
		mid = first / 2 + last / 2;
		merge_sort(arr, first, mid);
		merge_sort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
	return;
}

int main()
{
	int i;
	int arr[] = {1, 67, 99, 9, 54, 38, 97, 10, 27, 44};
	merge_sort(arr, 0, 9);
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

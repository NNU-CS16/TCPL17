#include <stdio.h>

void InsertionSort(int arr[], int left, int right)
{
	int i, j, k, temp;
	for (i = left; i <= right; i++)
		for (j = i; j >= 1; j--)
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
	for (k = 0; k <= 9; k++)
		printf("%d ", arr[k]);
		printf("\n");
}

int main()
{
	int i, left = 4, right = 10;
	int arr[10] = {2, 3, 6, 35, 11, 24, 1, 37, 99, 57};
	for (i = 0; i <= 9; i++)
		printf("%d ", arr[i]);
	printf("\n");
	InsertionSort(arr, left, right);

	return 0;
}

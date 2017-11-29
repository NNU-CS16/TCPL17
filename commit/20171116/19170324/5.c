#include <stdio.h>

void SelectionSort(int arr[], int left, int right)
{
	int i, j, min, temp, k;
	for (i = left - 1; i <= right - 1; i++)
	{
		min = i;
		for (j = i; j <= right - 1; j++)
			if (arr[j] < arr[min])
				min = j;
		if (arr[min] != arr[i])
		{		
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	for(k = left - 1; k <= right - 1; k++)
		printf("%d ", arr[k]);
	printf("\n");
}

int main()
{
	int i, left, right;
	int arr[10] = {1, 38, 9, 45, 99, 67, 31, 54, 6, 78};
	for (i = 0; i <= 9; i++)
		printf("%d ", arr[i]);
	scanf("%d%d", &left, &right);
	SelectionSort(arr, left, right);

	return 0;
}

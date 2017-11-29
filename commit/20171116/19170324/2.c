#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int left, int right)
{
	int j, k, temp, r = right;
	for (j = left - 1; j <= r - 1; r--)
		for (k = j; k <= r - 2; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
}

int main()
{
	int arr[100], i, b, left, right;
	for (i = 0; i < 100; i++)
	{
		arr[i] = rand()%100;
		printf("%d ", arr[i]);
	}
	scanf("%d%d", &left, &right);
	BubbleSort(arr, left, right);
	
	for (b = left - 1; b <= right - 1; b++)
		printf("%d ", arr[b]);
	printf("\n");

	return 0;
}

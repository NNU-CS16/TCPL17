#include <stdio.h>
void SelectionSort(int arr[], int left, int right);
int main()
{
	int arr[20];
	int left, right, i;
	scanf("%d%d", &left, &right);
	for (i = 0; i < 20; i++)
		scanf("%d", &arr[i]);
	SelectionSort(arr, left, right);
	for (i = 0; i < 20; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
void SelectionSort(int arr[], int left, int right)
{
	int i, j, temp;
	for (i = left; i < right; i++)
	{
		for (j = i + 1; j < right; j++)
		{
			if ( arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


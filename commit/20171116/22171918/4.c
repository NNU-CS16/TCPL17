#include <stdio.h>
void InsertionSort(int arr[], int left, int right);
int main()
{
	int arr[20];
	int i;
	int left, right;
	scanf("%d%d", &left, &right);
	for (i = 0; i < 20; i++)
		scanf("%d", &arr[i]);
	InsertionSort(arr, left, right);
	for (i = 0; i < 20; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
void InsertionSort(int arr[], int left, int right)
{
	int i, j, temp;
	for (i = left + 1; i < right; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= left; j--)
			if (temp < arr[j])
			{
				arr[j+1] = arr[j];
			}
			else
				break;
		arr[j + 1] = temp;
	}
}


#include <stdio.h>/*插入排序*/

void InsertionSort(int arr[], int left, int right);

int main()
{
	int arr[100];
	int left, right;
	int i;
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);
		if(getchar() == '\n')
			break;
	}
	scanf("%d%d", &left, &right);
	InsertionSort(arr, left, right);
	return 0;
}

void InsertionSort(int arr[], int left, int right)
{
	int i, j, temp;
	for(i = left + 1; i <= right; i++)
	{
		temp = arr[i]; 
		for(j = i - 1; j >= left; j--)
		{
			if(arr[j] > temp)
			{
				arr[j + 1] = arr[j];
			}
		}
		if(j != i - 1)
			arr[j + 1] = temp;
	}
	for(i = left; i < right; i++)
	printf("%d ", arr[i]);
	printf("%d\n", arr[right]);
}

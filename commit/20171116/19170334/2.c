#include <stdio.h>/*冒泡排序*/

void BubbleSort(int arr[], int left, int right);

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
	BubbleSort(arr, left, right);
	return 0;
}

void BubbleSort(int arr[], int left, int right)
{
	int x;
	for(int i = left; i < right; i++)
		for(int j = left; j < right - i; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	for(int i = left; i < right; i++)
		printf("%d ", arr[i]);
	printf("%d\n", arr[right]);
}


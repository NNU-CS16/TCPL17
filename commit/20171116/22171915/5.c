#include <stdio.h>
void SelectionSort(int arr[], int left, int right);

void SelectionSort(int arr[], int left, int right)
{
int i, j, temp;
for (i = left; i <= right; i++)
	for (j = i; j <= right; j++)
		if (arr[i] > arr[j])
		{
			int t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
}

int main()
{
	int arr[10];
	int left, right;
	int i = 0;
	printf("输入arr[]:\n");
	for (;i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("输入left,right:");
	scanf("%d %d", &left, &right);
	SelectionSort(arr, left, right);
	for (;left <= right;left++)
	{
		printf("%d ", arr[left - 1]);
	}
	printf("\n");
	return 0;
}


#include<stdio.h>
void BubbleSort(int arr[], int left, int right);

void BubbleSort(int arr[], int left, int right)
{
	int temp;
	for (;left < right; left++)
		if (arr[left - 1] > arr[left])
		{
			temp = arr[left];
	        arr[left] = arr[left - 1];
			arr[left - 1] = temp;
		}
		else continue;
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
	BubbleSort(arr, left, right);
	for (;left <= right;left++)
	{
		printf("%d ", arr[left - 1]);
	}
	printf("\n");
	return 0;
}


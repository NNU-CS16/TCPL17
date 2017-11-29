#include<stdio.h>
void InsertionSort( int arr[], int left, int right );

void InsertionSort( int arr[], int left, int right )
{
	int i, j, temp;
	for (i = left + 1; i <= right; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= left; j--)
			if (temp < arr[j]) 
				arr[j + 1] = arr[j];
			else break;
		arr[j + 1] = temp;
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
	InsertionSort(arr, left, right);
	for (;left <= right;left++)
	{
		printf("%d ", arr[left - 1]);
	}
	printf("\n");
	return 0;
}

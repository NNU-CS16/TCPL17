#include <stdio.h>
void BubbleSort(int arr[], int left, int right);
int is_sorted(int arr[],int left,int right);
int main ()
{
	int arr[1000];
	int left, right;
	int i;
	scanf("%d%d", &left, &right);
	for (i =0; i <= right; i++)
		scanf("%d", &arr[i]);
	BubbleSort(arr, left, right);
	if (is_sorted(arr, left, right) == 1)
	{
		printf("已经实现升序\n");
		printf("升序后:");
		for (i = left; i <= right; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else
	printf("未能实现升序\n");
	return 0;

}
void BubbleSort(int arr[], int left, int right)
{
	int i, j, temp;
	for (i = left; i <= right; i++)
	{
		for (j = i + 1; j <= right; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
int is_sorted(int arr[],int left,int right)
{
	int i;
	for (i = left; i < right; i++)
	{
		if ( arr[i] > arr[i + 1]) break;
	}
	if (i < right)
	return 0;
	else
	return 1;
}

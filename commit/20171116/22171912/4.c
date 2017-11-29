/*4.c_插入排序*/
#include <stdio.h>

void InsertionSort(int arr[], int left, int right);

int main()
{
	int arr[1000], left, right;
	int i, temp;
	printf("请输入左、右区间：");
	scanf("%d%d", &left, &right);
	printf("请输入若干个整数：");
	for (i = left; i <= right; ++i)
		scanf("%d", &arr[i]);
	InsertionSort(arr, left, right);
	for (i = left; i <= right; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

void InsertionSort(int arr[], int left, int right)
{
	int i,j;
	int temp;
	for(i = left + 1; i <= right; i++)
	{
		temp=arr[i];
		for(j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}
}

#include <stdio.h>
void InsertionSort(int arr[], int left, int right);

int main()
{
	int arr[100], len, left, right;
	int i;
	printf("输入数组长度和待排序区间:");
	scanf("%d%d%d", &len, &left, &right);
	printf("输入数组:");
	for (i = 0; i < len; ++i)
	  scanf("%d", &arr[i]);
	InsertionSort(arr, left, right);
	return 0;
}

void InsertionSort(int arr[], int left, int right)
{
	int i, j, temp;
	for (i = left; i < right; ++i)
	{
	  temp = arr[i];
	  j = i - 1;
	  while ((j >= left - 1) && (arr[j] > temp)) 
	  {
		arr[j+1] = arr[j];
		--j;
	  }
	  arr[j+1] = temp;
	}
	for (i = left - 1; i < right; ++i)
	  printf("%d ", arr[i]);
	printf("\n");
}

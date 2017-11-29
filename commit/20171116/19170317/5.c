#include <stdio.h>
void SelectSort(int arr[], int left, int right);

int main()
{
	int arr[100], len, left, right;
	int i;
	printf("输入数组长度和待排序区间:");
	scanf("%d%d%d", &len, &left, &right);
	printf("输入数组:");
	for (i = 0; i < len; ++i)
	  scanf("%d", &arr[i]);
	printf("排序后:");
	SelectSort(arr, left, right);
	return 0;
}

void SelectSort(int arr[], int left, int right)
{
	int i, j, n, temp;
	for (j = left - 1; j < right - 1; ++j)
	{
	  i = j;
	  n = j;
	  while (i < right)
		if (arr[n] < arr[i])
		{
		  ++i;
		  continue;
		}
		else
		{
		  n = i;
		  i = n + 1;
		}
	  temp = arr[n];
	  arr[n] = arr[j];
	  arr[j] = temp;
	}
	for (i = left - 1; i < right; ++i)
	  printf("%d ", arr[i]);
	printf("\n");
}

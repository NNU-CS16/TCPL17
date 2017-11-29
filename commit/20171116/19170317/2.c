#include <stdio.h>
void BubbleSort(int arr[], int left, int right);

int main()
{
	int arr[100], len, left, right;
	int i;
	printf("请输入该数组的长度:");
	scanf("%d", &len);
	printf("Please input numbers:");
	for (i = 0; i < len; ++i)
	  scanf("%d", &arr[i]);
	printf("请输入待排序的数组区间:");
	scanf("%d%d", &left, &right);
	printf("将数组arr中的[%d,%d]内进行排序后，为:", left, right);
	BubbleSort(arr, left, right);
	return 0;
}

void BubbleSort(int arr[], int left, int right)
{
	int temp, i, j;
	for (j = left-1; j < right; ++j)
	  for (i = left-1; i < right-j; ++i)
		if (arr[i] > arr[i+1])
		{
		  temp = arr[i+1];
		  arr[i+1] = arr[i];
		  arr[i] = temp;
		}
	for (i = left-1; i < right; ++i)
	  printf("%d ", arr[i]);
	printf("\n");
}

	

/*5.c_选择排序*/
#include <stdio.h>

void SelectionSort(int arr[], int left, int right);

int main()
{
	int arr[1000], left, right;
    int i, n;
    printf("请输入左、右区间：");
    scanf("%d%d", &left, &right);
    printf("请输入若干个整数：");
    for (i = left; i <= right; ++i)
        scanf("%d", &arr[i]);

	SelectionSort(arr, left, right);
	for (i = left; i <= right; ++i)
		printf("%d ", arr[i]);
	return 0;
}

void SelectionSort(int arr[], int left, int right)
{
	int i, j, n, min, temp;
	for (i = left; i <= right; ++i)
	{
		min = i;
		for (j = i + 1; j < right + 1; ++j)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		if (min != i)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}

#include <stdio.h>
void MergeSort(int arr[], int left, int right);

int main()
{
	int len;
	printf("输入数组长度:\n");
	scanf("%d", &len);
	int arr[len];
	int left, right, i;
	printf("请输入数组元素:\n");
	for (i = 0; i < len; ++i)
	  scanf("%d", &arr[i]);
	printf("请输入待查找的数组区间:\n");
	scanf("%d%d", &left, &right);
	MergeSort(arr, left, right);
	return 0;
}

void MergeSort(int arr[], int left, int right)
{
	int arr1[50], arr2[50];
	int mid = (left + right) / 2;
	int i, j, temp;
	/*将待排序区间以中点二分*/
	for (i = left - 1, j = 0; i < mid; ++i, ++j)
	  arr1[j] = arr[i];
	for (i = mid, j = 0; i < right; ++i, ++j)
	  arr2[j] = arr[i];
	/*将左右区间排序*/
	for (i = 0; i < mid - left; ++i)
	  for (j = 0; j < mid - left - i; ++j)
		if (arr1[j] > arr1[j+1])
		{
		  temp = arr1[j];
		  arr1[j] = arr1[j+1];
		  arr1[j+1] = temp;
		}
	for (i = 0; i < right - mid - 1; ++i)
	  for (j = 0; j < right - mid - 1 - i; ++j)
		if (arr2[j] > arr2[j+1])
		{
		  temp = arr2[j];
		  arr2[j] = arr2[j+1];
		  arr2[j+1] = temp;
		}
	/*将左右区间合并为有序区间*/
	int res[100];
	int k = 0;
	i = 0; j = 0;
	while (i < mid - left + 1 || j < right - mid - 1)
	{
	  if (arr1[i] > arr2[j])
	  {
		res[k] = arr2[j];
		++j;
	  }
	  else
	  {
		res[k] = arr1[i];
		++i;
	  }
	  k += 1;
	}
	if (i == mid - left)
	{
	  for ( ; j < right - mid + 1; ++j)
	  {
		res[k] = arr2[j];
		k += 1;
	  }
	}
	else
	{
	  for ( ; i < mid - left + 1; ++i)
	  {
		res[k] = arr1[i];
		k += 1;
	  }
	}
	/*输出排序结果*/
	printf("对[%d, %d]内的元素排序后:\n", left, right);
	for (i = 0; i <= right - left; ++i)
	  printf("%d ", res[i]);
	printf("\n");
}

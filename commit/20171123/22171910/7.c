/*归并排序*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void MergeSort(int arr[1000], int left, int right);

int main()
{
  int arr[1000], i, j, left, temp1, temp2, right;
  printf("请输入数组区间端点:");
  scanf("%d%d", &left, &right);
  temp1 = left;
  temp2 = right;
  srand(time(NULL));
  for (i = 0; i <= right; i++)
  {
        arr[i] = rand();
  }
  MergeSort(arr, left, right);
  for (j = temp1; j <= temp2; j++)
      printf("%d ", arr[j]);
  return 0;
}

void Merge(int arr[1000], int left, int mid, int right)  //将数据排序
{
  int a[1000], b[1000], i, j, k;
  for (i = 0; i < mid - left + 1; i++)
      a[i] = arr[left + i];
  for (j = 0; j < right - mid; j++)
      b[j] = arr[mid + j + 1];
  i = 0;
  j = 0;
  for (k = left; k <= right; k++)
  {
    if (j == right - mid || a[i] <= b[j])
      arr[k] = a[i++];
    else
      arr[k] = b[j++];
  }
}

void MergeSort(int arr[1000], int left, int right)
{
  int mid = (left + right) / 2;
  if (left < right)
  {
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    Merge(arr, left, mid, right);
  }
}

/*选择排序*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void SelectionSort(int arr[1000], int left, int right);
void swap(int*a,int*b);

int main()
{
  int arr[1000], i, left, right;
  printf("请输入数组区间端点:");
  scanf("%d%d", &left, &right);
  srand(time(NULL));
  for (i = 0; i < right; i++)
  {
    arr[i] = rand();
  }
  SelectionSort(arr, left, right);
  return 0;
}

void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void SelectionSort(int arr[1000], int left, int right)
{
  int i, j, n = 0, min;
  for (i = left; i < right - 1; i++)
  {
	min = i;
	for (j = i + 1; j < right; j++)
		if (arr[min] > arr[j])
		   min = j;
	if (min != i)
	   swap(&arr[min], &arr[i]);
  }
  for (i = left - 1; i < right; i++)
  {
    if (arr[i] <= arr[i + 1])
       n++;
      printf("%d ", arr[i]);
  }
      printf("\n");
  if (n == right - left)
     printf("true");
  else
     printf("false");
}

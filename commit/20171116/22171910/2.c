/*冒泡升序排序*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void BubbleSort(int arr[1000], int left, int right);
int is_sorted(int arr[1000], int left, int right);

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
  BubbleSort(arr, left, right);
  return 0;
}

void BubbleSort(int arr[1000], int left, int right)
{
  int i, j, n = 0, temp;
  for (i = 0; i < right - left; i++)
	  for (j = left - 1; j < right - i - 1; j++)
		  if (arr[j] > arr[j + 1])
		  {
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
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

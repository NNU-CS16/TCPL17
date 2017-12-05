/*数组区间*/
#include <stdio.h>
int is_sorted(int arr[1000], int left, int right);

int main()
{
  int i, arr[1000], left, right;
  printf("请输入数组区间端点");
  scanf("%d%d", &left, &right);
  printf("请输入数组区间arr:");
  for (i = 0; i <= right; i++)
  scanf("%d", &arr[i]);
  is_sorted(arr, left, right);
  return 0;
}

int is_sorted(int arr[1000], int left, int right)
{
  int i, n = 0;
  for (i = left; i < right; i++)
  {
	if (arr[i] <= arr[i + 1])
	   n++;
	else
	  break;
  }
  if (n == right - left)
	 printf("true");
  else
	 printf("false");
}

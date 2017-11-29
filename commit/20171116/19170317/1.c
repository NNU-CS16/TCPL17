#include <stdio.h>
int is_sorted(int arr[], int left, int right);

int main()
{
	int arr[100], len, left, right;
	int i;
	printf("请输入数组长度:");
	scanf("%d", &len);
	printf("Please input numbers:");
	for(i = 0; i < len; ++i)
	  scanf("%d", &arr[i]);
	printf("输入要判断的数组区间:");
	scanf("%d%d", &left, &right);
	printf("该数组在[%d, %d]内", left, right);
	is_sorted(arr, left, right);
	return 0;
}

int is_sorted(int arr[], int left, int right)
{
	int i, flag = -1;
	for (i = left-1; i < right-2; ++i)
	  if (arr[i] > arr[i+1])
		continue;
	  else
	  {
		flag = 0;
		break;
	  }
	if (flag == 0)
	  printf("有序\n");
	else
	  printf("无序\n");
	return 0;
}

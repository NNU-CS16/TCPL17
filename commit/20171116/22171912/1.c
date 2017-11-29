/*1.c_判断数组有序*/
#include <stdio.h>

int is_sorted(int arr[], int left, int right);

int main()
{
	int arr[1000], left, right;
	int i;
	printf("请输入左、右区间：");
	scanf("%d%d", &left, &right);
	printf("请输入若干个整数：");
	for (i = left; i <= right; ++i)
		scanf("%d", &arr[i]);
	printf("%s\n",(is_sorted(arr, left, right)) ? "有序" : "无序");
	return 0;
}

int is_sorted(int arr[], int left, int right)
{
	int i;
	for (i = left; i <= right; i++)
	{
		if (arr[i] > arr[i + 1])
			break;
	}
	if (i == right)
		return 1;
	else
		return 0;
}

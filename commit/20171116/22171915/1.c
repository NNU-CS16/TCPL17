#include<stdio.h>
int is_sorted(int arr[], int left, int right);

int is_sorted(int arr[], int left, int right)
{
	for (; left < right; left++)
		if (arr[left - 1] > arr[left])
			break;
	if (left < right)
		return 0;
	else
		return 1;
}

int main()
{
	int arr[10];
	int left, right;
	int i = 0;
	printf("输入arr[]:\n");
	for (;i < 10;i++)
	{
	scanf("%d", &arr[i]);
	}
	printf("输入left,right:");
	scanf("%d %d", &left, &right);
	is_sorted(arr, left, right);
	if(is_sorted(arr, left, right) == 1)
		printf("数组有序\n");
	else
		printf("数组无序\n");
	return 0;
}

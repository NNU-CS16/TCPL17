#include <stdio.h>
int is_sorted(int arr[], int left, int right);
int main ()
{
	int arr[1000];
	int left, right;
	int i;
	scanf("%d%d", &left, &right);
	for (i = 0; i <= right; i++)
		scanf("%d", &arr[i]);
	if (is_sorted(arr, left, right) == 0)
	printf("无序\n");
	else
	printf("有序\n");
	return 0;
}
int is_sorted(int arr[], int left, int right)
{
	int i;
	for (i = left; i < right; i++)
	{
		if (arr[i] > arr[i+1]) break;
	}
	if (i < right) 
	return 0;
	else
	return 1;
}

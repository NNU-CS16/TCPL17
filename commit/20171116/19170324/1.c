#include <stdio.h>
#include <stdlib.h>

int is_sorted(int arr[], int left, int right)
{
	int i, flag = 0;	
	for (i = left - 1; i < right - 1; i++)
		if (arr[i] > arr[i + 1])
		{
			flag = 1;
			break;
		}
	if (flag == 1)
		printf("数组在区间[%d, %d]无序\n", left, right);
	if (flag == 0)
		printf("数组在区间[%d, %d]有序\n", left, right);
}

int main()
{
	int arr[20], left, right, k;
	
	for (k = 0; k < 20; k++)
	{		
		arr[k] = rand()%100;
		printf("%d ", arr[k]);
	}
	scanf("%d%d", &left, &right);

	is_sorted(arr, left, right);

	return 0;
}

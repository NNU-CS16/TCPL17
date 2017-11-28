#include <stdio.h>/*判断数组是否升序*/

int is_sorted(int arr[], int left, int right);

int main()
{
	int arr[100];
	int left, right;
	int i;
	for(i = 0; i < 50; i++)
	{
		scanf("%d", &arr[i]);
		if(getchar() == '\n')
			break;
	}
	scanf("%d%d", &left, &right);
	printf("%d\n", is_sorted(arr, left, right));
	return 0;
}

int is_sorted(int arr[], int left, int right)
{
	for(int i = left; i < right; i++)
	{
		if(arr[i] <= arr[i + 1])
		{
			return 0;
			continue;
		}
		else
		{
			return -1;
			break;
		}
	}
}

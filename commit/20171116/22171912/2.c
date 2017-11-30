#include <stdio.h>
#include <time.h>

void BubbleSort(int arr[], int left, int right);
int is_sorted(int arr[], int left, int right);

int main()
{
    int arr[1000], left, right;
    int i;
    printf("请输入左、右区间：");
    scanf("%d%d", &left, &right);
	srand((unsigned)time(NULL));
    for (i = left; i <= right; ++i)
	{
        arr[i] = rand ();
		printf("%d ", arr[i]);
	}
	printf("\n");

	BubbleSort(arr, left, right);
	for (i = left; i <= right; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	
    printf("%s\n",(is_sorted(arr, left, right)) ? "有序" : "无序");
    return 0;
}

void BubbleSort(int arr[], int left, int right)
{
	int i, j, temp;
	for (i = left; i < right; ++i)
	{
		for (j = i + 1; j < right + 1; ++j)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
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

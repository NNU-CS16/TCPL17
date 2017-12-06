#include <stdio.h>
#include <string.h>
void BubbleSort(int arr[], int left, int right);
int main()
{
    int i, left, right;
    int arr[7] = {12, 4, 6, 7, 30, 3, 9};
    scanf("%d %d\n", &left, &right);
    for(i = left; i <= right; i++)
    {
        printf("%d ", arr[i]);
    }
    BubbleSort(arr, left, right);
    return 0;
}
void BubbleSort(int arr[], int left, int right)
{
    int i, j, t;
    for (i = 0; i < right - left; i++)
	for (j = left; j < right - i; j++)
	    if (arr[j] > arr[j + 1])
	    {
		t = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = t;
	    }
    printf("排序后: ");
    for (i = 0; i <= right; i++)
	printf("%d ", arr[i]);
    printf("\n");
}


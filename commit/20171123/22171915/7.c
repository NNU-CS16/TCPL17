#include <stdio.h>
void BubbleSort(int arr[], int left, int right)
{
    int i, j, temp;
    for (i = left; i <= right; i++)
    {
        for (j = left; j <= right; j++)
        {
            if (arr[j-1] > arr[j])
            {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (j = left; j <= right; j++)
		printf("%d ",arr[j-1]);
}

int main()
{
    int arr[100];
    int n, i, left, right;
    printf("输入数组位数，left，right\n");
	scanf("%d %d %d",&n,&left,&right);
    printf("输入数组\n");
	for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
	printf("升序后\n");
	BubbleSort(arr, left, right);
    return 0;
}

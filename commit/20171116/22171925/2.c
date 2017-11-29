#include <stdio.h>
void BubbleSort(int arr[], int left, int right)
{
    int i, j, temp;
    for (i = left; i < right; i++)
    {
        for (j = left; j <= right - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (j = left; j <= right; j++)
		printf("%d ",arr[j]);
}

int main()
{
    int arr[100] = {0};
    int n, i, left, right;
    scanf("%d %d %d",&n,&left,&right);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }  
	BubbleSort(arr, left, right);
    return 0;
}



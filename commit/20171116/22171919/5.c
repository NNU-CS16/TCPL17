#include <stdio.h>
void SelectionSort(int arr[], int left, int right)
{
    int i, j;
    for (i = left; i < right; i++)
	{
        int temp,min = arr[i];
        for (j = i + 1; j <= right; j++)
        {
            if (arr[j] < min)
            {
                temp = min;
                min = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ",min);
    }
    printf("%d\n",arr[right]);
}

int main()
{
    int arr[100];
    int len, left, right;
    scanf("%d %d %d",&len,&left,&right);
    int i;
    for (i = 0;i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    SelectionSort(arr, left, right);
    return 0;
}




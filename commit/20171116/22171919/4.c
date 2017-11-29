#include <stdio.h>
void InsertionSort(int arr[], int left, int right)
{
    int i, j;
    int temp;
    for (i = left + 1; i <= right; i++)
	{
        temp = *(arr + i);
        for (j = i; j > left && *(arr + j - 1) > temp; j--)
        {
            *(arr + j) = *(arr + j - 1);
        }
        *(arr + j) = temp;
    }
    for (i = left; i <= right; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
	int arr[20];
    int len, left, right;
    scanf("%d %d %d",&len,&left,&right);
    int i;
    for (i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    InsertionSort(arr, left, right);
    printf("\n");
    return 0;
}



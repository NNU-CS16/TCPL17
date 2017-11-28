#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int arr[], int left, int right)
{
    int size;
    left = 0;
    right = size - 1;
    while(left < right)
    {
        int temp, max = right, min = left;
        for (int i = left;i <= right;i++)
        {
            if (arr[i] > arr[max])
            {
                max = i;
            }
            if (arr[i] < arr [min])
            {
                min = i;
            }
        }
        temp = arr[max];
        arr[max] = arr[right];
        arr[right] = temp;
        if (min == right)
        {
            min = max;
        }
        temp = arr[min];
        arr[min] = arr[left];
        arr[left] =temp;
        left++;
        right--;
    }
}

int is_sorted(int arr[], int left, int right)
{
    for(int i = left;i < right;i++)
    {
        if (arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    int arr[100];  
    int left, right, i;
    scanf("%d%d", &left, &right);
    for (i = 0;i <= right;i++)
        arr[i] = rand() % (101);
        SelectionSort(arr, left, right);
        if (is_sorted(arr, left, right) == 1)
        {
            printf("Yes\n");
            for (i = left;i <= right;i++)
                printf("%d", arr[i]);
                printf("\n");
        }
        else
            printf("No\n");   
            return 0;
}

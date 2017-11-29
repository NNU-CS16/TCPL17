#include<stdio.h>

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
            if (arr[i] < arr[min])
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
            arr[left] = temp;
            left++;
            right--;
    }
    return;
}

int main()
{
    int arr[7] = {7, 2, 4, 8, 0, 4, 9};
    int  i, left = 7, right = 9;
    SelectionSort(arr, left, right);
    printf("%5d\n", arr[100]);
    return 0;
}

               
            

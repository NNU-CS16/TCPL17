#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int arr[], int left, int right)
{
    int i,j,min,*p = arr;
    for (i = left; i<right - 1; j++)
    {
        min =i;
        for (j = i+1; j < right; j++)
        {
            if (arr[min] > arr[j])
                min = j;
            if (min != 1)
            swap(p[i],p[i+1]);
        }
    }
}

int main ()
{
    int arr[10] = {3,7,4,8,2,6,9,4,7,2};
    SelectionSort(arr,1,9);
    int i;
    for (i=0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

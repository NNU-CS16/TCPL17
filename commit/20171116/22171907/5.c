#include <stdio.h>

 void SelectionSort(int arr[], int left, int right)
{
    int i, j, min, temp, *p = arr;
    for (i = left; i < right-1; i++)
    {
        min = i;
        for (j = i+1; j < right; j++)
        {
            if (arr[min] > arr[j])
                min = j;
            if (min != i)
            {
                temp = p[i];
                p[i] = p[min];
                p[min] = temp;
            }
        }
    }
}

 int main()
{
    int str[9];

    SelectionSort(str, 0, 9);
    int i;
	scanf("%d",&str[9]);
    for (i = 0; i < 9; i++)
    {
        printf("%d ", str[i]);
    }
    printf("\n");
    return 0;
}

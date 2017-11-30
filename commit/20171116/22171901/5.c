#include <stdio.h>
void SelectionSort(int arr[], int left, int right);

int main()
{
    int arr[10];
    int left , right , i;

    printf ("输入数据：");
    for (i = 0; i <= 9; i++)
        scanf ("%d" , &arr[i]);

    printf ("输入区间：");
    scanf ("%d%d" , &left , &right);

    SelectionSort(arr , left , right);
    return 0;

}

void SelectionSort(int arr[], int left, int right)
{
    int min , i , j , temp;
    for (i = left; i <= right - 1; i++)
    {
        min = i;
        for (j = i + 1; j <= right; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

    }


    for (i = left; i<= right; i++)
        printf ("%d\t" , arr[i]);
}



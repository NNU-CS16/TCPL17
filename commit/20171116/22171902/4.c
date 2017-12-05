#include <stdio.h>
void InsertionSort(int arr[], int left, int right);

int main ()
{
    int arr[10];
    int left , right , i , temp;

    printf ("输入数据：");
    for (i = 0; i <= 9; i++)
        scanf ("%d" , &arr[i]);

    printf ("输入区间：");
    scanf ("%d %d" , &left , &right);

    InsertionSort(arr, left, right);

    return 0;

}

void InsertionSort(int arr[], int left, int right)
{
    int i , j , temp;

    for (i = left + 1; i <= right; i++)
    {
         temp = arr[i];
         for (j = i - 1; j >= left && arr[j] > temp; j--)
         {
             arr[j + 1] = arr[j];
             arr[j] = temp;
         }
    }

    for (i = left; i <= right; i++)
        printf("%d\t" , arr[i]);
    printf ("\n");
} 


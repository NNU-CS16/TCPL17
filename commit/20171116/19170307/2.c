#include <stdio.h>
void BubbleSort(int arr[], int left, int right);

int main()
{
   int arr[100];
   int left, right;
   int i;
   scanf("%d %d", &left, &right);
   for(i = 0; i < right; i++)
       scanf("%d", &arr[i]);
   BubbleSort(arr, left, right);
   return 0;
}

void BubbleSort(int arr[], int left, int right)
{
    int temp;
    for(int i = left; i < right; i++)
        for(int j = left; j < right - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
               temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
        }
    for(int i = left; i < right; i++)
        printf("%d ", arr[i]);
    printf("%d\n", arr[right]);
}


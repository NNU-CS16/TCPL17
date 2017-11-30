#include <stdio.h>

void SelectionSort(int arr[], int left, int right);

int main()
{
   int arr[100];
   int left, right;
   int i;
   scanf("%d %d", &left, &right);
   for(i = 0; i <= right; i++)
   {
       scanf("%d", &arr[i]);
   }
       SelectionSort(arr, left, right);
       return 0;
}

void SelectionSort(int arr[], int left, int right)
{
    int i, j;
    int x = left;
    int min;
    for(x = left; x < right; x++)
    {
        min = arr[x];
        for(i = x + 1; i <= right; i++)
        {
            if(arr[i] < min)
            {
               min = arr[i];
               j = i;
            }
        }
        if(min != arr[x])
        {
           arr[j] = arr[x];
           arr[x] = min;
        }
    }
    for(i = left; i < right; i++)
        printf("%d ", arr[i]);
        printf("%d\n", arr[right]);
}


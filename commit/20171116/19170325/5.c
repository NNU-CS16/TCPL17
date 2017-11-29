#include <stdio.h>

void SelectionSort(int arr[], int left, int right);

int main(void)
{
   int arr[10], left, right;

   printf("Please input arr[10]\n");
   for (int i = 0; i < 10; i++)
     scanf("%d", &arr[i]);
   printf("Please input left and right :\n");
   scanf("%d %d", &left, &right);
   SelectionSort(arr, left, right);
   for (int i = 0; i < 10; i++)
     printf("%3d", arr[i]);
   putchar('\n');

   return 0;
}

void SelectionSort(int arr[], int left, int right)
{
    int min, i = left, j, temp;

    for (i = left; i <= right; i++)
    {
       min = i;
       for (j = i + 1; j <= right; j++)
         if (arr[j] < arr[min])
            min = j;
       temp = arr[min];
       arr[min] = arr[i];
       arr[i] = temp;
    }
}

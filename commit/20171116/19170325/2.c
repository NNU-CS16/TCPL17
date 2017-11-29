#include <stdio.h>

void BubbleSort(int arr[], int left, int right);

int main(void)
{
   int left, right, arr[10] = {2, 5, 22, 19, 25, 69, 47, 4, 21, 41};

   printf("Please input left and right :\n");
   scanf("%d%d", &left, &right);
   for (int i = left; i <= right; i++)
      printf("%3d", arr[i]);
   printf("\n");
   BubbleSort(arr, left, right);
   for (int i = left; i <= right; i++)
      printf("%3d", arr[i]);
   printf("\n");

   return 0;
}

void BubbleSort(int arr[], int left, int right)
{
    int temp;

    for (int i = 0; i < right - left; i++)
      for (int j = left; j < right - i; j++)
         if (arr[j] > arr[j + 1])
         {
             temp = arr[j];
             arr[j] = arr[j + 1];
             arr[j + 1] = temp;
         }
}

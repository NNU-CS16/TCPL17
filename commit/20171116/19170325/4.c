#include <stdio.h>

void InsertionSort(int arr[], int left, int right);

int main(void)
{
   int arr[10], left, right;

   printf("Please input arr[10]\n");
   for (int i = 0; i < 10; i++)
     scanf("%d", &arr[i]);
   printf("please input left and right :\n");
   scanf("%d %d", &left, &right);
   InsertionSort(arr, left, right);

   for (int i = 0; i < 10; i++)
      printf("%3d", arr[i]);
   putchar('\n');

   return 0;
}

void InsertionSort(int arr[], int left, int right)
{
    int temp, i, j;

    for (i = left; i <= right; i++)
    {
       temp = arr[i];
       j = i - 1;
       while (temp < arr[j] && j >= 0)
       {
          arr[j + 1] = arr[j];
          j--;
       }
       arr[j] = temp;
    }
}

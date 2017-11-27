#include <stdio.h>
void BubbleSort(int arr[], int left, int right);

int main()
{
   int arr[10];
   int left,right,i = 0;
   scanf("%d%d",&left,&right);
   for (; i < 10; i++)
       scanf("%d",&arr[i]);
   BubbleSort(arr,left,right);
   return 0;
}
void BubbleSort(int arr[], int left, int right)
{
    int i, j,temp;
    for (i = 0; i <= (right - left) + 1; i++)
    {
        for (j = left; j <= (right - left + 1) - i; j++)
        {
            if (arr[j] > arr[j + 1])
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    for (i = 0; i<10; i++)
        printf("%d",arr[i]);

}


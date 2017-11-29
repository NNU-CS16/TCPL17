#include <stdio.h>
void BubbleSort(int arr[], int left, int right);
int main()
{
    int arr[10];
    int left, right, i;
    printf("请输入数组：\n");
    for(i = 0; i < 10; i++)
       scanf("%d", &arr[i]);
    printf("请输入left right:\n");
    scanf("%d%d", &left, &right);
    left++;
    right++;
    BubbleSort(arr, left, right);
    return 0;
}
void BubbleSort(int arr[], int left, int right)
{
    int temp, i, j;
    for(i = left - 1; i < right - 1; i++)
        for(j = left - 1; j < right - 2 - i + left; j++)
           if(arr[j] > arr[j+1])
           {
             temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
           }

    for(i = 0; i<10; i++)
       printf("%d ", arr[i]);
    printf("\n");
}

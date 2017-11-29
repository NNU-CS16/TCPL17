#include<stdio.h>
void SelectionSort(int arr[], int left, int right);
int main()
{
    int arr[10];
    int i, left, right;
    printf("请输入数组（10）：\n");
    for(i = 0; i < 10; i++)
       scanf("%d", &arr[i]);
    printf("请输入排序区间\n");
    scanf("%d%d", &left, &right);
    SelectionSort(arr, left, right);
    return 0;
}
void SelectionSort(int arr[], int left, int right)
{
    int min, i, j, temp;
    min = left;
    for(j = left; j < right; j++)
    {
	min = j;
        for(i = j; i <= right; i++)
        {
            if(arr[i] < arr[min])
               min = i;
        }
        if(min != j)
        {
        temp = arr[j];
        arr[j] = arr[min];
        arr[min] = temp;
        }
    }
    printf("排序后：\n");    
    for(i = 0; i < 10; i++)
    printf("%d ", arr[i]);
    printf("\n");
}

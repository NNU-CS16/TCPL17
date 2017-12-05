 #include <stdio.h>
 void InsertSort (int arr[], int left, int right)
 {
    int i, j;
    for (i = left; i <= right; ++i)
    {
        if (arr[i] < arr[i - 1])
	{
           arr[0] = arr[i];
           for (j = i - 1; arr[j] > arr[0]; --j)
           {
           arr[j + 1] = arr[j];
           }
           arr[j + 1] = arr[0];
        }
    }
 }
 
 int main()
 {
    int arr[10] = {0};
    int i, left, right;
    printf("请输入区间：");
    scanf("%d %d", &left, &right);
    printf("请输入数组：");
    for (i = 1; i < 10; ++i)
    scanf("%d", &arr[i]);
    InsertSort(arr, left, right);
    for (i = left; i <= right; ++i)
       printf ("%d ", arr[i]);
    return 0;
 }

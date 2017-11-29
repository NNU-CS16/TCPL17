 #include <stdio.h>
 void SelectionSort(int arr[], int left, int right)
 {
  int temp, i, k;
  for (int i = left; i < right - left; ++i)
  {
    k = i;
    for (int j = i + 1; j < right; ++j)
    {
       if (arr[k] > arr[j])
       {
         k = j;
       }
    }
    if (k != i)
    {
      temp = arr[i];
      arr[i] = arr[k];
      arr[k] = temp;
    }
  }
 }

 int main()
 {
   int i, left, right;
   int arr[10];
   printf("请输入数组：");
   for (i = 0; i <10; ++i)
   scanf("%d", &arr[i]);
   printf("请输入区间：");
   scanf("%d %d", &left, &right);
   SelectionSort(arr, left, right);
   for (i = left; i < right; ++i)
   printf("%d ",arr[i]);
   return 0;
 }

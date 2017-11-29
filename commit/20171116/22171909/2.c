 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 void BubbleSort(int arr[], int left, int right)
 {
  int i, j, temp;
  for (i = left; i <= right; ++i)
    for (j = left; j <= right - i + 1; ++j)
       if (arr[j] > arr[j + 1])
       {
           temp = arr[j];
           arr[j] = arr[j + 1];
           arr[j + 1] = temp;
       }
 }
 
 int main()
 {
  int i, j, a, left, right;
  int arr[10000];
  printf("请输入区间：\n");
  scanf("%d %d", &left, &right);
  srand(time(NULL));
  for (j = left; j <= right; ++j)
  {
     a = rand() % 10000;
     arr[j] = a;
  }
  for (i = left; i <= right; ++i)
  printf("%d ",arr[i]);
  printf("\n");
  BubbleSort(arr, left, right); 
  for (i = left; i <= right; ++i)
  printf("%d ", arr[i]);
  printf("\n");
  return 0;
 }

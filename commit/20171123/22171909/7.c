 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 void Merge(int arr[], int left, int mid, int right)
 {
    int i = left, j = mid + 1, k = right, temp[1000];
    while(i != mid + 1 && j != right + 1)
    {
        if(arr[i] > arr[j])
            temp[++k] = arr[++j];
        else
            temp[++k] = arr[++i];
    }
    while(i != mid + 1)
        temp[++k] = arr[++i];
    while(j != right + 1)
        temp[++k] = arr[++j];
    for(i=left; i<= right; ++i)
        arr[i] = temp[i];
 }
 
 void MergeSort(int arr[], int left, int right)
 {
    int mid;
    int temp[1000];
    if(left < right)
    {
        mid = (left + right) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
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
  MergeSort(arr, left, right); 
  for (i = left; i <= right; ++i)
  printf("%d ", arr[i]);
  printf("\n");
  return 0;
 }


  #include <stdio.h>
  void BubbleSort(int arr[], int left, int right);

  int main()
  {
      int arr[100] = {0};
      int n, i, left, right;
      scanf("%d %d %d",&n,&left,&right);
      for (i = 0; i < n; i++)
      {
          scanf("%d",&arr[i]);
      }
      BubbleSort(arr, left, right);
      return 0;
  }

  void BubbleSort(int arr[], int left, int right)
  {
      int i, j, temp;
      for (j = left; j < right; j++)
      {
          for (i = left; i <= right - j; i++)
          {
              if (arr[i] > arr[i + 1])
              {
                  temp = arr[i];
                  arr[i] = arr[i + 1];
                  arr[i + 1] = temp;
              }
          }
      }
      for (i = left; i <= right; i++)
          printf("%d ",arr[i]);
  }



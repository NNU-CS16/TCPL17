  #include <stdio.h>
  int binary_search_recursive(int arr[], int left, int right, int query);
  int binary_search_iterative(int arr[], int left, int right, int query);

  int main()
  {
      int arr[10] = {9,0,7,6,3,5,4,14,18,8};
      int temp, i, j;
      for (j = 0; j < 9; j++)
      {
          for (i = 0; i <= 8 - j; i++)
          {
              if (arr[i] > arr[i + 1])
              {
                  temp = arr[i];
                  arr[i] = arr[i + 1];
                  arr[i + 1] = temp;
              }
          }
      }
      int left, right, query;
      scanf("%d %d %d",&left,&right,&query);
      int x = binary_search_recursive(arr, left, right, query);
      int y = binary_search_recursive(arr, left, right, query);
      printf("%d %d\n",x,y);
      return 0;
  }

  int binary_search_recursive(int arr[], int left, int right, int query)
  {
      if(right == left + 1)
      {
          if (arr[left] == query)
              return left;
          if (arr[right] == query)
              return right;
          else
              return -1;
      }
      if (right > left + 1)
      {
          if (query >= arr[(left + right) / 2] && query < arr[right])
              return binary_search_recursive(arr, ((left + right) / 2), right, query);
          if (query < arr[(left + right) / 2] && query > arr[left])
              return binary_search_recursive(arr, left, ((left + right) / 2 - 1), query);
      }
  }
  int binary_search_iterative(int arr[], int left, int right, int query)
  {
      do
      {
          if (right == left + 1)
          {
              if (arr[left] == query)
                 return left;
              if (arr[right] == query)
                 return right;
              else
                 return -1;
          }
          if (right > left + 1)
          {
              if (query >= arr[(left + right) / 2] && query < arr[right])
                  left = (left + right) / 2;
              if (query < arr[(left + right) / 2] && query > arr[left])
                  right = (left + right) / 2;
          }
      }while(right >= left + 1);
  }



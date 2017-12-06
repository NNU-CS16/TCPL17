  #include <stdio.h>
  
  int main()
  {
      int N;
      scanf("%d",&N);
      int arr[N];
      int i, j, k;
      for (i = 0; i < N; i++)
      {
          scanf("%d",&arr[i]);
      }
      int n = 0, b[N];
      for (i = 0; i < N; i++)
      {
          int flag = -1;
          for (j = 0; j < i; j++)
          {
              if (arr[j] > arr[i])
                  flag = 0;
          }
          for (k = i + 1; k < N; k++)
          {
              if (arr[k] < arr[i])
                  flag = 0;
          }
          if (flag == -1)
              b[n++] = arr[i];
      }
      printf("%d\n",n);
      int temp;
      for (i = 0; i < n; i++)
      {
          for (j = 0; j < n - i; j++)
          {
              if (b[j] > b[j + 1])
              {
                  temp = b[j];
                  b[j] = b[j + 1];
                  b[j + 1] = temp;
              }
          }
      }
      for (i = 0; i < n - 1; i++)
      {
          printf("%d ",b[i]);
      }
      printf("%d",b[n - 1]);
      printf("\n");
      return 0;
  }

  #include <stdio.h>
  int main()
  {
      int N;
      scanf("%d",&N);
      int a[N], b[N];
      int i = 0;
      while (i < N)
      {
          scanf("%d %d",&a[i],&b[i]);
          i++;
      }
      int M;
      scanf("%d",&M);
      int c[M];
      int j;
      for (j = 0; j < M; j++)
      {
          scanf("%d",&c[j]);
      }
      int d[M];
      int k, h = 0;
      for (j = 0; j < M; j++)
      {
          for (i = 0; i < N; i++)
          {
              if (c[j] == a[i])
              {
                  for (k =0; k < M; k++)
                  {
                      if (b[i] == c[k])
                      {
                          d[h] = c[j];
                          h++;
                          d[h] = c[k];
                          h++;
                      }
                  }
              }
          }
      }
      int ch = h;
      int arr[M];
      i = 0;
      for (j = 0; j < M; j++)
      {
          int flag = 0;
          for (h = 0; h < ch; h++)
          {
              if (c[j] == d[h])
                  flag = -1;
          }
          if (flag == 0)
          {
              arr[i] = c[j];
              i++;
          }
      }
      int x = i;
      printf("%d\n",i);
      int temp;
      for(i  = 0; i < x; i++)
      {
          for (j = 0; j < x - 1 - i; j++)
          {
              if (arr[j] > arr[j + 1])
              {
                  temp = arr[j];
                  arr[j] = arr[j + 1];
                  arr[j + 1] = arr[j];
              }
          }
      }
      for (i = 0; i < x - 1; i++)
      {
          printf("%d ",arr[i]);
      }
      printf("%d\n",arr[x - 1]);
      return 0;
  }            

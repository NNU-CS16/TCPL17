  #include <stdio.h>
  #include <math.h>
  int main()
  {
      int N;
      scanf("%d",&N);
      int m, n;
      int s = sqrt(N);
      for (n = s; n < N; n++)
      {
          if (N % n == 0)
          {
              m = n;
              n = N / m;
              break;
          }
      }
      int k, a[N];
      for (k = 0; k < N; k++)
      {
          scanf("%d",&a[k]);
      }
      int i, j, temp;
      for (i = 1; i < N; i++)
      {
          temp = *(a + i);
          for (j = i; j > 0 && *(a + j - 1) > temp; j--)
          {
              a[j] = a[j - 1];
          }
          a[j] = temp;
      }
      int arr[m][n];
      int c = 0, times = 0;
      k = N - 1;
      while (k >= 0)
      {
          for (i = 0, j = 0;j < n - c; j++, k--)
          {
              if (times > N) break;
              arr[i][j] = a[k];
              times++;
          }
          for (j--, i++; i < m - c; i++, k--)
          {
              if (times > N) break;
              arr[i][j] = a[k];
              times++;
          }
          for (i--, j--; j >= c; j--, k--)
          {
              if (times > N) break;
              arr[i][j] = a[k];
              times++;
          }
          for (j++, i--; i >= c + 1; i--, k--)
          {
              if (times > N) break;
              arr[i][j] = a[k];
              times++;
          }
          c++;
      }
      for (i = 0; i < m; i++)
      {
          for (j = 0; j < n; j++)
          {
              printf("%4d",arr[i][j]);
          }
          printf("\n");
      }
      return 0;
  }
<<<<<<< HEAD
      
      
=======

>>>>>>> 4cf8c4e4af49134b907ed6e65c5c31cc1d10c94d

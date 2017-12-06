  #include <stdio.h>
  
  int main()
  {
      int N;
      scanf("%d",&N);
      int i, j, total = 0;
      for (i = 1; i <= N; i++)
      {
          for (j = i; j > 0; j--)
          {
              if (i % j == 0 && j % 2 == 1)
              {
                  total += j;
                  break;
              }
          }
      }
      printf("%d\n",total);
      return 0;
  }

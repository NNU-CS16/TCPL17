  #include <stdio.h>
  #include <math.h>

  int main()
  {
      int M, N;
      scanf("%d%d",&M,&N);
      int n=2, num = 0;
      do
      {
          int i, flag = 0;
          for(i = 2; i <= sqrt(n); i++)
          {
              if(n % i == 0)
                  flag = 1;
          }
          if(flag == 0)
          {
              num++;
              if(num >= M && num <= N)
              {
                  printf("%4d",n);
                  int x = num -M + 1;
                  if(x % 10 == 0)
                      printf("\n");
              }
          }
          n++;
      }while(num <= N);
      printf("\n");
      return 0;
  }

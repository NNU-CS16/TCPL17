  #include <stdio.h>
  
  int main()
  {
      int n;
      scanf("%d",&n);
      do
      {
          char a[4] = {0};
          int i;
          for(i =3; i >= 0; i--)
          {
              a[i] = n % 10;
              n /= 10;
          }
          if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
          {
              int m = 1000 * a[0] + 100 * a[1] + 10 * a[2] + a[3];
              printf("%04d - %04d = 0000\n",m,m);
              break;
          }
          else
          {
              int temp, j;
              for(i = 0; i < 3; i++)
              {
                  for(j = 0; j < 3 - i; j++)
                  {
                      if (a[j] < a[j+1])
                      {
                          temp = a[j];
                          a[j] = a[j+1];
                          a[j+1] = temp;
                      }
                  }
              }   
              int x = 1000 * a[0] + 100 * a[1] + 10 * a[2] + a[3];
              int y = 1000 * a[3] + 100 * a[2] + 10 * a[1] + a[0];
              n = x - y;
              printf("%04d - %04d = %04d\n",x,y,n);
          }
      }while(n != 6174);
      return 0;
  }

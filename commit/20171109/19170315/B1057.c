  #include <stdio.h>
   
  int main()
  {
      char str[10001];
      int i;
      for(i = 0; i < 10001; i++)
      {
          scanf("%c",&str[i]);
          if(str[i] == '\n')
              break;
      }
      int k, N = 0;
      for(i = 0; str[i] != '\0'; i++)
      {
          if (str[i] >= 'A' && str[i] <= 'Z')
          {
              k = (int)str[i] - 64;
              N += k;
          }
          if (str[i] >= 'a' && str[i] <= 'z')
          {
              k = (int)str[i] - 96;
              N += k;
          }
      }
      char a[20] = {0};
      int num = 0, j = 0;
      do 
      {
          a[j] = N % 2;
          N /= 2;
          j++;
          num++;
      }while(N >0);
      int x = 0, y = 0;
      for(j = num; j >= 0; j--)
      {
          if(a[j] == 0)
              x++;
          else
              y++;
      }
      printf("%d %d\n",x-1,y);
      return 0;
  }

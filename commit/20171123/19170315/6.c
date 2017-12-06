  #include <stdio.h>
  #include <string.h>
  int count_substr(const char* str, const char* substr);

  int main()
  {
      char str[100], substr[30];
      int i, j;
      scanf("%s",str);
      scanf("%s",substr);
      int x = count_substr(str, substr);
      printf("%d\n",x);
      return 0;
  }

  int count_substr(const char* str, const char* substr)
  {
      int i, j, n = 0, times = 0;
      int len = strlen(substr);
      for (i = 0; str[i] != '\0'; i++)
      {
          if (str[i] == substr[0])
          {
              n = 1;
              if (len == 1)
              {
                  times++;
              }
              else
              {
                  for (i++,j = 1;str[i] != '\0' && substr[j] != '\0'; i++, j++)
                  {
                      if (str[i] == substr[j])
                          n++;
                      else
                          break;
                  }
                  if (n == len)
                  {
                      times++;
                      n = 0;
                  }
              }
           }
      }
      return times;
  }

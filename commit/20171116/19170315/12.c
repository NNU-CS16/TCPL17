  #include <stdio.h>
  #include <string.h>
  int my_strcmp(const char* str1, const char* str2);

  int main()
  {
      const char str1[20];
      const char str2[20];
      gets(str1);
      gets(str2);
      int n = my_strcmp(str1, str2);
      printf("%d\n",n);
      return 0;
  }

  int my_strcmp(const char* str1, const char* str2)
  {
      int len_str1 = strlen(str1);
      int len_str2 = strlen(str2);
      int i, j, flag = 0;
      for (i = 0,j = 0;i < len_str1,j < len_str2; i++,j++)
      {
          int x = (int)str1[i];
          int y = (int)str2[j];
          if (x < y)
          {
              flag = -1;
              break;
          }
          if (x > y)
          {
              flag = 1;
              break;
          }
      }
      return flag;
  }


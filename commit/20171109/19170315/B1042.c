  #include <stdio.h>

  int main()
  {
      char str[1001] = {0};
      int num[30] = {0};
      gets(str);
      int i, k = 0;
      for(i = 0; str[i] != '\0'; i++)
      {
          if (str[i] >= 'A' && str[i] <= 'Z')
          {
              str[i] = str[i] + 32;
              k = (int)str[i] - 97;
              num[k]++;
          }
          if (str[i] >= 'a' && str[i] <= 'z')
          {
              k = (int)str[i] - 97;
              num[k]++;
          }
      }
      int max = 0, max_i = 0;
      for(i = 0; i < 30; i++)
      {
          if (num[i] > max)
          {
              max = num[i];
              max_i = i;
          }
      }
      printf("%c %d\n",'a' + max_i,max);
      return 0;
  }


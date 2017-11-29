  #include <stdio.h>
  int my_strlen(const char *str);

  int main()
  {
      char str[100];
      int i;
      scanf("%s",str);
      int len = my_strlen(str);
      printf("%d\n",len);
      return 0;
  }

  int my_strlen(const char *str)
  {
      int n = 0, i = 0;
      for (i = 0; str[i] != '\0'; i++)
      {
          n++;
      }
      return n;
  }


  #include <stdio.h>
  #include <string.h>
  int substr(const char* str, const char* substr);

  int main()
  {
      const char str[100] = {"I dislike C"};
      const char str1[40] = {"love"};
      int i, j;
      int x = substr(str, str1);
      printf("%d\n",x);
      return 0;
  }

  int substr(const char* str, const char* substr)
  {
      int i, j, n = 0;
      int size = strlen(substr);
      for (i = 0; str[i] != '\0'; i++)
      {
          if(str[i] == substr[0])
          {   
              n++;
              for (j = 1, i++; substr[j] != '\0'; j++, i++)
              {
                  if (substr[j] == str[i])
                  {
                      n++;
                  }
                  else 
                      break;
              }
              if (n == size) break;
              n = 0;
          }
       }
       if (n == size)
           return i-n;
       return -1;
  }
           
                  


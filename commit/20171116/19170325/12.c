#include <stdio.h>
#include <string.h>

int my_strcmp(const char* str1, const char* str2);

int main(void)
{
   char str1[20], str2[20];

   printf("Please input str1 and str2 :\n");
   scanf("%s%s", str1, str2);
   printf("%d\n", my_strcmp(str1, str2));

   return 0;
}

int my_strcmp(const char* str1, const char* str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
      if (str1[i] > str2[i])
          return 1;
      else if (str1[i] < str2[i])
          return -1;
      i++;
    }
    if (str1[i] == '\0')
        return -1;
    else if (str2[i] == '\0')
        return 1;
    else
        return 0;
}

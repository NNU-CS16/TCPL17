#include <stdio.h>
int my_strcmp(const char* str1, const char* str2);

int main()
{
   char str1[100], str2[100];
   scanf("%s", str1);
   scanf("%s", str2);
   printf("%d\n", my_strcmp(str1, str2));
   return 0;
}

int my_strcmp(const char* str1, const char* str2)
{
   int i;
   for(i = 0; i < 100; i++)
   {
       if(str1[i] != '\0' && str2[i] != '\0')
       {
          if(str1[i] == str2[i])
          {
             continue;
          }
          if(str1[i] > str2[i])
          {
             return 1;
             break;
          }
       if(str1[i] < str2[i])
          {
             return -1;
             break;
          }
       }
       if(str1[i] == '\0' && str2[i] == '\0')
       {
          return 0;
          break;
       }
       if(str1[i] != '\0' && str2[i] == '\0')
       {
          return 1;
          break;
       }
       if(str1[i] == '\0' && str2[i] != '\0')
       {
          return -1;
          break;
       }
   }
}


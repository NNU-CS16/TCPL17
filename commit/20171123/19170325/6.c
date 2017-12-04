#include <stdio.h>
#include <string.h>

int count_substr(const char* str, const char* substr);

int main(void)
{
   char str[20], substr[20];

   printf("Please input str and substr :\n");
   scanf("%s %s", str, substr);
   printf("%d\n", count_substr(str, substr));

   return 0;
}

int count_substr(const char* str, const char* substr)
{
   int count = 0, i, j, k;

   for (i = 0; i < strlen(str); i++)
     for (j = i, k = 0; substr[k] == str[j]; k++, j++)
         if (substr[k + 1] == '\0')
         {
              count++;
              break;
         }
   return count;
}

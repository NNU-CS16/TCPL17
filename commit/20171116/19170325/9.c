#include <stdio.h>
#include <string.h>

int main(void)
{
   int i, j;
   char *str[] = {"Nanjing", "Wuxi", "Changzhou", "Shuzhou", "Xuzhou"};
   char *temp = NULL;
   for (i = 0; i < 4; i++)
     for (j = i + 1; j < 5; j++)
       if (strcmp(str[j], str[i]) < 0)
       {
           temp = str[i];
           str[i] = str[j];
           str[j] = temp;
       }
   for (i = 0; i < 5; i++)
     printf("%s\n", str[i]);

   return 0;
}

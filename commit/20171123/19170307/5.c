#include <stdio.h>
#include <string.h>

int main()
{
   char str[100];
   char substr[100];
   scanf("%s", str);
   int len1 = strlen(str);
   scanf("%s", substr);
   int len2 = strlen(substr);
   int j, i, k = 0, p = 0;
   for (j = 0; j < len1; j++)
   {
        if (str[j] == ' ') k++;
        if (str[j] == substr[0])
        {
            for (i = 1; i < len2; i++)
            {
                 if (substr[i] == str[j+i])
                     p++;
                 else p = 0;
            }      
        }
        if (p == len2 - 1) break;
   }
   if (p = len2 - 1)
       printf("%d\n", j - k);
   else printf("-1");
   return 0;
}


#include <stdio.h>
#include <string.h>

int main()
{
   char str[100];
   char substr[100];
   int j, i, p = 0, num1 = 0, num2 = 0;
   scanf("%s", str);
   int len1 = strlen(str);
   scanf("%s", substr);
   int len2 = strlen(substr);
   for (j = 0; j < len1; j++)
   {
       if (str[j] == substr[0])
       {
           for (i = 1; i < len2; i++)
           {
                if (substr[i] == str[j+i])
                    p = 1;
                else
                {
                    p = 0;
                    break;
                }
           }
       if (p = 1) num1++;
       if (p = 0) num2 = num2;
       }
   }
   printf("%d\n", num1);
   return 0;
}


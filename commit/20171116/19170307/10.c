#include <stdio.h>
int my_strlen(const char* str);

int main()
{
   char str[100];
   int len;
   scanf("%s", str);
   len = my_strlen(str);
   printf("%d\n", len);
   return 0;
}

int my_strlen(const char* str)
{
   int len, i = 0;
   while(str[i] != '\0')
         i++;
   len = i + 1;
   return len;
}


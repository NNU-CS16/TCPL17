#include <stdio.h>
#include <string.h>

void my_strcpy(char* dest, const char* src);

int main(void)
{
   char dest[20] = {0}, src[20] = {0};

   printf("Please input something :\n");
   scanf("%s", dest);
   printf("Please input something else :\n");
   scanf("%s", src);
   my_strcpy(dest, src);
   printf("%s\n", dest);

   return 0;
}

void my_strcpy(char* dest, const char* src)
{
   int i, j;

   i = strlen(dest);
   j = 0;
   while (src[j] != '\0')
     dest[i++] = src[j++];
}

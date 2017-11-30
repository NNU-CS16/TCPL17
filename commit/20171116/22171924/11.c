#include <stdio.h>
#include <string.h>
void my_strcpy(char *dest, const char *src)
{
    int i;
    int len = strlen(src);
    for(i = 0; i < len; i++)
        dest[i] = src[i];
    dest[len] = '\0';
}

int main()
{
   char dest[20] ,src[20];
   scanf("%s", src);
   my_strcpy(dest, src);
   printf("%s\n", dest);

   return 0;
}

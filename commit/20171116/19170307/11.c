#include <stdio.h>

void my_strcpy(char* dest, const char* src);

int main()
{
   char dest[100], src[100];
   scanf("%s", src);
   my_strcpy(dest, src);
   return 0;
}

void my_strcpy(char* dest, const char* src)
{
    if (dest == NULL || src == NULL)
	printf("wrong\n");
    if (dest == src)
	printf("%s\n", dest);
    char *temp = dest;
    while ( ( *dest++ = *src++) != '\0');
	     printf("%s\n", temp);
}

#include <stdio.h>
char * my_strcpy(char *dest,char *src)
{
    char *temp = dest;
    
    while(*src != '\0')
    {
        *temp = *src;
        temp++;
        src++;
    }
    *temp = '\0';
    return dest;
}
int main()
{
	char dest[25], src[25];
	scanf("%s", src);
	my_strcpy(dest, src);
	printf("%s\n", dest);
	return 0;
}

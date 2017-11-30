#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void my_strcpy(char *dest, const char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
	dest++;
	src++;
    }
    *dest = *src;
}

int main()
{
    char src[100], dest[100];
    scanf("%[^\n]", src);
    my_strcpy(dest, src);
    puts(dest);
    return 0;
}

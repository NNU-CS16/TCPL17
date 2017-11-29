#include <stdio.h>
void my_strcpy(char* dest, const char* src)
{
    int i,j = 0,a;
    for (i = 0; src[i]!='\0'; i++,j++)
    {
	dest[j] = src[i];
    }
    dest[j+1] = '\0';
    for (a = 0; a <= j + 1; a++)
	printf("%c",dest[a]);
}

int main()
{
    char dest[30] = "hello";
    char src[5] = "good";
    my_strcpy(dest,src);
    return 0;
}


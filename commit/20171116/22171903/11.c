#include <stdio.h>
#include <string.h>

void my_strcpy(char* dest, const char* src);
int main()
{
    char* dest;
    const char* src;
    char a[100], b[100];
    gets(a);
    gets(b);
    dest = a;
    src = b;
    my_strcpy(dest, src);
    
    return 0;
}

void my_strcpy(char* dest, const char* src)
{
    int a, b, i, j;
    a = strlen(dest);
    b = strlen(src);
    for (i = a, j = 0; j < b; i++, j++)
    	dest[i] = src[j];
    puts(dest);
}

#include <stdio.h>
#include <string.h>
void my_strcpy(char* dest, const char* src);

int main()
{
    char* dest;
    const char* src;
    char a[10] , b[10];
    gets (a);
    gets (b);
    dest = a;
    src = b;
    my_strcpy(dest , src);
    return 0;
}

void my_strcpy(char* dest, const char* src)
{
    int len1 , len2;
    int i , j;
    len1 = strlen (dest);
    len2 = strlen (src);

    for (i = len1 , j = 0; j < len2 ; i++ , j++)
        dest[i] = src[j];
    puts (dest);
}

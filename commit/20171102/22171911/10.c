#include <stdio.h>
#include <string.h>
int is_str_pal(const char* str)
{
    char a, b;
    int i = 0, len, c = 0;
    len = strlen(str);
    for (i = 0; i < len/2; i++)
    {
        a = str[i];
        b = str[len-1-i];
        if (a == b)
            c++;
    }   
    printf ("%d", -!(c == len/2));
}
int main( )
{
    char str[50];
    printf ("请输入一个字符串： ");
    scanf ("%s", str);
    is_str_pal(str);
    return 0;
}

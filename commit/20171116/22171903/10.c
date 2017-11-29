#include <stdio.h>
int my_strlen(const char* str);
int main()
{
    char *str;
    char a[100];
    gets(a);
    str = a;
    printf("%d\n", my_strlen(str));
    return 0;
}

int my_strlen(const char* str)
{
    int i, n;
    for (i = 0, n = 0; ; i++, n++)
    {
	if (str[i] == '\0')
	    break;
    }
    return n;
}


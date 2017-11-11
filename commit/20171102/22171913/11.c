#include <stdio.h>
#include <string.h>
void reverse(char* str);
int mian()
{
    char str[10];
    scanf("%s", str);
    reverse(str);
    printf("%s", str);
    return 0;
}
void reverse(char* str)
{
    int len, i;
    len = strlen(str);
    char a[10];
    strcpy(a,str);
    for (i = 0; i <= len - 1; i++)
    {
	str[i] = a[len - i - 1];
	    str[i] = a[len - i - 1];
    }
}


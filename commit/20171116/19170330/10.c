#include <stdio.h>

int my_strlen(const char* str)
{
    int l=0;
    while ((*str++) != '\0')
    {
        l++;
    }
    return l;
}

int main ()
{
    char str[1000];
    scanf("%s",str);
    int result;
    result = my_strlen(str);
    printf("%d\n",result);
    return 0;
}

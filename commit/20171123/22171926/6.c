#include <stdio.h>
#include <string.h>
int count_substr (const char* str, const char* substr)
{
    int count = 0, i, len;
    len = strlen (substr);
    while (*str)
    {
        if (len == 1)
        {
            if (*substr == *str)
                count++;
        }
        else
            for (i = 0; i < len; i++)
        {
            if (substr[i] == *str)
                str++;
            else break;
        }
        if (i == len)
        {
            count++; i++;
        }
        str++;
    }
    return count;
}
int main ()
{
    char str[20], substr[20];
    gets (str);
    gets (substr);
    printf ("%d\n", count_substr (str, substr));
    return 0;
}

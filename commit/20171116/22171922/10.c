#include<stdio.h>

int my_strlen(const char* str);
{
    int n = 0, i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}


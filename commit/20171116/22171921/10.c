#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int my_strlen(const char* str)
{
    if (str == NULL)  
        return 0;  
    return ('\0' != *str) ? (1 + my_strlen(++str)) : 0;
}

int main()
{
    char str[1000];
    scanf("%[^\n]",str);
    printf("%d\n",my_strlen(str));
    return 0; 
}  

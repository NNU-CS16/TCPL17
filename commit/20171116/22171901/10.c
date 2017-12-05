#include <stdio.h>
int my_strlen(const char* str);


int main()
{
    char *str;
    char s[10];
    gets (s);
    str = s;
    int res;
    res = my_strlen(str);
    printf ("%d\n" , res);
    return 0;
}

int my_strlen(const char* str)
{
    int i , j;
    for (i = 0 , j = 0; str[i] != '\0'; i++)
         j++;
    return j;

}


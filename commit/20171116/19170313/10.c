#include <stdio.h>
int my_strlen(const char *str);
int main()
{
    int j;
    char *str;
    char a [ 1000 ] ;
    scanf("%s", a);
    str = a;
    j = my_strlen(str);
    printf("%d\n", j);
    return 0;
}
int my_strlen(const char *str)
{
    int i = 0;
    while (str [ i ] != '\0')
    {
        i++;
    }
    return i;
}
        

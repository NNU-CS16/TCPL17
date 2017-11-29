#include <stdio.h>
int my_strcmp(const char *str1, const char *str2);
int main()
{
    int i;
    const char *str1, *str2;
    char a [ 100 ] , b [ 100 ] ;
    str1 = a, str2 = b;
    scanf("%s%s", a, b);
    i=my_strcmp(str1, str2);
    printf("%d\n", i);
    return 0;
}
int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;
    while (str1 [ i ] != '\0' && str2 [ i ] != '\0')
    {
        if (str1 [ i ] - str2 [ i ] == 0)
            i++;
        if (str1 [ i ] - str2 [ i ] < 0)
        {
            return -1;
            break;
        }
        if (str1 [ i ] - str2 [ i ] > 0)
        {
            return 1;
            break;
        }
    }
    if (str1 [ i ] == '\0' || str2 [ i ] == '\0')
        return 0;
}

#include <stdio.h>
void my_strcpy(char *dest, const char *src);
int main()
{
    char *dest;
    const char *src;
    char a [ 100 ] , b [ 100 ] ;
    dest = a, src = b;
    scanf("%s", b);
    my_strcpy(dest, src);
    return 0;
}
void my_strcpy(char *dest, const char *src)
{
    int i = 0;
    while (src [ i ] != '\0')
    {
        dest [ i ] = src [ i ] ;
        i++;
    }
    dest [ i ] = src [ i ] ;
    printf("%s\n", dest);
    return;
}

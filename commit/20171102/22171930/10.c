#include <stdio.h>
#include <string.h>
int is_str_pal(const char* str);
int main()
{
    int a;
    char str[]
    scanf("%d", &n);
    a=is_str_pal(const char* str);
    printf("%d", a);
    return 0;
}
   is_str_pal(const char* str)
{
    char i,j;
    for ( i=0,j=strlen(str)-1; i<j; i++,j--)
    if (str[i] != str[j])
    return -1;
    else 
    return 0;
}

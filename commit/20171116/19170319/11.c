#include <stdio.h>
#include <string.h>
void my_strcpy(char* dest,const char* src)
{
    int i;
    for (i = 0;i < strlen(src);i++)
        dest[i] = src[i];
}
int main()
{
    char dest[20],src[20];
    scanf("%s",src);
    my_strcpy(dest,src);
    puts(dest);
    return 0;
}

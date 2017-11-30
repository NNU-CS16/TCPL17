#include <stdio.h>
#include <string.h>
void my_strcpy(char *dest, char *src)
{
    int len = strlen(src);
    for (int i=0; i<len; i++)
      dest[i]=src[i];
    dest[len]='\0';
}
int main()
{
    char src[1000], dest[1000];
    scanf("%s%s", dest, src);
    my_strcpy(dest, src);
    printf("%s\n", dest);
    return 0;
}


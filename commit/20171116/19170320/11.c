#include<stdio.h>
#include<string.h>
void my_strcpy(char *dest,const char *src)
{
    int len=strlen(src);
    for(int i=0;i<len;i++)
        dest[i]=src[i];
    dest[len]='\0';
}
int main()
{
    char src[1000],dest[1000];
    scanf("%[^\n]",src);
    my_strcpy(dest,src);
    puts(dest);
    return 0;
}


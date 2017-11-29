#include <stdio.h>
#include <string.h>
void my_strcpy(char* dest,const char* src)
{
    int l=strlen(src);
    int i;
    for (i=0;i<l;i++)
        dest[i]=src[i];
        dest[l]='\0';
}

int main ()
{
    char src[1000],dest[1000];
    scanf("%s",src);
    my_strcpy(dest,src);
    puts(dest);
    return 0;
}

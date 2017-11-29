#include <stdio.h>
void my_strcpy(char* dest, const char* src)
{
    int i = 0;
    char temp;
    while (src[i] != '\0')
    {
	temp = src[i];
        dest[i] = temp;
        printf ("%c", dest[i]);
	i++;
    }
}
int main( )
{
    char src[1000], dest[1000];
    printf ("请输入字符串：");
    gets(src);
    my_strcpy(dest, src);
    return 0;
}


#include <stdio.h>
#include <string.h>
int my_strcpy (char * dest, const char* src)
{
    int i, len;
    len = strlen(src);
    for (i = 0; i < len; i++)
        dest[i] = src[i];
    printf ("%s\n", dest);
}
int main ()
{
    char dest[20];
    char src[20];
    scanf ("%s", src);
    my_strcpy (dest, src);
    return 0;
}


    

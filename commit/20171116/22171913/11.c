#include <stdio.h>
void my_strcpy(char *dest, const char *src);
int main()
{
    char dest[10000];
    const char scr[100];
    printf("Please input: ");
    gets(scr);
    my_strcpy(dest, scr);
    puts(dest);
    return 0;
}
void my_strcpy(char *dest, const char *scr)
{
    int i;
    for (i = 0;scr[i] != '\0'; i++)
    {
        dest[i] = scr[i];
    }
    dest[i] = scr[i];
}


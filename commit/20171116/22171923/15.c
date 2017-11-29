#include <stdio.h>
int main(int i, char*commd[])
{
    FILE* file=fopen(commd[1], "r");
    char c=fgetc(file);
    while (c != EOF)
    {
        putchar(c);
        c=getc(file);
    }
    fclose(file);
    return 0;
}


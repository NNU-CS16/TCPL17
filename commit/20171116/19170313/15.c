#include <stdio.h>
int main(int argc, char *argv [ ] )
{
    FILE *fp;
    fp = fopen(argv [ 1 ] , "r");
    char ch = fgetc(fp);
    while (ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);
    return 0;
}

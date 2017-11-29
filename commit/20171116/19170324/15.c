#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    if ((fp = fopen("argv[1]", "r")) == NULL)
    {
        printf("无法打开文件！\n");
        exit(1);
    }
    for (ch = fgetc(fp); ch != EOF;)
    {
        putchar(ch);
        ch = fgetc(fp);
    }
    printf("\n");
    if (fclose(fp))
        printf("无法打开文件！\n");

    return 0;
}


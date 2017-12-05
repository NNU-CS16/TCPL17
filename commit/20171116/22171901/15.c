nclude <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    FILE* fp;
    char ch;
    if ((fp = fopen(* (argv + 1) , "r" )) == NULL)
    {
        printf("无法打开文件!\n");
	    exit(1);
    }

    ch = fgetc(fp);
    while (feof(fp) == 0)
    {
        putchar(ch);
        ch = fgetc(fp);
    }

    printf("\n");
    if (fclose(fp))
	    printf("文件无关闭!\n");
    return 0;
}


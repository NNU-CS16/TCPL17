#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char *fname;
    char ch;
    fname = argv[1];
    if ((fp = fopen(fname,"r")) == NULL)
    {
	printf("无法打开该文件。\n");
	exit(1);
    }
    ch = fgetc(fp);
    while (ch != EOF)
    {
	putchar(ch);
	ch = fgetc(fp);
    }
    printf("\n");
    if (fclose(fp))
	printf("关闭出错。\n");
    return 0;
}


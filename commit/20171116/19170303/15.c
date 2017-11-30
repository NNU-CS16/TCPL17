#include<stdio.h>
#include<stdlib.h>

int main (int n,char *fname[])
{
    FILE *fp;
    char c;

    if ((fp=fopen(fname[1],"r")) == NULL)
    {
    printf("无法打开文件!\n");
    exit(1);
    }
    c=fgetc(fp);
    while (c != EOF)
    {
        putchar(c);
        c=fgetc(fp);
    }
    printf("\n");
    if(fclose(fp))
        printf("无法打开文件!\n");
    return 0;
}

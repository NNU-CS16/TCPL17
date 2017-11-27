 #include <stdio.h>
 #include <stdlib.h>
 int main (int argc, char *argv[])
 {
    FILE *fp;
    char ch;
    argc = 2;
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("无法打开文件!\n");
        exit(1);
    }
    ch = fgetc(fp);
    while (ch != EOF)
    {
        putchar (ch);
        ch = fgetc (fp);
    }
    printf ("\n");
    if (fclose (fp))
        printf("关闭文件错误！\n");
    return 0;
 }

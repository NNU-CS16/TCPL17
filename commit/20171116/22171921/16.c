#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *p1, *p2;
    char ch;
    if (argc != 3)
    {
        printf("命令错误!");
        exit(1);
    }
    if (argc == 3)
    {
        p1 = fopen(argv[1],"r");
        p2 = fopen(argv[2],"w");
        if (p1 == NULL || p2 == NULL)
        {
            printf("文件不存在!");
            exit(1);
        }
        ch = fgetc(p1);
        while (ch != EOF)
        {
            fputc(ch, p2);
            ch = fgetc(p1);
        }
            printf("拷贝成功!");
    }
    return 0;
}


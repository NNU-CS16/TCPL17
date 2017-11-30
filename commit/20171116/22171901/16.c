#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    FILE* fp1, * fp2;
    int ch;
    if ((fp1 = fopen(* (argv + 1), "r")) == NULL)
    {
	printf("无法打开文件!\n");
	exit(1);
    }
    if ((fp2 = fopen(* (argv + 2), "w")) == NULL)
    {
        printf("无法打开文件1!\n");
        exit(1);
    }

    ch = fgetc(fp1);
    while (feof(fp1) == 0)
    {
        fputc (ch , fp2);
        ch = fgetc(fp1);
    }

    ch = fgetc(fp2);

}


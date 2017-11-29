#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    FILE* p;
    char a;
    if ((p = fopen(* (argv + 1), "r")) == NULL)
    {
	printf("无法打开文件!\n");
	exit(1);
    }
    a = fgetc(p);
    while (feof(p) == 0)
    {
	putchar(a);
	a = fgetc(p);
    }
    printf("\n");
    if (fclose(p))
	printf("文件无关闭!\n");
     return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* p, * q;
    int a;
    if ((p = fopen(* (argv + 1), "r")) == NULL)
    {
	printf("无法打开文件!\n");
	exit(1);
    }
    if ((q = fopen(* (argv + 2), "w")) == NULL)
    {
        printf("无法打开文件1!\n");
        exit(1);
    }
    a = fgetc(p);
    while (feof(p) == 0)
    {
	fputc(a, q);
	a = fgetc(p);
    }
/*    a = fgetc(q);
    while (feof(p) == 0)
    {
        putchar(q);
    }
    printf("\n");*/
    fclose(p);
    fclose(q);

    return 0;
}

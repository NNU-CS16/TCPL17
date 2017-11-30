#include <stdio.h>
#include <stdlib.h>
int main(int argc, char a[1000])
{
    char c;
    FILE *fp;
    printf ("请输入带路径的文件：");
    scanf ("%s", a);
    if ((fp = fopen (a, "r")) == NULL)
    {
	printf ("无法打开文件");
	exit(1);
    }
    c = fgetc(fp);
    while (c != EOF)
    {
	putchar(c);
	c = fgetc(fp);
    }
    printf ("\n");
    if (fclose(fp))
	printf ("无法打开文件\n");
    return 0;
}



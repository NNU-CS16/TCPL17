#include <stdio.h>
#include <stdlib.h>
int main(int argc, char fSourceName[80])
{
    FILE *pSourceFile, *pDestFile;
    int ch;
    char fDestName[80];
    printf ("请输入源文件名：");
    scanf ("%s", fSourceName);
    printf ("请输入目的文件名：");
    scanf ("%s", fDestName);
    if ((pSourceFile = fopen(fSourceName, "r"))== NULL)
    {
	printf ("Cannot open source file!\n");
	exit(1);
    }
    if((pDestFile = fopen(fDestName, "w")) == NULL)
    {
	printf ("Cannot open dest file!\n");
	exit(1);
    }
    ch = fgetc(pSourceFile);
    while (feof(pSourceFile) == 0)
    {
	fputc(ch, pDestFile);
	ch = fgetc(pSourceFile);
    }
    fclose(pSourceFile);
    fclose(pDestFile);
    return 0;
}
     



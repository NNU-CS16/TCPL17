#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[])
{
    FILE *pS, *pD;
    char *fs, *fd;
    int ch, i;
    argc = 3;
    fs = argv[1];
    fd = argv[2];
    if ((pS = fopen(fs, "r")) == NULL)
    {
        printf ("无法打开\n");
        exit(1);
    }
    if ((pD = fopen(fd, "w")) == NULL)
    {
	printf("无法打开\n");
        exit(1);
    }
    ch = fgetc(pS);
    while (feof(pS) == 0)
    {
        fputc(ch,pD);   
	ch = fgetc(pS);
    }
    fclose(pS);
    fclose(pD);
    return 0;
 }

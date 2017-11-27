#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1,*fp2 ;
    char c;
    if ((fp1=fopen("I:\\cstudy\\project1\\1.txt", "r"))==NULL)
    {
        printf("connot open\n");
        exit(0);
    }
    if ((fp2=fopen("I:\\cstudy\\project1\\2.txt", "w"))==NULL)
    {
        printf("connot open\n");
        exit(0);
    }

    while ((c = fgetc(fp1)) != EOF)
    {
        fputc(c,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(int n,char *a[])
{
    FILE *fp1, *fp2;
    int ch;
    if((fp1 = fopen(a[1],"r")) == NULL)
    {
        printf("无法打开\n");
        exit(1);
    }
    if((fp2 = fopen(a[2],"w")) == NULL)
    {
    printf("无法打开\n");
    exit(1);
    }
    ch = fgetc(fp1);
    while(feof(fp1) == 0)
    {
    fputc(ch,fp2);
    ch=fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}


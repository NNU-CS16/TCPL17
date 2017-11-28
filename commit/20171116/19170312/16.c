#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *ps,*pd;
    int ch;
    if((ps = fopen(argv[1],"r")) == NULL)
    {
        printf("Failed to open source file!\n");
        exit(1);
    }
    if((pd = fopen(argv[2],"w")) == NULL)
    {
        printf("Failed to open dest file!\n");
        exit(1);
    }
    ch=fgetc(ps);
    while(feof(ps) == 0)
    {
        fputc(ch,pd);
        ch=fgetc(ps);
    }
    fclose(ps);
    fclose(pd);
    return 0;
}

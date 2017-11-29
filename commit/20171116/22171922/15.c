#include<stdio.h>
#include<stdlib.h>
int main (int argc, char *argv[])
{
    FILE *fp;
    char ch;
    char *filename;
    argc =2;
    filename = argv[1];
    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can't open the file!\n");
            exit(1);
    }

    ch = fgetc(fp);
    while (ch !=EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }
    printf("\n");
        if (fclose(fp))
            printf("Close the file error!\n");
                return 0;
}

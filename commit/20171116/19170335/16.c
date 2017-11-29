    #include <stdio.h>
    #include <stdlib.h>
    int main(int argc, char *argv[])
    {
        FILE *fp1, *fp2;
        char ch;
        if ((fp1 = fopen(argv[1], "r")) == NULL)
        {
            printf("Can't open!\n");
            exit(1);
        }
        fp2 = fopen(argv[2], "w");
        ch = fgetc(fp1);
        while (ch != EOF)
        {
            fputc(ch, fp2);
            ch = fgetc(fp1);
        }
        fclose(fp1);
        fclose(fp2);
        return 0;
    }

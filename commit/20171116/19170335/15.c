    #include <stdio.h>
    #include <stdlib.h>
    int main(int argc, char *argv[])
    {
        char ch;
        FILE *fp;
        if ((fp = fopen(argv[1], "r")) == NULL)
        {
            printf("Can't open this file!\n");
            exit(1);
        }
        ch = fgetc(fp);
        while (ch != EOF)
        {
            putchar(ch);
            ch = fgetc(fp);
        }
        printf("\n");
        if (fclose(fp))
            printf("Can't close this file!\n");
        return 0;
    }
           



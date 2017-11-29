#include <stdio.h>
#include <stdlib.h>

int main()
{
        FILE *fp;
        char ch;

        if((fp=fopen("test.txt","r"))==NULL)
        {
                printf("can not open the file\n");
                exit(1);
        }
        ch=fgetc(fp);
        while(ch != EOF)
        {
                putchar(ch);
                ch=fgetc(fp);
        }
        printf("\n");
        if(fclose(fp))
                printf("error in closing file\n");

        return 0;
}

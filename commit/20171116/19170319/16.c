#include <stdio.h>
int main(int argc,char* argv[])
{
    FILE* sfp = fopen(argv[1],"r");
    FILE* tfp = fopen(argv[2],"w");
    char ch;
    ch = fgetc(sfp);
    while (ch != EOF)
    {
        fputc(ch,tfp);
        ch = fgetc(sfp);
    }
    fclose(sfp);
    fclose(tfp);
    return 0;
}

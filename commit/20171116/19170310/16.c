#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *in,*out;
    char ch;
    if((src=fopen("src_file","r"))==NULL) 
    {
        printf("canot find the src_file file!\n");
        exit(0);
    }
    if ((dest=fopen("dest_dir","w"))==NULL)
    {
        printf("canot find the dest_dir file!\n");
        exit(0);
    }
    ch=fgetc(dest);
    while (ch!=EOF)
    {
        fputc(ch,dest);
        putchar(ch); 
        ch = fgetc(src);
    }
    fclose(src);
    fclose(dest);
    puts("");
    return 0;
}

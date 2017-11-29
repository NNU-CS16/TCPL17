#include <stdio.h>
#include <stdlib.h>

int main()
{
        FILE *psourcefile,*pdestfile;
        int ch;

        if((psourcefile=fopen("sre_file","r"))==NULL)
        {
                printf("cannot open source file!\n");
                exit(1);
        }

        if((pdestfile=fopen("dest_dir","w"))==NULL)
        {
                printf("cannot open dest file!\n");
                exit(1);
        }
        ch=fgetc(psourcefile);
        while(feof(psourcefile)==0)
        {
                fputc(ch,pdestfile);
                ch=fgetc(psourcefile);
        }
        fclose(psourcefile);
        fclose(pdestfile);

        return 0;
}

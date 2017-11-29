#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
FILE *fsource,*fdest;
char ch;
while(--argc)
{
if((fsource=fopen(argv[1],"r"))==NULL)
{printf("Wrong!\n");exit(1);}
if((fdest=fopen(argv[2],"w"))==NULL)
{printf("Wrong!\n");exit(1);}
ch=fgetc(fsource);
while(feof==0)
{fputc(ch,fdest);ch=fgetc(fsource);}
fclose(fsource);
fclose(fdest);
}
return 0;
}


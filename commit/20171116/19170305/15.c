#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
FILE *fp;
char ch;
while(--argc)
{
if((fp=fopen(argv[1],"r"))==NULL)
{printf("Wrong!\n");exit(1);}
ch=fgetc(fp);
while(ch!=EOF)
{putchar(ch);ch=fgetc(fp);}
if(fclose(fp))
printf("Wrong!\n");
}
return 0;
}

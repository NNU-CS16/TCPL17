#include<stdio.h>
int main(int I,char* COMMD[])
{
FILE* file=fopen(COMMD[1],"r");
char c=fgetc(file);
while (c!=EOF)
	{
	putchar(c);
	c=getc(file);
	}
fclose(file);
return 0;
}

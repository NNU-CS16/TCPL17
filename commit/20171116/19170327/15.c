#include <stdio.h>
#include <stdlib.h>

int main(int n, char *fname[])
{
	FILE *fp;
	fp = fopen(fname[0],"r");
	char ch;
	if(fp == NULL)
	{
		printf("cannot open the file.");
		exit(1);
	}
	for(;feof(fp) == 0;)
	{
		ch == fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}

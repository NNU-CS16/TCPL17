#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[ ])
{
	FILE *fp;
	fp=fopen(argv[0],"r");
	char ch;

	if(fp == NULL)
	{
		printf("cannot open the file.");
		exit(1);
	}

	while(feof(fp)==0)
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}

	fclose(fp);

	return 0;
}

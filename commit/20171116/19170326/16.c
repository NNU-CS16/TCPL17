#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[ ])
{
	FILE *sourcefile,*destfile;
	char ch;
	sourcefile=fopen(argv[0],"r");
	destfile=fopen(argv[1],"w");

	if(sourcefile == NULL)
	{
		printf("cannot open the file.");
		exit(1);
	}

	if(destfile == NULL)
	{
		printf("cannot open the file.");
		exit(1);
	}

	while(feof(sourcefile) == 0)
	{
		ch = fgetc(sourcefile);
		fputc(ch,destfile);
	}

	fclose(sourcefile);
	fclose(destfile);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *pshowFILE;
	char ch;
	if ((pshowFILE = fopen(*++argv, "r")) == NULL)
	{
	  printf("Cannot open the file!\n");
	  exit(1);
	}
	ch = fgetc(pshowFILE);
	while (ch != EOF)
	{
	  putchar(ch);
	  ch = fgetc(pshowFILE);
	}
	printf("\n");
	if (fclose(pshowFILE))
	  printf("Cannot close the file!\n");

	return 0;
}

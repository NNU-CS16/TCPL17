#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	char *fname;
	argc = 2;
fname = argv[1];	
if ((fp = fopen(fname, "r")) == NULL)
{
printf("failed\n");
exit(1);
}
ch = fgetc(fp);
while (ch != EOF)
{
putchar(ch);
ch = fgetc(fp);
}
printf("\n");
if (fclose(fp))
printf("error\n");
return 0;
}

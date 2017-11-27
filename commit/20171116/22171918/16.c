#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	fp1 = fopen(argv[1], "r");
	int len = strlen(argv[1]);
	char c;
	char a[1] = "/";
	int i = len - 1;
	while (argv[1][i] != '/' && len >=1)
		i--;
	if (len >= 1)
		strcat(argv[2], argv[1] + i);
	else
		strcat(argv[2], a);
		strcat(argv[2], argv[1]);
	fp2 = fopen(argv[2], "w");
	c = fgetc(fp1);
	while (c != EOF)
	{
		fputc(c, fp2);
		c = fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}

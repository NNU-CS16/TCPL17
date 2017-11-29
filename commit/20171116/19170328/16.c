#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	
	FILE *ps, *pd;
	char *fs, *fd;
	int ch, i;
	argc = 3;

	fs = argv[1];
	fd = argv[2];

	if ((ps = fopen(fs, "r")) == NULL)
	{
		printf("Can't open the file!");
		exit(1);
	}
	if ((pd = fopen(fd, "w")) ==NULL)
	{
		printf("Can't oepn the file!");
		exit(1);
	}
	ch = fgetc(ps);
	while (feof(ps) == 0)
	{
		fputc(ch, pd);
		ch = fgetc(ps);
	}
	fclose(ps);
	fclose(pd);
	return 0;
}
 

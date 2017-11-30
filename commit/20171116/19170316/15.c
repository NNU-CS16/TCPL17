#include<stdio.h>

int main(char *work[])
{
	FILE *p;
	char a;
	p=fopen(work[1],"r");
	a=fgetc(p);
	while(a!=EOF)
	{
	putchar(a);
	a=fgetc(p);
	}
	fclose(p);
	return 0;
}

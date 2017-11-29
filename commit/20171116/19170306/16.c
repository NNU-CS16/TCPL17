#include<stdio.h>
int main(int I,char* COMMD[])
{
FILE* sors=fopen(COMMD[1],"r");
FILE* tagt=fopen(COMMD[2],"w");
char c=fgetc(sors);
while (c!= EOF)
	{
	fputc(c,tagt);
	c=fgetc(sors);
	}
fclose(sors);
fclose(tagt);
return 0;
}

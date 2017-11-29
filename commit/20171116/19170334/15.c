#include <stdio.h>/*文件读取并打印*/
#include <stdlib.h>

int main(int n, char *fname[])
{
	FILE *fp;
	char ch;
	if((fp = fopen(fname[1], "r")) == NULL)
	{
		printf("无法打开文件！\n");
		exit(1);
	}
	ch = fgetc(fp);
	while(!feof(fp))
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	printf("\n");
	if(fclose(fp))
		printf("无法打开文件！\n");
	return 0;
}

/*16.c_复制文件*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	
	FILE *pS, *pD;
	char fS[1000], fD[1000];
	int ch;
	argc = 2;
	printf("输入源文件名：");
	scanf("%s", fS);
	printf("输入目的文件名：");
	scanf("%s", fD);
	argv[1] = fS;
	argv[2] = fD;
	if ((pS = fopen(argv[1], "r")) == NULL)
	{
		printf("无法打开文件！\n");
		exit(1);
	}
	if ((pD = fopen(argv[2], "w")) ==NULL)
	{
		printf("无法打开文件！\n");
		exit(1);
	}
	ch = fgetc(pS);
	while (feof(pS) == 0)
	{
		fputc(ch, pD);
		ch = fgetc(pS);
	}
	fclose(pS);
	fclose(pD);
	return 0;
}

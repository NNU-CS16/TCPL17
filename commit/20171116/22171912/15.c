/*15.c_文件打印*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE *fp;
	char ch;
	char fname[100];
	printf("请输入文件名：");
	scanf("%s", fname);
	argv[1] = fname;
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("无法打开文件！\n");
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
		printf("文件关闭失败\n");
	return 0;
}

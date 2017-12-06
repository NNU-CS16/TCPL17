/*读取文本文件并打印*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char fname[100])
{
  FILE *fp;
  char ch;
  printf("请输入带路径的文件名:");
  scanf("%s", fname);
  if ((fp = fopen(fname, "r")) == NULL)
  {
	printf("无法打开文件!\n");
	exit(1);
  }
  ch = fgetc(fp);
  while (ch != EOF)
  {
	printf("%c", ch);
	ch = fgetc(fp);
  }
  printf("\n");
  if (fclose(fp))
	 printf("无法打开文件!\n");
  return 0;
}

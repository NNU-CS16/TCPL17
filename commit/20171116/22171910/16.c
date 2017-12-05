/*将一个文件*/
#include <stdio.h>
#include <stdlib.h>

int main(int ch, char fSourceName[80], char fDestName[80])
{
  FILE *pSourceFile, *pDestFile;
  printf("输入源文件名:");
  scanf("%s", fSourceName);
  printf("输入目的文件名:");
  scanf("%s", fDestName);
  if ((pSourceFile = fopen(fSourceName, "r")) == NULL)
  {
	printf("Cannot open source file!\n");
	exit(1);
  }
  if ((pDestFile = fopen(fDestName, "w")) == NULL)
  {
    printf("Cannot open source file!\n");
    exit(1);
  }
  ch = fgetc(pSourceFile);
  while (feof(pSourceFile) == 0)
  {
	fputc(ch, pDestFile);
	ch = fgetc(pSourceFile);
  }
  fclose(pSourceFile);
  fclose(pDestFile);
  return 0;
}

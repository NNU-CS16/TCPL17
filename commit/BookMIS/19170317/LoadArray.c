#include "main.h"

int LoadArray()
{
	/*以文本方式打开csv文件*/
	FILE *fp;
	if ((fp = fopen("BookArray.csv", "r")) == NULL)
	{
	  printf("不能打开该文件!\n");
	  exit(1);//文件打开失败。
	}
	/*将图书目录导入BookInfo链表中*/
	char str1[50], str2[20];
	int num;
	double pri;
	shift = (BookInfo *) malloc (sizeof(BookInfo));
	head = shift;
	while (fscanf(fp, "%s %s %d %lf", str1, str2, &num, &pri) != EOF)
	{
	  strcpy(shift -> name, str1);
	  strcpy(shift -> author, str2);
	  shift -> ISBN = num;
	  shift -> prize = pri;
	  newp = (BookInfo *) malloc (sizeof(BookInfo));
	  shift -> next = newp;
	  shift = newp;
	}
	shift = NULL;
	/*关闭文件*/
	fclose(fp);
	
	return head;
}

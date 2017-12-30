/*加载*/
#include "overall.h"

BOOK* Load()
{
	int i;
	BOOK* p = (BOOK*)malloc(sizeof(BOOK));
	BOOK* head = p;
	p -> next = NULL;
	FILE *fp;
	fp = fopen("booklist.csv","r");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		exit(-1);
	}
	printf("ISBN\t书名\t\t作者\t\t价格\n");
	for (i = 0; i < 15; ++i)
	{
		p = (BOOK*)malloc(sizeof(BOOK));
		fscanf(fp,"%s%s%s%lf",p -> ISBN, p -> name, p -> author, &p -> price);
		printf("%s\t%s\t\t%s\t\t%lf\n",p -> ISBN, p -> name, p -> author, p -> price);
		p = p -> next;
	}
	p = NULL;
	fclose (fp);
	return head;
}

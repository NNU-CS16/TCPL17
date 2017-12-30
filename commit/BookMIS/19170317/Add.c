#include "main.h"

void Add()
{
	shift = head;
	BookInfo *ins;
	int n, i;
	printf("插入几条图书信息:\n");
	printf("—————— ");
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
	  ins = (BookInfo *) malloc (sizeof(BookInfo));
	  printf("请输入图书信息:\n");
	  printf("—————— 书名: ");
	  scanf("%s", ins -> name);
	  printf("—————— 作者: ");
	  scanf("%s", ins -> author);
	  printf("—————— ISBN: ");
	  scanf("%d", &ins -> ISBN);
	  printf("—————— 标价:");
	  scanf("%lf", &ins -> prize);
	  ins -> next = shift;
	  shift = ins;
	}
	head = ins;
	
	/*打开文件*/
	FILE *fp;
	if((fp = fopen("BookArray.csv", "w")) == NULL)
	{
	  printf("无法打开文件!");
	  exit(1);
	}
	/*将添加后的书籍信息存入文件中*/
	fwrite(head, sizeof(BookInfo), sum+n, fp);
	fclose(fp);
}

#include "main.h"

void Delete()
{
	printf("\n");
	Show();
	printf("\n");
	int i;
	int c, n;
	BookInfo *pre;
	printf("请输入欲删图书的数目:\n");
	printf("—————— ");
	scanf("%d", &n);
	/*删除图书信息*/
	for (i = 0; i < n; ++i)
	{
	  printf("请输入要删除图书的ISBN:\n");
	  printf("—————— ");
	  scanf("%d", &c);
	  shift = head;
      while (shift -> ISBN != c && shift != NULL)
	  {
		pre = shift;
    	shift = shift -> next;
	  }
      if (shift == NULL)
    	printf("找不到该图书!");
      else
      {
    	printf("图书名: %s\t", shift -> name);
    	printf("作者: %s\t", shift -> author);
    	printf("ISBN: %d\n", shift -> ISBN);
      }
	  pre -> next = shift -> next;
	  printf("已删除!\n");
	}
	
	/*打开文件*/
	FILE *fp;
	if ((fp = fopen("BookArray.csv", "w")) == NULL)
	{
	  printf("无法打开文件!\n");
	  exit(1);
	}
	/*将删除后的图书目录存储到文件中*/
	fwrite(head, sizeof(BookInfo), sum-n, fp);
	fclose(fp);
}

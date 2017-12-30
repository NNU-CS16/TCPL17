#include "main.h"

void Modify()
{
	printf("以下为所有图书信息:\n");
	Show();
	printf("\n"); //显示所有图书信息。
	int m, n;
	int i;
	int c;
	printf("请问您要修改几本图书的信息:\n");
	printf("—————— ");
	scanf("%d", &n);
	/*修改图书信息*/
	for (i = 0; i < n; ++i)
	{
	  shift = head;
	  printf("请输入要修改图书的ISBN:\n");
	  printf("—————— ");
	  scanf("%d", &c);
	  while (shift != NULL)
	  {
		if (shift -> ISBN == c)
		  break;
		else
		  shift = shift -> next;
	  }
	  printf("请问您要修改:\n");
	  printf("1、作者  2、书名  3、标价\n");
	  printf("—————— ");
	  scanf("%d", &m);
	  printf("请输入修改信息:\n");
	  printf("—————— ");
	  switch(m)
	  {
		case 1:
	    {
		  scanf("%s", shift -> author);
		  break;
		}
		case 2:
		{
		  scanf("%s", shift -> name);
		  break;
		}
		case 3:
		{
		  scanf("%lf", shift -> prize);
		  break;
		}
	  }
	}
	
	/*打开文件*/
	FILE *fp;
	if ((fp = (fopen("BookArray.csv", "w"))) == NULL)
	{
	  printf("无法打开文件!");
	  exit(1);
	}
	/*将修改后的图书信息存储到文件中*/
	fwrite(head, sizeof(BookInfo), sum, fp);
	fclose(fp);
}

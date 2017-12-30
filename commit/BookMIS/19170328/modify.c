#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kyh.h"
struct book *modify(struct book *head)
{
	int cmd,flag=0;
	char newname[50];
	char newauthor[20];
	char ISBN[8];
	double newprice;
	int newnum;
	struct book *p;
	p=(struct book *)malloc(sizeof(struct book));
	p=head;
	printf("请输入待修改图书的ISBN:");
	scanf(" %[^\n]",ISBN);
	while(p!=NULL)
    {
   		if(strcmp(p->ISBN,ISBN)==0)
		{
			flag=1;
        	break;
		}
       	p=p->next;
  	}
	if(flag==1)
	{
		printf("请选择要修改的数据类型:\n");
		printf("(1)书名\n");
		printf("(2)作者\n");
		printf("(3)价格\n");
		printf("(4)库存\n");
		printf("请输入对应序号:");
		scanf("%d",&cmd);
		switch(cmd)
		{
			case 1:
				printf("请输入新的书名:");
				scanf(" %[^\n]",newname);
				strcpy(p->bookname,newname);
				break;
			case 2:
				printf("请输入新作者:");
				scanf(" %[^\n]",newauthor);
				strcpy(p->author,newauthor);
				break;
			case 3:
				printf("请输入修改后的价格:");
				scanf("%lf",&newprice);
				p->price=newprice;
				break;
			case 4:
				printf("请输入修改后的库存:");
				scanf("%d",&newnum);
				p->booknum=newnum;
				break;
			default:printf("Error Command!\n");
		}
	}
	else
		printf("未查询到该图书!");
		return head;
}

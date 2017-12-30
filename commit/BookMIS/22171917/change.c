#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
struct book *change(struct book *head)
{
	char newname[50]; char newauthor[20];
	char ISBN[8];     double newprice;
	int newnum, cmd, flag=0;
	struct book *p;
	p=(struct book *)malloc(sizeof(struct book));
	p=head;
	printf("请输入待修改图书的ISBN:");
	scanf(" %[^\n]",ISBN);
	while(p!=NULL)
         {
   	   if(strcmp(p->ISBN,ISBN)==0)
	    {
		flag=1;  break;
	    }
        	p=p->next;
  	 }
       	if(flag==1)
	{
		printf("请选择要修改的数据类型:\n");
		printf("(1)name\n");
		printf("(2)author\n");
		printf("(3)price\n");
		printf("(4)num\n");
		printf("请输入对应序号:");
		scanf("%d",&cmd);
		switch(cmd)
		{
			case 1:
			printf("please input the newname:");
			scanf(" %[^\n]",newname);
			strcpy(p->name,newname);
			break;
			case 2:
			printf("please input the newauthor:");
			scanf(" %[^\n]",newauthor);
			strcpy(p->author,newauthor);
			break;
			case 3:
			printf("please input the newprice:");
			scanf("%lf",&newprice);
			p->price=newprice;
			break;
			case 4:
			printf("please input the newnum:");
			scanf("%d",&newnum);
			p->num=newnum;
			break;
			default:printf("Error Command!\n");
		}
	}
	else
	 printf("no find the book!");
	 return head;
}

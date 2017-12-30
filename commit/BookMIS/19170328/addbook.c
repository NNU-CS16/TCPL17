#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kyh.h"
struct book *addbook(struct book *head)
{
	printf("请输入图书信息:\n");
    struct book *newnode = (struct book *)malloc(sizeof(struct book));
    printf("书名:");
    scanf(" %[^\n]",newnode -> bookname);
    printf("作者:");
    scanf(" %[^\n]",newnode -> author);
    printf("ISBN:");
    scanf(" %[^\n]",newnode -> ISBN);
    printf("价格:");
	scanf("%lf",&newnode -> price);
	printf("要添加的数目:");
	scanf("%d",&newnode -> addnum);
	struct book *p;
	int flag=0,mark=0;
    p = (struct book *)malloc(sizeof(struct book));
    for(p=head; p!=NULL; p=p->next)
		if(strcmp(p->ISBN,newp->ISBN)==0)
		{
			flag=1;
			break;
		}
	if(flag==0)
	{
		if(head==NULL)
		{
			head = newp;
			head -> next = NULL;
		}
		else
		{
			for(p=head;(p->next)!=NULL;p=p->next)
			{
				if(strcmp(newnode -> bookname,head -> bookname) < 0)
				{
					newnode->next=head;
					head=newnode;
					mark=1;
					break;
				}
				if(strcmp(newnode->bookname,(p->next)->bookname) < 0)
				{
					newnode -> next = p -> next;
					p -> next = newnode;
					mark=1;
					break;
				}
			}
			if(mark==0)
			{
				p->next=newndoe;
				newnode->next=NULL;
			}
		}
	}
	else
		p->num+=newp->num;
	return head;
}

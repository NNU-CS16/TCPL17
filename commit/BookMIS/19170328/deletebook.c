#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kyh.h"
struct book *deletebook(struct book *head)
{
 	int flag=0;
	char ISBN[8];
	struct book *p=(struct book *)malloc(sizeof(struct book));
	struct book *prev=(struct book *)malloc(sizeof(struct book));
        p = head;
	prev = head;
	printf("请输入待删除图书的ISBN:");
    scanf(" %[^\n]", ISBN);
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
		while(p!=NULL)
    	{
			if(prev->next==p || prev==p)
            	break;
			prev=prev->next;
		}
		p==head ? (head=head->next) : (prev->next=p->next);
		free(p);
	}
	else
		printf("未找到该图书!");
		return head;
}

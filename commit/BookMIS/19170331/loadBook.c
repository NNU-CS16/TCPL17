#include <stdio.h>
#include <stdlib.h>
#include "head.h"
struct book *loadBook()
{
	struct book *head,*p;
	char line[100];
	FILE *fp;
	if((fp=fopen("books.csv","r"))==NULL)
    	printf("文件打开失败!\n");
	head=(struct book *)malloc(sizeof(struct book));
	if(fgets(line,100,fp)!=NULL)
	{
		sscanf(line,"%[^\t] %[^\t] %[^\t]%lf%d",head->name,head->author,head->ISBN,&head->price,&head->num);
	head->next=NULL;
	}
	else 
		return NULL;
	while(fgets(line,100,fp)!=NULL)
	{
		p=head;
		while(p!=NULL)
		{
			if(p->next==NULL)
				break;
			p=p->next;
		}
		struct book *newp=(struct book *)malloc(sizeof(struct book));
		sscanf(line,"%[^\t] %[^\t] %[^\t]%lf%d",newp->name,newp->author,newp->ISBN,&newp->price,&newp->num);
		p->next=newp;
		newp->next=NULL;
	}
	fclose(fp);
	return head;
}


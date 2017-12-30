#include <stdio.h>
#include <stdlib.h>
#include "kyh.h"
struct book *loadbook()
{
	struct book *head,*p;
	char line[100];
	FILE *fp;
	if((fp=fopen("BOOK.csv","r"))==NULL)
    	printf("文件打开失败!\n");
	head = (struct book *)malloc(sizeof(struct book));
	if(fgets(line,100,fp)!=NULL)
	{
		sscanf(line,"%[^\t] %[^\t] %[^\t]%lf%d", head -> bookname, head -> author, head -> ISBN, &head -> price, &head -> booknum);
	    head -> next = NULL;
	}
	else 
		return NULL;
	while(fgets(line,100,fp)!=NULL)
	{
		p = head;
		while(p != NULL)
		{
			if(p -> next == NULL)
				break;
			p = p -> next;
		}
		struct book *newnode=(struct book *)malloc(sizeof(struct book));
		sscanf(line, "%[^\t] %[^\t] %[^\t]%lf%d", newnode -> bookname, newnode -> author, newnode -> ISBN, &newnode -> price, &newnode -> booknum);
		p -> next = newnode;
		newnode -> next = NULL;
	}
	fclose(fp);
	return head;
}

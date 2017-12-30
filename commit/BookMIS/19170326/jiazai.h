#ifndef JIAZAI_H
#define JIAZAI_H

#include<stdio.h>
#include<stdlib.h>
#include"function.h"
struct Book *jiazai( )
{
	struct Book *newp = NULL;
	struct Book *head = NULL;
	char line[100];
	FILE *fp = fopen("book.csv","r");
	if( fp == NULL )
	{
		printf("无法打开文件！\n");
		return NULL;
	}
	while( fgets(line,100,fp) != NULL )
	{
		newp = (struct Book *)malloc(sizeof(struct Book));
		sscanf(line,"%[^,]%*c%[^,]%*c%[^,]%*c%lf%*c]",newp->bookname,newp->author,newp->ISBN,&newp->price);
		newp->next = head;
		head = newp;
	}
	return head;
}
#endif

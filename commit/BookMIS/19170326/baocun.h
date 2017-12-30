struct Book
{
	char bookname[51];
	char author[21];
	char ISBN[9];
	double price;
	struct Book *next;
};

#ifndef BAOCUN_H
#define BAOCUN_H

#include<stdio.h>
#include<stdlib.h>

int baocun(struct Book *head)
{
	struct Book *p = head;
	FILE *fp;
	int  i=0;
	fp = fopen("book.csv","w");
	if( fp == NULL )
	{
		printf("无法打开文件！\n");
		exit(1);
	}
	while( p != NULL )
	{
		fprintf(fp,"%s,",p->bookname);
		fprintf(fp,"%s,",p->author);
		fprintf(fp,"%s,",p->ISBN);
		fprintf(fp,"%lf,",p->price);

		p = p->next;
	}
	fclose(fp);
	return 0;
}

#endif

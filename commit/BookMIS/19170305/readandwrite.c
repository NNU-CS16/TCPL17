#include<stdio.h>
#include<stdlib.h>
#include"chain.h"
#include"readandwrite.h"
book *head;
FILE *fp;
//Read data from file
book *read()
{
	book *p=NULL,*temp;
	if((fp=fopen("bookdata","r"))==NULL)
	{printf("Can't open this file\n");exit(1);}
	while(feof(fp)==0)
	{
			temp=(book *)malloc(sizeof(book));
			fscanf(fp,"%[^','],%[^','],%[^','],%lf\n",temp->bookname,temp->author,temp->ISBN,&temp->price);
			temp->next=p;
			p=temp;
	}
	fclose(fp);
	return p;
}
//Write data to file
void write(book *head)
{
	book *p=head;
	if((fp=fopen("bookdata","w"))==NULL)
	{printf("Can't open this file\n");exit(1);}
	while(p!=NULL)
	{
		fprintf(fp,"%s,%s,%s,%lf\n",p->bookname,p->author,p->ISBN,p->price);
		p=p->next;
	}
	fclose(fp);
}

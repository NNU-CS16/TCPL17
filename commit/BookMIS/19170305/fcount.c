#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"chain.h"
#include"readandwrite.h"
#include"fcount.h"

void countbook()
{
	book *bhead=read(),*p,*max,*min;
	p=bhead->next;max=bhead;min=bhead;
	int num=1;
	while(p!=NULL)
	{
		num++;
		if(p->price>max->price)
			max=p;
		if(p->price<min->price)
			min=p;
		p=p->next;
	}
	printf("\t\tThe number of our books is %d\n",num);
	printf("\t\tThe most expensive books are:\n");
	printf("\t\t%s,%s,%s,%f\n",max->bookname,max->author,max->ISBN,max->price);
	p=max->next;
//	p=read();
	while(p!=NULL)
	{
		if(p->price==max->price)
			printf("\t\t%s,%s,%s,%lf\n",p->bookname,p->author,p->ISBN,p->price);
		p=p->next;
	}
//	p=read();
	p=min->next;
	printf("\t\tThe cheapest books are:\n");
	printf("\t\t%s,%s,%s,%lf\n",min->bookname,min->author,min->ISBN,min->price);
	while(p!=NULL)
	{
		if(p->price==min->price)
			printf("\t\t%s,%s,%s,%lf\n",p->bookname,p->author,p->ISBN,p->price);
		p=p->next;
	}
	bhead=release(bhead);
}

void countauthor()
{
	book *bhead,*p;
	bhead=read();p=bhead;
	writer *whead,*q=NULL,*temp,*qrev,*max;
	while(p!=NULL)
	{
		qrev=q;
		while(qrev!=NULL)
		{
			if(strcmp(qrev->name,p->author)==0)
			{qrev->num++;break;}
			qrev=qrev->next;
		}
		if(qrev==NULL)
		{
                temp=(writer *)malloc(sizeof(writer));
                strcpy(temp->name,p->author);
                temp->num=1;
                temp->next=q;
                q=temp;
		}
		p=p->next;
	}

	whead=q;
	int n=0;
	printf("\n");

	max=whead;qrev=whead;
	while(qrev!=NULL)
	{
		n++;
		if(qrev->num>max->num)	max=qrev;
		qrev=qrev->next;
	}
	printf("\t\tThe number of authors is %d\n",n);
	printf("\t\tThe authors who have the most books are:\n");
	printf("\t\t%s\n",max->name);
	qrev=max->next;
	while(qrev!=NULL)
	{
		if(qrev->num==max->num)
			printf("%s\n",qrev->name);
		qrev=qrev->next;
	}
	bhead=release(bhead);
	whead=Release(whead);
}

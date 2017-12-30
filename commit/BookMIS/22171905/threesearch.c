#include<stdio.h>
#include<string.h>
#include"chain.h"
#include"threesearch.h"

void searchbookname(char str[],book *head)
{
	book *p=head;
	long unsigned int i,j;
	long unsigned int n=strlen(p->bookname),m=strlen(str);
	int num=0;
	char str2[m];
	while(p!=NULL)
	{
		for(i=0;i<50-m;i++)
		{
			for(j=0;j<m;j++)
				str2[j]=p->bookname[i+j];
			if(strcmp(str,str2)==0)
			{printf("\t\t%s,%s,%s,%lf\n",p->bookname,p->author,p->ISBN,p->price);num++;break;}
		}
		p=p->next;
	}
	if(num==0)
		printf("\t\tNo found!\n");
}

void searchauthor(char str[],book *head)
{
	book *p=head;
	int num=0;
	while(p!=NULL)
	{
		if(strcmp(str,p->author)==0)
		{printf("\t\t%s,%s,%s,%f\n",p->bookname,p->author,p->ISBN,p->price);num++;}
		p=p->next;
	}
	if(num==0)
		printf("\t\tNo found!\n");
}


void searchISBN(char str[],book *head)
{
	book *p=head;
	int num=0;
	while(p!=NULL)
	{
		if(strcmp(str,p->ISBN)==0)
		{printf("\t\t%s,%s,%s,%f\n",p->bookname,p->author,p->ISBN,p->price);num++;break;}
	}
	if(num==0)
		printf("\t\tNo found!\n");
}

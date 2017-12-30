#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"
int compare(const void* a,const void* b)
{
return strcmp((*((struct Book*)a)).ISBN,(*((struct Book*)b)).ISBN);
}

struct Book* reverse(struct Book* bookhead)
{
struct Book* newbookhead=NULL;
struct Book* next=NULL;
while (bookhead!=NULL)
	{
	next=bookhead->next;
	bookhead->next=newbookhead;
	newbookhead=bookhead;
	bookhead=next;
	}
return newbookhead;
}

void addnewbook(FILE* sourcefile,struct Book* bookhead,struct Authorchain* Authornamedic[][26],struct Keywordchain* Keyworddic[][27])
{
extern long int booknumber;
int i,newbooknumber;
printf("Input number of new books\n");
scanf("%d",&newbooknumber);
if (newbooknumber==0) return;
struct Book* formerbooklist[booknumber],*tempbookhead=bookhead;
for (i=0;i<booknumber;i++)
	{	
	formerbooklist[i]=tempbookhead;
	tempbookhead=tempbookhead->next;
	}
struct Book* newbooklist=(struct Book*)malloc(sizeof(struct    Book)*newbooknumber);
for (i=0;i<newbooknumber;i++)
	scanf("%s%s%s",(newbooklist[i]).title,(newbooklist[i]).author,(newbooklist[i]).ISBN);
(booknumber)+=newbooknumber;
qsort(newbooklist,newbooknumber,sizeof(struct Book),compare);
struct Book* newbookhead=NULL,*temp=NULL;
i=0;
while (bookhead!=NULL&&i<newbooknumber)
	{
	if (strcmp(bookhead->ISBN,newbooklist[i].ISBN)<0)
		{
		temp=bookhead->next;
		bookhead->next=newbookhead;
		newbookhead=bookhead;
		bookhead=temp;
		}
	else	{
		newbooklist[i].next=newbookhead;
		newbookhead=&newbooklist[i];
		i++;
		}
	}
	if (bookhead==NULL)
		for (;i<newbooknumber;i++)
			{
			newbooklist[i].next=newbookhead;
			newbookhead=&newbooklist[i];
			}
	else	{
		while (bookhead!=NULL)
			{
			temp=bookhead->next;
			bookhead->next=newbookhead;
			newbookhead=bookhead;
			bookhead=temp;
			}
		}
	newbookhead=reverse(newbookhead);
finishprogram(Authornamedic,Keyworddic,newbookhead);
for (i=0;i<booknumber-newbooknumber;i++)	free(formerbooklist[i]);
free(newbooklist);
}

struct Book* defaultion(struct Book* bookhead,FILE* sourcefile,struct Authorchain* Authornamedic[][26],struct Keywordchain* Keyworddic[][27],struct Book* ISBN[])
{
int i;
for (i=0;i<booknumber;i++)
	{
	struct Book* temp=(struct Book*)malloc(sizeof(struct Book));
        fscanf(sourcefile,"%s%s%s",temp->title,temp->author,temp->ISBN);
	addauthorchain(Authornamedic,temp);
        addkeywordchain(Keyworddic,temp);
	ISBN[i]=temp;
	temp->next=bookhead;
	bookhead=temp;
	}
return reverse(bookhead);
}


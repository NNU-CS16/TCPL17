#include<string.h>
#include<stdio.h>
#include "head.h"
#include<stdlib.h>
void addauthorchain(struct Authorchain* Authornamedic[][26],struct Book* book)
{
int i;
char firstname,lastname;
for (i=0;i<20;i++) if (*(book->author+i)>='A') 
			{firstname=(*(book->author+i));i++;break;}
for (;i<20;i++) if (*(book->author+i)>='A') 
			{lastname=(*(book->author+i));break;}
struct Authorchain* chainhead=Authornamedic[firstname-'A'][lastname-'A'];
while (chainhead!=NULL&&strcmp(chainhead->authorname,book->author)!=0)
	chainhead=chainhead->next;
if (chainhead==NULL) //add a new author
	{
	struct Authorchain* temp=(struct Authorchain*)malloc(sizeof(struct Authorchain));
	strcpy(temp->authorname,book->author);
	temp->next=Authornamedic[firstname-'A'][lastname-'A'];
	Authornamedic[firstname-'A'][lastname-'A']=temp;
	temp->hisbook=NULL;
	chainhead=temp;
	}
struct Authorbookchain* newbook=(struct Authorbookchain*)malloc(sizeof(struct Authorbookchain));
newbook->next=chainhead->hisbook;
newbook->book=book;
chainhead->hisbook=newbook;
}

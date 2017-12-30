#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "head.h"
void searchbyauthorname(struct Authorchain* Authornamedic[][26])
{extern long int booknumber;
char name[20];scanf("%s",name);setbuf(stdin,NULL);
printf("search for author:%s\n",name);
char firstname,lastname;int i;
for (i=0;i<20;i++) if (name[i]>='A') 
			{firstname=name[i];i++;break;}
for (;i<20;i++) if (name[i]>='A') 
			{lastname=name[i];break;}
struct Authorchain* temp=Authornamedic[firstname-'A'][lastname-'A'];
	while (temp!=NULL&&strcmp(temp->authorname,name)!=0)
		temp=temp->next;
if (temp==NULL) 	
	printf("Author not found!\n");//warning:no author
else	{
	printf("%s's books are:\n",name);
	struct Authorbookchain* hisbook=temp->hisbook,*shift;
	shift=hisbook;
	printf("///////////////////////////////////////////////////////////////\n");
	while (shift!=NULL)
		{
		if ((shift->book->title)!=NULL)
		printonebook(shift->book);
		shift=shift->next;
		}
	printf("////////////////////////////////////////////

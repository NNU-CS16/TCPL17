#include<string.h>
#include<stdio.h>
#include "head.h"
#include<stdlib.h>
void finishprogram(struct Authorchain* Authornamedic[][26],struct Keywordchain* Keyworddic[][27],struct Book* bookhead)
{
int i,j;
FILE* sourcefile=fopen("bookinfo.txt","w");
fprintf(sourcefile,"%ld\n",booknumber);
struct Book* temp1=bookhead,*temp2=bookhead;
while (bookhead)
	{
		if (*(bookhead->title)!='\0')
		fprintf(sourcefile,"%s %s %s\n",bookhead->title,bookhead->author,bookhead->ISBN);		
		bookhead=bookhead->next;	
	}
//clear the Authorchain and Keywordchain
fclose(sourcefile);
return;
for (i=0;i<26;i++)
	for (j=0;j<26;j++)
		{
		clearAuthorchain(Authornamedic[i][j]);
		clearKeywordchain(Keyworddic[i][j]);
		}
for (i=0;i<26;i++)
	clearKeywordchain(Keyworddic[i][26]);
}

void clearAuthorchain(struct Authorchain* target)
{
struct Authorchain* shift=NULL;
while (target!=NULL)
	{
	shift=target->next;
	struct Authorbookchain* temp=target->hisbook,*tempshift=NULL;
		while (temp!=NULL)
			{
			tempshift=temp->next;
			free(temp);
			temp=tempshift;
			}
	free(target);
	target=shift;
	}
}

void clearKeywordchain(struct Keywordchain* target)
{
struct Keywordchain* shift=NULL;
struct Keywordbookchain* temp=NULL,*tempshift=NULL;
while (target!=NULL)
        {
        shift=target;printf("target:%s\n",target->keyword);
	target=target->next;
        temp=shift->thisbook,tempshift=NULL;
                while (temp!=NULL)
                        {
			tempshift=temp;
                        temp=temp->next;
                        free(tempshift);
                        }
        free(shift);printf("freeshift\n");
        }
}

void freechain(struct Book* bookhead)
{
struct Book* temp=bookhead;
while (bookhead)
	{
	bookhead=bookhead->next;
	free(temp);
	temp=bookhead;
	}
}

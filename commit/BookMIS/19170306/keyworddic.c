#include<string.h>
#include<stdio.h>
#include "head.h"
#include<stdlib.h>
void addkeywordchain(struct Keywordchain* Keyworddic[][27],struct Book* book)
{
char temptitle[50]="\0";strcpy(temptitle,book->title);
int shift=0;char tempword[50]="";
while (temptitle[shift]!='\0')
	{
	int i=1;
	tempword[0]=temptitle[shift];shift++;
	while (temptitle[shift]<='z'&&temptitle[shift]>='a'&&temptitle[shift]!='\0')
		{
		tempword[i]=temptitle[shift];
		i++;
		shift++;		
		}
	for (int p=i;p<50;p++) tempword[p]='\0';
	char first=tempword[0],sec;
	if (i==1)
		sec=26+'a';
	else 	sec=tempword[1];
	struct Keywordchain* chainhead=NULL,*posi=NULL;
	chainhead=Keyworddic[first-'A'][sec-'a'];
	posi=chainhead;
	while (chainhead!=NULL&&strcmp(chainhead->keyword,tempword)!=0)
		chainhead=chainhead->next;
	if (chainhead==NULL)
		{
		chainhead=(struct Keywordchain*)malloc(sizeof(struct Keywordchain));
		strcpy(chainhead->keyword,tempword);
		chainhead->thisbook=NULL;
		chainhead->next=NULL;
		}
	struct Keywordbookchain* newbook=(struct Keywordbookchain*)malloc(sizeof(struct Keywordbookchain));
	newbook->book=book;
	newbook->next=chainhead->thisbook;
	chainhead->thisbook=newbook;
	chainhead->next=posi;
	Keyworddic[first-'A'][sec-'a']=chainhead;
	}
}

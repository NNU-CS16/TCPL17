#include<stdio.h>
#include<stdlib.h>
#include "head.h"
#include<string.h>
int main()
{
extern long int booknumber;long int sum=0,i=0;char number[20];
FILE* sourcefile=fopen("bookinfo.txt","r");
fscanf(sourcefile,"%s",number);
while (number[i]>='0'&&number[i]<='9') {sum*=10;sum+=number[i]-'0';i++;}
booknumber=sum;printf("Total books:%ld\n",booknumber);
struct Book* ISBN[booknumber];
struct Book* bookhead=NULL;
struct Authorchain* Authornamedic[26][26]={NULL};
struct Keywordchain* Keyworddic[26][27]={NULL};
bookhead=defaultion(bookhead,sourcefile,Authornamedic,Keyworddic,ISBN);
fclose(sourcefile);
char command[20];
printf("Welcome!\n");
	while(1)
	{
	printf("///////////////////////////////////////////////////////////////\n");
	printf("To print all books,input 'printall'\nTo search by author name,input 'author'\nTo search by keyword,input 'keyword'\nTo search by ISBN,input 'isbn'\nTo add new books,input 'add'\nTo quit the program,input 'quit'\n-->");
	scanf("%s",command);setbuf(stdin,NULL);
	if (strcmp(command,"printall")==0)
		{
		printf("///////////////////////////////////////////////////////////////\n");
		printallbook(bookhead);
		printf("///////////////////////////////////////////////////////////////\n");		
		continue;
		}
	if (strcmp(command,"keyword")==0)
		{
		searchbykeyword(Keyworddic);continue;
		}
	if (strcmp(command,"author")==0)
		{
		searchbyauthorname(Authornamedic);continue;
		}
	if (strcmp(command,"isbn")==0)
		{
		searchbyisbn(ISBN);continue;
		}
	if (strcmp(command,"add")==0)
		{
		printf("To initialize,the program should been restart\n");
		addnewbook(sourcefile,bookhead,Authornamedic,Keyworddic);
		break;
		}
	if (strcmp(command,"quit")==0)
		{
		printf("See you later!\n");
		finishprogram(Authornamedic,Keyworddic,bookhead);
		freechain(bookhead);
		break;
		}
	printf("///////////////////////////////////////////////////////////////\n");
	printf("Unknown command\n");
	}		 
return 0;
}

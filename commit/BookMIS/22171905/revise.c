#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"chain.h"
#include"readandwrite.h"
#include"function.h"
void Revise()
{
	book *head;
	head=read();
	book *p,*prev=head;
	p=(book *)malloc(sizeof(book));
	char str[8];
	printf("\t\tPlease input the ISBN of the book you want to revise:");
	scanf("%s",str);
	printf("\t\tPlease input the bookname,author,price revised:");
	scanf("%[^','],%[^','],%lf",p->bookname,p->author,&p->price);
	while(strcmp(prev->ISBN,str)!=0)
	{
		prev=prev->next;
	}
	strcpy(prev->bookname,p->bookname);
	strcpy(prev->author,p->author);
	prev->price=p->price;
	write(head);
	release(head);
}

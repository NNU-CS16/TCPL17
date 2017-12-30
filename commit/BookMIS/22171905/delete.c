#include<stdio.h>
#include<stdlib.h>
#include"chain.h"
#include"readandwrite.h"
#include"function.h"
void Delete()
{
	book *head,*newp;
	newp=(book *)malloc(sizeof(book));
	printf("\t\tPlease input the ISBN of the book you want to delete:");
	scanf("%s",newp->ISBN);
	head=read();
	head=Backspace(newp,head);
	write(head);
	release(head);
}

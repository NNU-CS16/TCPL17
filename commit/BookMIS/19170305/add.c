#include<stdio.h>
#include<stdlib.h>
#include"chain.h"
#include"readandwrite.h"
#include"function.h"

void Add()
{
	book *head,*newp;
	head=read();
	newp=(book *)malloc(sizeof(book));
	printf("\t\tPlease input the bookname,author,ISBN,price to add:");
	scanf("%[^','],%[^','],%[^','],%lf",newp->bookname,newp->author,newp->ISBN,&newp->price);
	head=insert(newp,head);
	write(head);
	release(head);
}

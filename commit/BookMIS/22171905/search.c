#include<stdio.h>
#include"chain.h"
#include"readandwrite.h"
#include"function.h"
#include"threesearch.h"
void Search()
{
	book *head;
	head=read();
	char ch;
	char str[50];
	printf("\t\tPlease input:\n");
	printf("\t\t'B' to search by right of Bookname.\n");
	printf("\t\t'A' to search by right of Author.\n");
	printf("\t\t'I' to search by right of ISBN.\n");
	printf("\t\tPlease input your order:");
	scanf("%c",&ch);	getchar();
	printf("\t\tPlease input the keyword you want to search:");
	scanf("%[^\n]",str);
	switch(ch)
	{
		case 'B':searchbookname(str,head);break;
		case 'A':searchauthor(str,head);break;
		case 'I':searchISBN(str,head);break;
				 //		default:printf("Sorry,we don't have such function!\n");
	}
	release(head);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
Book *Addbook(Book *head)
{
	Book *p, *prev;
	p = head;
	prev = NULL;
	Book *newp = (Book *)malloc(sizeof(Book));
	printf("Please input the name:");
	    scanf("%[^\n]", newp -> name);
	printf("Please input the writer:");
	    scanf("%[^\n]", newp -> writer);
	printf("Please input the ISBN:");
	    scanf("%[^\n]", newp -> ISBN);
	printf("Please input the price:");
	    scanf("%2f\n", &newp -> price);
	if (head == NULL)
	{
		newp -> next = head;
		head = newp;
		return head;
	}
	while (p != NULL)
	{
		if (strcmp(newp -> name, p -> name) < 0)
			break;
		prev = p;
		p = p -> next;
	}
	if (p == head)
	{
		newp -> next = p;
		head = newp;
		return head;
	}
	if (p == NULL)
	{
		newp -> next = p;
		prev -> next = newp;
	}
	return head;
}


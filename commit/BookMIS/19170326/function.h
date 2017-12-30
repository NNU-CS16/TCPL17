#ifndef FUNCTION_H
#define FUNCTION_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book *search(struct Book *head, char ISBN[ ])
{
	int flag = 0;
	struct Book *p = head;
	while( p != NULL )
	{
		if( strcmp(p->ISBN, ISBN) == 0 )
		{
			flag = 1;
			return p;
		}
		p = p->next;
	}
	if( flag == 0 )
		return NULL;
}

void errCmd()
{
	printf("Error Command!\n");
}

struct Book *insert(struct Book *head, struct Book *newp)
{
	newp->next = head;
	head = newp;
	return head;
}

#endif

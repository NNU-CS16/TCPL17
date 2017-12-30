#ifndef XIANSHI_H
#define XIANSHI_H

#include<stdio.h>
#include<stdlib.h>

void xianshi(struct Book *head)
{
	struct Book *p = head;
	while( p != NULL )
	{
		printf("%s  %s  %s  %lf\n",p->bookname,p->author,p->ISBN,p->price);
		p = p->next;
	}
}

#endif

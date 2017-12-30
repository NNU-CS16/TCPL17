#ifndef SHANCHU_H
#define SHANCHU_H

#include<stdio.h>
#include<stdlib.h>

struct Book *shanchu(struct Book *head, struct Book *target)		//前提是已找到对应链表
{
	struct Book *p = head;
	struct Book *prev = NULL;
	if( target == head )
	{
		head = head->next;
		free(target);
	}
	else
	{
		p = head->next;
		prev = head;
		while( p != NULL )
		{
			if( target == p )
			{
				prev->next = p->next;
				free(target);
			}
			p = p->next;
		}	
	}
	return head;
}

#endif

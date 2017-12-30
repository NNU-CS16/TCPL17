#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
Book *Deletebook(Book *head)
{
	Book *newp, *p;
	newp = NULL;
	p = head;
	char arr[9];
	printf("Please input the ISBN:\n");
	scanf("%s", arr);
	while (p != NULL)
	{
		if (strcmp(arr, p -> ISBN) == 0)
			break;
		newp = p;
		p = p -> next;
	}
	if (p == NULL)
	{
		printf("not find\n");
		return head;
	}
	if (p == head)
		head = head -> next;
	else
		newp -> next = p -> next;
	free(p);
	return head;
}

        

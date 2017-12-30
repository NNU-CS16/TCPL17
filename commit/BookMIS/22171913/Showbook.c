#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
Book *Showbook(Book *head)
{
	Book *p;
	Book *p = (Book *)malloc(sizeof(Book));
	p = head;
	while (p != NULL)
	{
		printf("%s %s %s %2f\n", p -> name, p -> writer, p -> ISBN, p -> price);
		p = p -> next;
	}
}

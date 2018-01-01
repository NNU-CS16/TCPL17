#include <stdio.h>
#include <stdlib.h>
#include "start.h"
void listall(struct book *p)
{
	while (p != NULL)
	{
		printf("%-30s\t %-20s\t %s    %lf\n", p->name, p->author, p->ISBN, p->price);                   	p = p->next;
        }
}

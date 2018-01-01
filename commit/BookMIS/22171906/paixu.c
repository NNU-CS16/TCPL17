#include <stdio.h>
#include <stdlib.h>
#include "Book.h"
	
void paixu(struct book *head)
{
	while (head != NULL)
	{
		printf("%-30s\t %-20s\t %s    %lf\n", head->Bname, head->Author, head->ISBN, head->Price);
		head = head->next;
	}
}


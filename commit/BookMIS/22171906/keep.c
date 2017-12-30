#include <stdio.h>
#include <stdlib.h>
#include "Book.h"

void keep(struct book *head)
{
	FILE *fp;
	if ((fp = fopen("book.csv", "w")) == NULL)
	{
		printf("Can't open!\n");
		exit (1);
	}
	
	while (head != NULL)
	{
		fprintf(fp,"%s %s %s %lf\n",head->Bname, head->Author, head->ISBN, head->Price);
		head = head->next;
		}
		if (fclose(fp))
		printf("NO!\n");
	}
			

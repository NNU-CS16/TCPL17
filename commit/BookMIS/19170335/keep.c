	#include <stdio.h>
	#include <stdlib.h>
	#include "cmd.h"
	void keep(struct book *head)
	{
		FILE *fp;
		if ((fp = fopen("BookInformation.csv", "w")) == NULL)
		{
			printf("Can't open!\n");
			exit (1);
		}
		while (head != NULL)
		{
			fprintf(fp,"%s %s %s %lf\n",head->bookname, head->bookauthor, head->booknumber, head->bookprice);
			head = head->next;
		}
		if (fclose(fp))
			printf("Can't close!\n");
	}
			

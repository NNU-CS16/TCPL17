	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include "cmd.h"
	struct book* read()
	{
		struct book *head = (struct book *)malloc(sizeof(struct book));
		char name[51];
		char author[21];
		char number[9];
		double prices;
		struct book *p = head;
		head->next = NULL;
		
		FILE* fp = fopen("BookInformation.csv", "r");
		if (fp == NULL)
		{
			printf("Can't open!\n");
			exit(1);
		}
    	while (fscanf(fp, "%s %s %s %lf", name, author, number, &prices) != EOF)
	    {
			p = (struct book *)malloc(sizeof(struct book));
			strcpy(p->bookname,name);
			strcpy(p->bookauthor,author);
			strcpy(p->booknumber,number);
			p->bookprice = prices;
			p->next = head->next;
			head->next = p;
		}
		head = head->next;
		if (fclose(fp))
			printf("Can't close\n");
		return head;
	}





#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Book.h"
struct book* load()
{
	struct book *head = (struct book *)malloc(sizeof(struct book));
	char name[51];
	char author[21];
	char ISBN[9];
	double prices;
	struct book *p = head;
	head->next = NULL;
		
	FILE* fp = fopen("book.csv", "r");
	if (fp == NULL)
	{
		printf("Can't open!\n");
		exit(1);
	}
    while (fscanf(fp, "%s %s %s %lf", name, author, ISBN, &prices) != EOF)
	 {
		p = (struct book *)malloc(sizeof(struct book));
		strcpy(p->Bname,name);
		strcpy(p->Author,author);
		strcpy(p->ISBN,ISBN);
		p->Price = prices;
		p->next = head->next;
		head->next = p;
	}
	head = head->next;
	if (fclose(fp))
	printf("Can't close\n");
	return head;
}


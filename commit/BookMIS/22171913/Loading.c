#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
Book *Loading(Book *head)
{
	Book *p, *pre, *Thead;
	char line[100];
	head = (Book *)malloc(sizeof(Book));
	head->next = NULL;
	FILE *fp;
	fp = fopen("Bookinfo.txt", "r");
	if (fp == NULL)
	{
		printf("false!\n");
		exit(1);
	}
	while (fgets(line, 100, fp) != NULL)
	{
		sscanf(line, "%s %s %s %2f", head->name, head->writer, head->ISBN, &head->price);
		p = (Book *)malloc(sizeof(Book));
		p->next = NULL;
		pre = head;
		head->next = p;
		head = p;
	}
	pre->next = NULL;
	free(head);
	fclose(fp);
	return Thead;
}

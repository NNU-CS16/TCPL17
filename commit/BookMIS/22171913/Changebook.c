#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
Book *Changebook(Book *head)
{
	Book *p;
	printf("Please input the name you want to revise:\n");
	       p = Searchbook(head);
	printf("Please input information you revise:\n");
	printf("A -> name \n");
	printf("B -> writer \n");
	printf("C -> price \n");
	printf("please input: \n");
	char m;
	scanf("%c", &m);
	switch(m)
	{
		case'a':
			scanf("%s", p -> name);
			break;
		case'b':
			scanf("%s", p -> writer);
			break;
		case'c':
			scanf("%2f", &p -> price);
			break;
		default:
			printf("error\n");
			return p;
	}
	return p;
}


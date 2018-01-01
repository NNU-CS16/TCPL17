#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "start.h"
struct book* update(struct book *p)
{
	struct book *head;
	head = p;
	char arr[9];
	scanf("%s", arr);
	while (strcmp(p->ISBN, arr) != 0)
	{
		p = p->next;
	}
	if (p == NULL)
	{
		printf("can not find\n");
		return head;
	}
	else
	{
		printf("input the name\n");
		scanf("%s", p->name);

		printf("input the author\n");
		scanf("%s", p->author);

		printf(" sorry, the ISBN can not change\n");

		printf("input the prince\n");
		scanf("%lf", &p->price);

		return head;
	}

}

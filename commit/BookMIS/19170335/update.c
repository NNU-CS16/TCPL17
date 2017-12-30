	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include "cmd.h"
	struct book* update(struct book *p)
	{
		struct book *head;
		head = p;
		char arr[9];
		scanf("%s", arr);
		while (strcmp(p->booknumber, arr) != 0)
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
			printf("input the bokname\n");
			scanf("%s", p->bookname);

			printf("input the bookauthor\n");
			scanf("%s", p->bookauthor);

			printf(" sorry, the booknumber can not change\n");

			printf("input the bookprince\n");
			scanf("%lf", &p->bookprice);
			
			return head;
		}
	}


		


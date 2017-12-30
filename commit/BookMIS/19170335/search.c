	#include <stdio.h>
	#include <string.h>
	#include "cmd.h"
	void search(struct book *head)
	{
		int i;
		printf("search by bookname: 1\nsearch by author: 2\nsearch by number: 3\n");
		scanf("%d", &i);
		struct book *p;
		p = head;
		if (i == 1)
		{
			char arr[51];
			scanf("%s", arr);
			while (p != NULL)
			{
				if (strstr(p->bookname, arr) != NULL)
					printf("%s\n%s\n%s\n%lf\n", p->bookname, p->bookauthor, p->booknumber, p->bookprice);
				p = p->next;
			}
		}
		else if (i == 2)
		{
			char arr[21];
			scanf("%s",arr);
			while (p != NULL)
			{
				if (strcmp(p->bookauthor, arr) == 0)
					printf("%s\n%s\n%s\n%lf\n", p->bookname, p->bookauthor, p->booknumber, p->bookprice);
				p = p->next;
			}
		}
		else
		{
			char arr[9];
			scanf("%s",arr);
			while (p != NULL)
			{
				if (strcmp(p->booknumber, arr) == 0)
				{
					printf("%s\n%s\n%s\n%lf\n", p->bookname, p->bookauthor, p->booknumber, p->bookprice);
					break;
				}
				p = p->next;
			}
		}
	}








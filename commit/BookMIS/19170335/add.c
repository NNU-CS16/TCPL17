	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "cmd.h"
	struct book* add(struct book *p)
	{
		struct book *prev = (struct book *)malloc(sizeof(struct book));
		printf("input the name author number price\n");
		scanf("%s %s %s %lf", prev->bookname, prev->bookauthor, prev->booknumber, &prev->bookprice);
		prev->next = p;
		p = prev;
		return p;
	}


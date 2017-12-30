#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Book.h"
	
struct book* add(struct book *p)
{
	struct book *prev = (struct book *)malloc(sizeof(struct book));
	printf("Bookname Author ISBN Price\n");
	scanf("%s %s %s %lf", prev->Bname, prev->Author, prev->ISBN, &prev->Price);
	prev->next = p;
	p = prev;
	return p;
}


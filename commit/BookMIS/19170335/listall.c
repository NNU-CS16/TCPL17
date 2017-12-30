	#include <stdio.h>
	#include <stdlib.h>
	#include "cmd.h"
	void listall(struct book *p)
	{
		while (p != NULL)
		{
			printf("%-30s\t %-20s\t %s    %lf\n", p->bookname, p->bookauthor, p->booknumber, p->bookprice);
			p = p->next;
		}
	}

